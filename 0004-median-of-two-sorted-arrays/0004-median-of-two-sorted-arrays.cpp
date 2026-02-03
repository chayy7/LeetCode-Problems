class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        
        // mona shall i say u one plan? for both of us? say
        // we ll prepare for apti, ey regularly, okaa 1 hr, ok
        // in clg , not here, here only dsa...after lunch , we ll just bunk those classes
        // say smthg
        vector<int> mergedArr;
        int st1 = 0, st2 = 0;
        while(st1 < nums1.size() && st2 < nums2.size()){
            if(nums1[st1] <= nums2[st2]){
                mergedArr.push_back(nums1[st1]);
                st1++;
            }else{ // good observation
                mergedArr.push_back(nums2[st2]);
                st2++;
            }
        }
        while(st1 < nums1.size()){
            mergedArr.push_back(nums1[st1++]);       
        }
        while(st2 < nums2.size()){
            mergedArr.push_back(nums2[st2++]);       
        }
        
        double med = 0.0;
        if(mergedArr.size() % 2 == 0){
            med = (mergedArr[mergedArr.size() / 2] + mergedArr[mergedArr.size() / 2 - 1])/2.0; 
        }else{
            med = mergedArr[mergedArr.size() / 2];
        }
        
        
        
        return med;
    }
};