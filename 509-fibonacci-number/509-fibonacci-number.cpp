class Solution {
public:
    int fib(int n) {
        map<int,int> m;
        return fnth(n,m);
    }
    private:
    int fnth(int n,map<int,int> &m){
        if(n==1) return 1;
        if(n==0) return 0;
        int currentKey=n;
        if(m.find(currentKey)!=m.end())
            return m[currentKey];
        
        int a=fnth(n-1,m);
        int b=fnth(n-2,m);
        
        m[currentKey]=a+b;
        return a+b;
    }
};