#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    int n; cin >> n;
    vector<int> v(n - 1);
    for(int i = 0; i < n - 1; i++){
        cin >> v[i];
    }
    int a, b; cin >> a >> b;
    int diff = b - a;
    ll sum = 0;
    for (int i = 0; i < diff; i++) {
        sum += v[i];
    }
    cout << sum << endl;

    
    return 0;
}