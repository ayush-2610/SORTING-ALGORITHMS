// INSERTION SORT
//ALGO - Think of dividing the array in two parts sorted and unsorted starting from index 1 - take an element (let x) and traverse through the sorted array from backwards. Traverse and copy element i-1 to i till we find an element smaller than the chosen element x the at the current index copy x
// 7 | 1 4 3  left side sorted right side unsorted
// 7 7 | 4 3  x = 1
// now no element before so copy x at current index
// 1 7 | 4 3 x = 4
// 1 7 7 | 3
// 1 4 7 | 3 x =3
// 1 4 7 7 |
// 1 4 4 7 |
// 1 3 4 7 | sorted

class Solution {
public:
    vector<int> sortArray(vector<int>& nums) {
        int n = nums.size();
        for(int i=1; i<n; i++){ // taken from i=1 cause one element has to be taken in sorted array
            int val = nums[i];
            int index = i;
            while(index>0 && nums[index-1]>val){
                nums[index] = nums[index-1];
                index = index-1;
            }
            nums[index] = val;
        }
        return nums;
    }
};