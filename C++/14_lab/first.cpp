#include <iostream>
#include <cmath>
using namespace std;
int main() {
    setlocale(LC_ALL, "ru");
    const int n = 5, m = 5;
    int A[n][m], rmn = -3, rmx = 3, result_sum = 0, result_prz = 1;
    cout << "Массив А:" << endl;
    srand((unsigned)time(NULL));
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            A[i][j] = (int)(((double)rand() / (double)RAND_MAX) * (rmx - rmn) + rmn);
            cout << A[i][j] << ' ';
        }
        cout << endl;
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (A[i][j] < 0 && A[i][j] % 2 != 0 && abs(A[i][j]) < i) {
                result_sum += A[i][j];
                result_prz *= A[i][j];
            }
        }
    }
    cout << "sum elements: " << result_sum << endl;
    cout << "prozvedenie elements: " << result_prz << endl;
    bool value_exists = false;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (A[i][j] > 0) {

                value_exists = true;
                break;


            }
            if (value_exists) break;
        }
    }
    if (value_exists == true) {
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                A[i][j] *= -1;
                cout << A[i][j] << ' ';
            }
            cout << endl;
        }
    }
}