#include <bits/stdc++.h>
#define int long long
using namespace std;
    int dx[4]={-1,0,1,0};
    int dy[4]={0,1,0,-1};
string s[10];
int fx,fy,fd;
int cx,cy,cd;
int v(int x,int y){
    if(x>=0&&x<10&&y>=0&&y<10&&s[x][y]!='*'){
        return 1;
    }else{
        return 0;
    }
}
signed main(){
    for(int i=0;i<10;i++){
        cin>>s[i];
    }
    for(int i=0;i<10;i++){
        for(int j=0;j<10;j++){
            if(s[i][j]=='F'){
                fx=i;
                fy=j;
            }
            if(s[i][j]=='C'){
            cx=i;
            cy=j;
            }
        }
    }
    for(int k=1;k<=1000;k++){
        if(v(fx+dx[fd],fy+dy[fd])){
            fx=fx+dx[fd];
            fy=fy+dy[fd];
        }else {
            fd=(fd+1)%4;
        }
           if(v(cx+dx[cd],cy+dy[cd])){
               cx=cx+dx[cd];
               cy=cy+dy[cd];
           }else {
               cd=(cd+1)%4;
           }
           if(fx==cx&&fy==cy){
               cout<<k;
               return 0;
           }
    }cout<<"0";
    return 0;
}
