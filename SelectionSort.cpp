// SELECTION SORT
class Solution {
public:
    vector<int> sortArray(vector<int>& nums) {
        int n = nums.size();
        for(int i=0; i<n-1; i++){
            int iMin = i; // initializing the minimum index that will be equal to the least element from i+1 to n-1
            for(int j=i+1; j<n; j++){
                if(nums[j]<nums[iMin]){
                    iMin = j;
                }
            }
            swap(nums[i],nums[iMin]); // swaping the element at ith index to the least element after the ith index 
        }
        return nums;
    }
};