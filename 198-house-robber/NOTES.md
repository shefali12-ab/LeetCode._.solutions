recursive code--(gwtting TLE here)
```
class Solution {
public:
int rob(vector<int>& nums) {
return robHouse(0,nums);
}
private:
int robHouse(int currentindex, vector<int> nums){
if(currentindex>=nums.size()) return 0;
int rob=nums[currentindex]+robHouse(currentindex+2,nums);
int notrob= robHouse(currentindex+1,nums);
return max(rob,notrob);
}
};
```