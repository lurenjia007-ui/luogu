#include <bits/stdc++.h>
#define int long long
using namespace std;
signed main() {
	int n;
	cin>>n;
	n=n/(52*7);
	for(int x=100;x>=1;x--){
		if(n-x>0&&(n-x)%3==0){
			cout<<x<<endl<<(n-x)/3;
			break;
		}
	}
	return 0;
}
