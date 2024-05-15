#include<bits/stdc++.h>

using namespace std;

bool isValidSpelling(string s) {
    
    sort(s.begin(), s.end());


    string correctSpelling = "Timur";

    sort(correctSpelling.begin(), correctSpelling.end());

    
    return s == correctSpelling;
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        string s;
        cin >> s;

        if (isValidSpelling(s)) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }

    return 0;
}
