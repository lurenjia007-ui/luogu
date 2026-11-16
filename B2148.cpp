#include <iostream>
using namespace std;
double f(double x,int n){
    if(n==1){
        return x/(x+1);
    }else{
        return x/(n+f(x,n-1));
}}
int main(){
    double x;
    int n;
    cin>>x>>n;
    double ans=f(x,n);
    printf("%.2f\n",ans);
    return 0;
}
