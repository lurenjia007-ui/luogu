#include <bits/stdc++.h>
#define int long long
using namespace std;
int pan(int a,int b)
{
    if(a==0)
    {
        if(b==2||b==3)
        {
            return 1;
        }else if(b==0)
        {
            return 3;
        }else 
        {
            return 0;
        }
    }
    if(a==1)
    {
        if(b==0||b==3)
        {
            return 1;
        }else if(b==1)
        {
            return 3;
        }else 
        {
            return 0;
        }
    }
    if(a==2)
    {
        if(b==1||b==4)
        {
            return 1;
        }else if(b==2)
        {
            return 3;
        }else 
        {
            return 0;
        }
    }
    if(a==3)
    {
        if(b==4||b==2)
        {
            return 1;
        }else if(b==3)
        {
            return 3;
        }else 
        {
            return 0;
        }
    }
    if(a==4)
    {
        if(b==0||b==1)
        {
            return 1;
        }else if(b==4)
        {
            return 3;
        }else 
        {
            return 0;
        }
    }
}
signed main()
{
   int t0,t1,t2,A=0,B=0;
   cin>>t0>>t1>>t2;
   int a[1000],b[1000];
   for(int i=1;i<=t1;i++)
   {
       cin>>a[i];
   }
   for(int i=1;i<=t2;i++)
   {
       cin>>b[i];
   }
   int ca,cb;
   for(int i=1;i<=t0;i++)
   {
        ca=a[i%t1];
   }
   for(int i=1;i<=t0;i++)
   {
    if(i%t1==0)
    {
        ca=a[t1];
    }else 
    {
        ca=a[i%t1];
    }
    if(i%t2==0)
    {
        cb=b[t2];
    }else 
    {
        cb=b[i%t2];
    }
    int p=pan(ca,cb);
    if(p==1)
    {
        A++;
    }else if(p==0)
    {
        B++;
    }
   }
   cout<<A<<" "<<B<<endl;
    return 0;
}
