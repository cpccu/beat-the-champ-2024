#include <cstdio>
#include <iostream>
#include <algorithm>
using namespace std;
using LL = long long;
const int N=105;
LL a[N];
int main()
{
	int n;
	cin>>n;
	for(int i=0;i<n;i++)
	  cin>>a[i];
	LL ans=0;
	for(int i=0;i<n;i++)
	  ans+=((a[i]-1)*i+a[i]);
	cout<<ans<<endl;
	//system("pause");
	return 0;    
}
