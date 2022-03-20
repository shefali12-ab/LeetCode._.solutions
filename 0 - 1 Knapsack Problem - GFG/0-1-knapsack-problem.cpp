// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution
{
    public:
    //Function to return max value that can be put in knapsack of capacity W.
    
    int knapSack(int W, int wt[], int val[], int n) 
    { 
       // Your code here
       map<string,int> m;
       return maxVal(W,wt,val,n,0,m);
    }
    
    private:
    int maxVal(int W,int wt[], int val[],int n,int currentindex, map<string,int> &m){
        if(currentindex>=n) return 0;
        int consider=0;
        string currentkey= to_string(currentindex)+"-"+ to_string(W);
        if(m.find(currentkey)!=m.end())
          return m[currentkey];
        if(W>=wt[currentindex]){
          consider= val[currentindex]+maxVal(W-wt[currentindex],wt,val,n,currentindex+1,m);   
        }
        
        int notconsider= maxVal(W,wt,val,n,currentindex+1,m);
        m[currentkey]=max(consider,notconsider);
        return max(consider,notconsider);
    }
};

// { Driver Code Starts.

int main()
 {
    //taking total testcases
    int t;
    cin>>t;
    while(t--)
    {
        //reading number of elements and weight
        int n, w;
        cin>>n>>w;
        
        int val[n];
        int wt[n];
        
        //inserting the values
        for(int i=0;i<n;i++)
            cin>>val[i];
        
        //inserting the weights
        for(int i=0;i<n;i++)
            cin>>wt[i];
        Solution ob;
        //calling method knapSack()
        cout<<ob.knapSack(w, wt, val, n)<<endl;
        
    }
	return 0;
}  // } Driver Code Ends