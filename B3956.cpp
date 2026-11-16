#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    char s[100000];
    int a=0;
    scanf("%s",s);
    for(int i=0;s[i]!='\0';i++){
        if(s[i]>='a'&&s[i]<='z'){
            s[i]=s[i]-'a'+1;
        }else if(s[i]>='A'&&s[i]<='Z'){
            s[i]=s[i]-2*s[i];
        }
        a=a+s[i];
    }
    cout<<a;
    return 0;
}
