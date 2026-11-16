#include <iostream>
using namespace std;
int main(){
    double a;
    cin>>a;
    int b=a*10;
    cout<<b%10;
    cout<<".";
    cout<<(b/10)%10;
    cout<<(b/100)%10;
    cout<<(b/1000)%10;
    return 0;
}
