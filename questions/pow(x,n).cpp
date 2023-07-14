//RECURSION 
/* class Solution {
public:
double power(double x, int n){
    if(n==0) return 1;
    if(n==1) return x;
    double ans= pow(x,n/2);
     if(n<0){
            x=1/x;
            n=abs(n);
            double ans=1;
}
    if(n%2==0) return ans*ans;
    else {
        return x*ans*ans;
        }
}
    double myPow(double x, int n) {
        return power(x,n);
    }
};
*/
// BASIC BEGINNER APPROACH
//  double myPow(double x, int n) {
// if(n==0)
        //     return 1;
        // if(n<0)
        //     x=1/x;
        //     n=abs(n);
        //     double ans=1;
        // while(n>0){
        //   if(n&1) 
        //     ans=x*ans;
        //     x*=x;
        //     n>>=1;
        // }
        // return ans;
         // }
//};

// USING INBUILD FUNCTION POV
//  double myPow(double x, int n) {
    //  return pow(x, n);
         // }
//};

