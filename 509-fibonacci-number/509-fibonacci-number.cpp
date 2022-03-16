class Solution {
public:
    int fib(int n) {
        return fnth(n);
    }
    private:
    int fnth(int n){
        if(n==1) return 1;
        if(n==0) return 0;
        int a=fnth(n-1);
        int b=fnth(n-2);
        return a+b;
    }
};