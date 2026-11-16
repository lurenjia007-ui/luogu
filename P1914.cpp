#include <iostream>
using namespace std;
int main(){
    int n;cin>>n;
    char s[60];
    int i=0;
    cin>>s;
    while(s[i]!='\0'){
        
        if(s[i]+n>'z'){
            s[i]=s[i]-26;
        }s[i]=s[i]+n;
        i++;
    }
    printf("%s",s);
    return 0;
}
