// There are two functions in the code one is our mainr mergeSort function which divides the array nums
// in two parts left and right again and again until single element is left in either left or right
// once you reached that part you need a function mergeArray which merges the array left and right in 
// the sorted manner
class Solution {
public:
    void mergeArray(vector<int>& mergedArray, vector<int>& left, vector<int>& right){
        int nL = left.size();
        int nR = right.size();
        int i=0, j=0, k=0;
        while(i<nL && j<nR){
            if(left[i]<=right[j]){
                mergedArray[k] = left[i];
                i++;
                k++;
            }
            else{
                mergedArray[k] = right[j];
                j++;
                k++;
            }
        }
        // if any elements still left in left array or right array
        while(i<nL){
            mergedArray[k] = left[i];
            i++;
            k++;
        }
         while(j<nR){
            mergedArray[k] = right[j];
            j++;
            k++;
        }
    }
    void mergeSort(vector<int>& nums){
        int n = nums.size();
        if(n<2) return;
        int mid = n/2;
        vector<int> left;
        vector<int> right;
        for(int i=0; i<mid; i++){
            left.push_back(nums[i]);
        }
         for(int i=mid; i<n; i++){
            right.push_back(nums[i]);
        }
        mergeSort(left); // breaks left array
        mergeSort(right); // breaks right array
        mergeArray(nums,left,right); // merge the array in sorted manner
        
    }
    vector<int> sortArray(vector<int>& nums) {
        mergeSort(nums);
        return nums;
    }
};