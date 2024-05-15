#include <iostream>
#include <string>

using namespace std;

string calculateXOR(string num1, string num2) {
    string result = "";
    for (int i = 0; i < num1.length(); ++i) {
        if (num1[i] != num2[i]) {
            result += '1';
        } else {
            result += '0';
        }
    }
    return result;
}

int main() {
    string num1, num2;
    cin >> num1;
    cin >> num2;

    
    string xorResult = calculateXOR(num1, num2);
    cout << xorResult << endl;

    return 0;
}
