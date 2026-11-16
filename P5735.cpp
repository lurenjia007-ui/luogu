#include <bits/stdc++.h>
#define int long long
using namespace std;
signed main(){
    double x1,y1,x2,y2,x3,y3;
    cin>>x1>>y1>>x2>>y2>>x3>>y3;
    double sum=pow(pow(x1-x2,2)+pow(y1-y2,2),0.5)+pow(pow(x3-x2,2)+pow(y3-y2,2),0.5)+pow(pow(x1-x3,2)+pow(y1-y3,2),0.5);
    printf("%.2lf",sum);
    return 0;
}
