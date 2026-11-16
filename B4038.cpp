#include <bits/stdc++.h>
#define int long long
using namespace std;

signed main() {
	int t;
	cin>>t;
	int n,a[100000];
	for(int i=1;i<=t;i++){
		cin>>n;
		int sum=0,q=0;
		for(int j=0;j<n;j++){
			cin>>a[j];
			sum=sum+a[j];
		}
		for(int j=0;j<n;j++){
			q=q+a[j];
			if(q*2==sum){
				cout<<"Yes"<<endl;
				break;
			}else if(q==sum){
				cout<<"No"<<endl;
				break;
			}
		}
	}
	return 0;
}
