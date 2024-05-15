#include<bits/stdc++.h>
using namespace std;

int main() {
    string players;
    cin >> players;

    int count = 1;  
    for (size_t i = 1; i < players.length(); ++i) {
        if (players[i] == players[i - 1]) {
            count++;
            if (count >= 7) {
                cout << "YES" << endl;
                return 0;
            }
        } else {
            count = 1;  
        }
    }

    cout << "NO" << endl;
    return 0;
}
