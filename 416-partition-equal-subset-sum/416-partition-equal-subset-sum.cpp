class Solution {
public:
    bool canPartition(vector<int>& nums) {
        int sum=0;
        map<string,int> m;
         for(int i=0;i<nums.size();i++){
            sum=sum+nums[i];
        }
         if(sum%2!=0) return false;
        
        return subsetEqual(nums,0,sum/2,m);
        
    }
  private:
    bool subsetEqual(vector<int> nums,int currentindex,int sum,map<string,int>&m){
        
       
        
       
       
            
       
        if(currentindex==nums.size()-1 && (sum)==0) return 1;
        if(currentindex==nums.size()-1 && (sum)!=0) return 0;
        string currentkey= to_string(currentindex)+"-"+to_string(sum);
        if(m.find(currentkey)!=m.end())
            return m[currentkey];
        bool consider=0;
        if(nums[currentindex]<=(sum))
         consider= subsetEqual(nums,currentindex+1,(sum)-nums[currentindex],m);
        if(consider==true){
            m[currentkey]=consider;
            return true;
        }
        bool notconsider=subsetEqual(nums,currentindex+1,(sum),m);
        m[currentkey]= (consider||notconsider);
        return (consider || notconsider);
        
    }
};