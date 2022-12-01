#include <bits/stdc++.h>
using namespace std;
void code(){
	#ifndef ONLINE_JUDGE 
freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);
#endif // ONLINE_JUDGE
}
int bin_s(int n,int k,vector<int>a){
int pos;
for(int i=0;i<n;i++){
	if(a[i]==k){
		pos=i;
	}
}
return pos+1;
}
int main(){
	code();
int n,k;
cin>>n>>k;
vector<int>a(n);
for(int i=0;i<n;i++){
cin>>a[i];
}
int pos=bin_s(n,k,a);
cout<<pos<<"\n";
return 0;
}