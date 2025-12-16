class Solution {
public:
    vector<int> sortEvenOdd(vector<int>& arr) {
        if(arr.size() <=2){
            return arr;
        }
       vector <int> odd; 
       vector <int> even;
       for(int i=0;i<arr.size();i++){
            if(i%2 != 0){
                odd.push_back(arr[i]);
            }else{
                even.push_back(arr[i]);
            }
       }
       vector <int>res;
       sort(even.begin(),even.end()); // non-dec---> increasing
       sort(odd.rbegin(),odd.rend()); // non-inc---> decreasing
       int i=0,j=0;
       while(i<even.size() && j<odd.size()){ 
            res.push_back(even[i++]);
            res.push_back(odd[j++]);
       }
       
       if(even.size() > odd.size()){
        res.push_back(even.back());
       }
       
       return res;
    }
};