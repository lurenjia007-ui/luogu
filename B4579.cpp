#include <iostream>
using namespace std;
long long f(int n){
    if(n==1){
        return 2;
    }
    else if(n==0){
        return 0;}
    else return 2*f(n-1)+2*f(n-2)+3;
}int main(){
    int n;
    cin>>n;
    cout<<f(n);
    return 0;
}
