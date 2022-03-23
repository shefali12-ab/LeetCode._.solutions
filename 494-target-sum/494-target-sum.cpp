class Solution {
public:
    int findTargetSumWays(vector<int>& nums, int target) {
        unordered_map<string,int> umap;
        return findTarget(nums,target,0,umap);
        
    }
    
 private:
   int findTarget(vector<int> nums,int target,int currentindex,unordered_map<string,int> &umap){
        if(currentindex==nums.size() && target==0) return 1;
        if(currentindex==nums.size() && target!=0) return 0;
        
       string currentkey=to_string(currentindex)+ "-"+ to_string(target);
       if(umap.find(currentkey)!=umap.end())
           return umap[currentkey];
        
        int postive= findTarget(nums,target-nums[currentindex],currentindex+1,umap); 
        int negative=findTarget(nums,target+nums[currentindex],currentindex+1,umap);
       umap[currentkey]=postive+negative;
        return (postive+negative);
        
    }
};