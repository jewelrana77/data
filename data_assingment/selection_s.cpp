#include <bits/stdc++.h>
using namespace std;
void code(){
	#ifndef ONLINE_JUDGE 
freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);
#endif // ONLINE_JUDGE
}
int main(){
	code();
int n;
cin>>n;
vector<int>a(n);
for(int i=0;i<n;i++){
cin>>a[i];
}
for(int i=0;i<n;i++){
int s=i;
for(int j=i+1;j<n;j++){
	if(a[s]>a[j]){
		s=j;
	}
}
swap(a[i],a[s]);
}
for(int i=0;i<n;i++){
	cout<<a[i]<<" ";
}
return 0;
}