#include <iostream>
using namespace std;
int main(){
    int a,b,c,d;
    cin>>a>>b>>c;
    if(a>b){
        d=a;
        a=b;
        b=d;
    }
    if(a>c){
        d=a;
        a=c;
        c=d;
    }
    if(b>c){
        d=b;
        b=c;
        c=d;
    }
    long long aa=(long long)a*a;
long long bb=(long long)b*b;
    long long cc=(long long)c*c;
    if(a+b<=c){
        cout<<"Not triangle";
        return 0;
    }
    if(aa+bb==cc){
        cout<<"Right triangle"<<endl;
        
    }
    if(aa+bb>cc){
        cout<<"Acute triangle"<<endl;
        
    }
    if(aa+bb<cc){
        cout<<"Obtuse triangle"<<endl;
        
    }
    if(a==b||b==c){
        cout<<"Isosceles triangle"<<endl;
        
    }
    if(a==b&&b==c){
        cout<<"Equilateral triangle"<<endl;
        
    }
    return 0;
}
