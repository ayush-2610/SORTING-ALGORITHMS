// QUICK SORT 
// ALGO - what we have to do is we need to select a pivot index (in this code i have always taken last
// element as the pivot) sort the array in such a way that we get the perfect position of the pivot
// i.e all the elements left of the perfect position must be small and at the right of perfect position 
// must be greater (elements may or may not be in sorted manner) then we need to call again the function 
// recursively on the left of the perfect postion and on the right of the perfect position
class Solution {
public:
    int partition(vector<int>& nums, int start, int end){
        int pivot = nums[end]; // last element of the array
        int partitionIndex = start; // assume the perfect position of pivot is the first index
        for(int i=start; i<end; i++){
            if(nums[i]<=pivot){
                swap(nums[i],nums[partitionIndex]); // ohh, now there is an element which is smaller than the 
                // pivot but is right of our assumed perfect position of the pivot so swapping to be done
                partitionIndex++;
            }
        }
        swap(nums[end],nums[partitionIndex]);// now when we have traversed the array we have to actually set 
        // pivot index to its correct position.
        return partitionIndex;
    }
    void quickSort(vector<int>& nums, int start, int end){
        if(start<end){
            int partitionIndex = partition(nums,start,end);
            quickSort(nums,start,partitionIndex-1); // call left array of the pivot
            quickSort(nums,partitionIndex+1,end); // call right array of the pivot
        }
    }
    vector<int> sortArray(vector<int>& nums) {
        int n = nums.size();
        quickSort(nums,0,n-1);
        return nums;
    }
};