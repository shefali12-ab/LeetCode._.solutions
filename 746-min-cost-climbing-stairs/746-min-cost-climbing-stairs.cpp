class Solution {
public:
    int minCostClimbingStairs(vector<int>& cost) {
        map<int,int> m;
        return min(mincost(0,cost,m),mincost(1,cost,m)) ;
        
    }
    
  private:
    int mincost(int currentindex,vector<int> cost,map<int,int> &m){
        if(currentindex==cost.size()) return 0;
        if(currentindex>cost.size())  return 1001;
        int currentkey=currentindex;
        if(m.find(currentkey)!=m.end())
            return m[currentkey];
        int onejmp=cost[currentindex]+mincost(currentindex+1,cost,m);
        int twojmp=cost[currentindex]+mincost(currentindex+2,cost,m);
        m[currentkey]=min(onejmp,twojmp);
       return min(onejmp,twojmp);
    }
};