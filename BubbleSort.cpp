// BUBBLE SORT
// Algo - swap curr element to next element if it is smaller eventually big elemnts pile up in last
class Solution {
public:
    vector<int> sortArray(vector<int>& nums) {
        int n = nums.size();
        for(int i=0; i<n; i++){
            bool flag = false; // used to break out when there will be no swaps throughout that means array is sorted
            for(int j=0; j<n-i-1; j++){ // ran till n-1-i to improve complexity because every time greatest element reaches its correct position
                if(nums[j]>nums[j+1]){
                     swap(nums[j],nums[j+1]);
                    flag = true; 
                }
            }
            if(!flag) break;
        }
        return nums;
    }
};