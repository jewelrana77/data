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
int j,i,key;
for(i=1;i<n;i++){
	key=a[i];
	j=i-1;
	while(j>=0 && a[j]>key){
		a[j+1]=a[j];
		j=j-1;
	}
a[j+1]=key;
}
for (int i = 0; i <n; i++)
{
	cout<<a[i]<<" ";
}
return 0;
}