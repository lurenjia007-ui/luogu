#include <bits/stdc++.h>
using namespace std;
int main(){
    string s,t;
    int n,m=0;
    char a='0',b='1';
    while(getline(cin,s)){
        n=s.size();
        t=t+s;
    }
    cout<<n<<" ";
        for(int i=0;i<(int)t.size();i++){
            if(t[i]==a){
                m++;
            }else {
                cout<<m<<" ";
                swap(a,b);
                m=1;
            }
            
        }cout<<m;
    
    return 0;
}
