#include <bits/stdc++.h>
using namespace std;
#define ll             long long int 
#define ulli           unsigned long long int 
#define li             long int 
#define ff(i,a,b)      for(int i=a;i<b;i++)
#define fb(i,b,a)      for(int i=b;i>=a;i--)
#define w(t)           while(--t >= 0)
#define l(s)           s.length()
#define ci(n)          cin>>n;
#define fast           ios_base::sync_with_stdio(false);
#define sa(a,n)        sort(a,a+n)
#define sv(v)          sort(v.begin(),v.end())
#define cy             cout<<"YES\n"
#define cn             cout<<"NO\n"
#define nl             cout<<"\n"
#define minus          cout<<"-1\n";
#define vi             vector<int>
#define pb             push_back
#define tc             int t; cin>>t;
#define pp             pair<int,int>
#define input(a,n)     for(int i=0;i<n;i++) cin>>a[i];
#define co(n)          cout<<n;
#define mi             map<int,int>
#define output(a,n)    for(int i=0;i<n;i++) cout<<a[i]<<" ";   
#define forn(i, n)     ff(i, 0, n)
#define sz(v)          int((v).size())

int main()
{
    long long n(0);
    scanf("%lld", &n);
    vector<long long> primeDecomp;
    long long source(n), test(2);
    while(source > 1 && test <= sqrt(n))
    {
        if(source % test == 0)
        {
            primeDecomp.push_back(test); 
            source /= test;
        }
        else
        {
            ++test;
        }
    }
    if(source > 1)
    {
        primeDecomp.push_back(source);
    }
    if(primeDecomp.size() <= 1)
    {
        printf("1\n0");
    }
    else if(primeDecomp.size() == 2)
    {
        puts("2");
    }
    else if(primeDecomp.size() > 2)
    {
        printf("1\n%lld\n", primeDecomp[0] * primeDecomp[1]);
    }
    return 0;
}