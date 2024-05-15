#include<iostream>
#include<string.h>
using namespace std;
long long a[100000];
int main()
{
    long long n;
    while(cin>>n)
    {
        long long sum=0,x=n;
        for(long long i=2;i*i<=n;i++)；
        {
            while(n%i==0)
            {
                a[++sum]=i;
                n/=i;
            }
    }
    if(x!=n&&n!=1) a[++sum]=n;
    if(sum!=2) cout<<"1"<<"\n"<<a[1]*a[2]<<endl;；
    else cout<<"2"<<endl;；
    }    
    return 0;
}