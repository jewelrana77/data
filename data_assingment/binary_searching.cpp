#include <bits/stdc++.h>
using namespace std;
void code(){
	#ifndef ONLINE_JUDGE 
freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);
#endif // ONLINE_JUDGE
}
int bin_s(int n,int k,vector<int>a){
int h=n-1;
int l=0;
int mid;
while(l<=h){
mid=l+(h-l)/2;
if(a[mid]==k){
	return mid;
}
if(a[mid]>k){
	h=mid-1;
}
else{
	l=mid+1;
}
}
return mid;
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