#include<cstdio>
#include<iostream>
#include<algorithm>
#include<queue>
#include<map>
#include<vector>
#include<set>
#include<string>
#include<cmath>
#include<cstring>
#define ll long long
#define pb push_back
#define pm make_pair
#define fi first
#define se second
using namespace std;
const int MAX = 2e5 + 5;
ll n;
ll biao[MAX];
int cnt;
bool is(ll x) {
	
	for(ll i = 2; i*i<=x; i++) {
		if(x%i==0) return 0;
	}
	return 1 ;
}
void fenjie(ll x) {
	for(ll i = 2; i*i<=x; i++) {
		if(x%i == 0 && is(i)) {
			//biao[++cnt] = i;
			while(x%i==0) biao[++cnt]=i,x/=i;
		}
		if(cnt>=2) break;
	}
	
	if(x>1) biao[++cnt]=x;
}
int main()
{
	cin>>n;
	if(n==1 || is(n)) {
		puts("1");
		puts("0");return 0 ;
	}
	fenjie(n);
	if(cnt == 2 && biao[1]*biao[2] == n) {
		puts("2");
	}
	else {
		puts("1");
		printf("%lld\n",biao[1]*biao[2]);
	}
	return 0 ;
 }