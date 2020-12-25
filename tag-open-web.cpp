#include<bits/stdc++.h>
#define ll unsigned long long
using namespace std;
ll a[1000000];
ll l,r,mid,w,n,maxx,ans;
int judge(int m)
{
	for(int i=0; i<n; i++) {
		if(a[i]<=m) {
			a[i]=0;
		} else {
			a[i]=1;
		}
	}
	if(cnt>=w) return 1;
	else return 0;
}
int main()
{
	cin>>n>>w;
	for(int i=0; i<n; i++) {
		cin>>a[i];
		maxx=maxx>a[i]?maxx:a[i];
	}
	l=1;
	r=maxx;
	sort(a,a+n);
	while(l<=r) {
		mid=(l+r)/2;
		if(judge(mid)==1) {
			ans=mid;
			l=mid+1;
		} else {
			r=mid-1;
		}
	}
	
	return 0;
}
