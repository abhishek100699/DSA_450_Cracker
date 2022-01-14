#include<bits/stdc++.h>
using namespace std;



class Solution {
public:
    int search(vector<int>& nums, int target) {
        /* either of the half in the array will always be sorted
        so search check if the target element lies in the sorted part
        if it does then search in that part other wise search in the other part
        */
        int lo=0;
        int hi = nums.size()-1;
    
        while(lo<=hi){
            int mid = (lo+hi)/2 ;
            if(nums[mid]==target){
                return mid;
            }
            else if(nums[mid]>=nums[lo]){ // left part is sorted
                // check if the target lies in the left part
                if(target>=nums[lo] && target <= nums[mid]){
                    hi = mid-1;
                }
                else{
                    lo = mid+1;
                }
            }
            
            else{// right half is sorted
                if(target>nums[mid] && target <= nums[hi]){
                    lo = mid+1;
                }
                else{
                    hi = mid-1;
                }
            }
        }
        return -1;
    
    }
};