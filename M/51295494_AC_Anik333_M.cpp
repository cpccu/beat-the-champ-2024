#include <iostream>
#include <algorithm>
using namespace std;

int main(){

 string target = "Timur";
    sort(target.begin(), target.end());

    long t; cin >> t;
    while(t--){
        long n; cin >> n;
        string s; cin >> s;
        sort(s.begin(), s.end());
        cout << ((s == target) ? "YES" : "NO") << endl;
    }

}