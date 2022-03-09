class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        
        //using Binary serach algorithm
        int low=0;//it points to element at index 0 in vector
        int high=nums.size()-1;//it points to element at last index in vector
       
        
        while(low<=high)
        {
        int mid=(low+high)/2;
         // int mid = low +(high-low)/2 it can also be wriiten to avoid overflow   
        if(target==nums[mid]) return mid;
        else if(target<nums[mid]) high=mid-1;
        else  low= mid+1;
                              
        
            
        }
        return low;
      
    }
};
// This question can be done in one line using c++ stls
//Also it can be done using recursive binary serach method.
