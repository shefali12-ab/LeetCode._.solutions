class Solution {
public:
    int rob(vector<int>& nums) {
        map<int,int> m;
        return robHouse(0,nums,m);
        
    }
 private:
    int robHouse(int currentindex, vector<int> nums, map<int,int> &m ){
        
        if(currentindex>=nums.size()) return 0;
        int currentkey=currentindex;
        if(m.find(currentkey)!=m.end())
            return m[currentkey];
        int rob=nums[currentindex]+robHouse(currentindex+2,nums,m);
         int notrob= robHouse(currentindex+1,nums,m);
        m[currentkey]=max(rob,notrob);
        return max(rob,notrob);
    }
};
//this is a soln done using dp