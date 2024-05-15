#include<bits/stdc++.h>
using namespace std;

int main() {
    int r, g, b;
    cin >> r >> g >> b;

    
    int trips_r = (r + 1) / 2;  
    int trips_g = (g + 1) / 2;
    int trips_b = (b + 1) / 2;

    
    int time_r = (trips_r - 1) * 3;
    int time_g = (trips_g - 1) * 3 + 1;
    int time_b = (trips_b - 1) * 3 + 2;

    int result = max({time_r, time_g, time_b}) + 30;

    cout << result << endl;

    return 0;
}
