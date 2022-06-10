// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
  public:
    int getCount(int N) {
        // code here
      int cnt=0;
    for (int k = 1; (2 * N) > (k*(k- 1)); k++)
    {
        int Num = N - ((k*(k- 1)) / 2);
        if (Num % k == 0)
            cnt++;
    }
    return (cnt-1);
       
    }
};


// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        
        cin>>N;

        Solution ob;
        cout << ob.getCount(N) << endl;
    }
    return 0;
}  // } Driver Code Ends