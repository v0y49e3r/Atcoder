#include <iostream>
#include <vector>

using namespace std;

int main() {
    int N;
    cin >> N;
    
    vector<string> A(N), B(N);
    
    // Đọc lưới A
    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }

    // Đọc lưới B
    for (int i = 0; i < N; i++) {
        cin >> B[i];
    }

    // Duyệt qua lưới để tìm ô khác nhau
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            if (A[i][j] != B[i][j]) {
                cout << (i + 1) << " " << (j + 1) << endl;
                return 0;
            }
        }
    }

    return 0;
}
