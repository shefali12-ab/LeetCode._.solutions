#include<map>
class Solution {
public:
    int climbStairs(int n) {
        map<int,int> m;
        return totalways(0,n, m);
       
        
    }
    private:
    int totalways(int currentStair,int targetStair,  map<int,int> &m){
         if(currentStair==targetStair) return 1;
        if(currentStair>targetStair) return 0;
        int currentKey=currentStair;
        if(m.find(currentKey)!=m.end())
            return m[currentKey];
        int onejump = totalways(currentStair+1,targetStair,m);
        int twojump= totalways(currentStair+2,targetStair,m);
        m[currentKey]=onejump+twojump;
        return onejump+twojump;
    }
};