class StreamChecker {
public:
    struct Node {
        Node* child[26] = {};
        bool end = false;
    };

    Node* root;
    string stream;

    StreamChecker(vector<string>& words) {
        root = new Node();

        for (string w : words) {
            Node* cur = root;

            for (int i = w.size() - 1; i >= 0; i--) {
                int x = w[i] - 'a';

                if (!cur->child[x])
                    cur->child[x] = new Node();

                cur = cur->child[x];
            }

            cur->end = true;
        }
    }

    bool query(char letter) {
        stream += letter;
        Node* cur = root;

        for (int i = stream.size() - 1; i >= 0 && stream.size() - i <= 200; i--) {
            int x = stream[i] - 'a';

            if (!cur->child[x])
                return false;

            cur = cur->child[x];

            if (cur->end)
                return true;
        }

        return false;
    }
};