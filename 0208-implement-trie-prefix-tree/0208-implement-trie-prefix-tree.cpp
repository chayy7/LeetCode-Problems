class Trie {
public:
    Trie* children[26];
    bool eow;
    Trie() {
        for(int i=0;i<26;i++){
            children[i] = nullptr;
        }
        eow = false;
    }
    
    void insert(string word) {
        Trie* Root = this;
        for(int i=0;i<word.size();i++){
            int idx = word[i]-'a';
            if(Root->children[idx] == nullptr){
                Root->children[idx] = new Trie();
            }
            Root = Root->children[idx];
        }
        Root->eow = Root->children;
    }
    
    bool search(string word) {
        Trie* Root = this;
        for(int i=0;i<word.size();i++){
            int idx = word[i]-'a';
            if(Root->children[idx] == nullptr){
                return false;
            }
            Root= Root->children[idx];
        }
        return Root->eow;
    }
    
    bool startsWith(string prefix) {
        Trie* Root = this;
        for(int i=0;i<prefix.size();i++){
            int idx = prefix[i]-'a';
            if(Root->children[idx] == nullptr){
                return false;
            }
            Root= Root->children[idx];
        }
        return true;
    }
};

/**
 * Your Trie object will be instantiated and called as such:
 * Trie* obj = new Trie();
 * obj->insert(word);
 * bool param_2 = obj->search(word);
 * bool param_3 = obj->startsWith(prefix);
 */