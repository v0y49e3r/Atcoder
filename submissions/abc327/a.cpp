#include <iostream>
#include <string>
using namespace std;

int main() {
    int n;
    string s;

    cin >> n >> s; // Nhập độ dài và chuỗi từ đầu vào

    for (int i = 1; i < s.length(); ++i) {
        if ((s[i - 1] == 'a' && s[i] == 'b') || 
            (s[i - 1] == 'b' && s[i] == 'a')) {
            cout << "Yes";
            return 0;
        }
    }
    cout << "No";
    return 0;
}
