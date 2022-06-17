class Solution {
public:
    vector<int> countBits(int n) {
        vector<int> v;
        
        for(int i=0;i<=n;i++)
        { 
            int cnt=0;
         int j=i;
            while(j!=0){
                if(j&1==1) cnt++;
                j=j>>1;
            }
            v.push_back(cnt);
        }
        return v;
    }
    // the idea here is to run a loop from i=0 to i=n and for every i check the number of set bits and push it in a vector
};