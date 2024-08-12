//https://leetcode.com/problems/intersection-of-two-arrays/
/*
class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
       int n = nums1.size();
       sort(nums1.begin(), nums1.end());
       int m = nums2.size();
       sort(nums2.begin(), nums2.end());

       int i=0;
       int j=0;
       vector<int> result;
       while(i<n && j<m){
            if(nums1[i]==nums2[j]){
                result.push_back(nums1[i]);
            
                while(i<n-1 && nums1[i]==nums1[i+1]){
                    i++;
                }
                while(j<m-1 && nums2[j]==nums2[j+1]){
                    j++;
                }
                i++;
                j++;
            }
            else if(nums1[i]<nums2[j]){
                i++;
            }
            else{
                j++;
            }
        }
        return result;
    }
};
*/