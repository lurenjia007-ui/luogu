#include <iostream>
using namespace std;

int main(){
    char s[100000];
    scanf("%s",s);
    for(int i=1;s[i]!='\0';i++){
        if('a'<=s[i]&&s[i]<='z'){
            s[i]=s[i]+('A'-'a');
        }
        }


    printf("%s\n",s);
    return 0;
}
