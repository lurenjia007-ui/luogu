#include <iostream>
using namespace std;
int main(){
    int h[16010],s1,s2,s3,d;
    cin>>s1>>s2>>s3;
    for(int i=1;i<=s1;i++){
        for(int x=1;x<=s2;x++){
            for(int y=1;y<=s3;y++){
            d=i+x+y;
                h[d]++;
                
            }
        }
    }
    int max=2,ans=0;
    for(int i=1;i<=s1+s2+s3;i++){
        if(h[i]>max){
            max=h[i];
            ans=i;
        }
    }
    cout<<ans;
    return 0;
}
