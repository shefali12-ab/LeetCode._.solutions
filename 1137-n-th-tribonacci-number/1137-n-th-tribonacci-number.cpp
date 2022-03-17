class Solution {
public:
    int tribonacci(int n) {
        map<int,int> m;
        return tnth(n,m);
        
    }
private:
    int tnth(int n, map<int,int> &m){
        if(n==1||n==2) return 1;
        if(n==0) return 0;
        int currentkey=n;
        if(m.find(currentkey)!=m.end())
            return m[currentkey];
        int a=tnth(n-1,m)+tnth(n-2,m)+tnth(n-3,m);
        m[currentkey]=a;
        return a;
    }
};