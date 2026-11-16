#include <bits/stdc++.h>
using namespace std;

int main() {
	string s="ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	int n;
	cin>>n;
	for(int i=0;s[i]!='\0';i++){
		s[i]='A'+(s[i]-'A'+n)%26;
	}
	cout<<s;
	return 0;
}
