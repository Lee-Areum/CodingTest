#include <iostream>
#include <string>
using namespace std;

int main() {
    string str; cin >> str;
    for (int i = 0; i < str.size();i++) {
        char c = str[i];
        if (c >= 'a' && c <= 'z') {
            str[i] += ('A' - 'a');
        }
        else if (c >= 'A' && c <= 'Z') {
            str[i] += ('a' - 'A');
        }
    }
    cout << str << endl;
    return 0;
}
