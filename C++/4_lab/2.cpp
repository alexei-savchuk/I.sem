#include <iostream>
#include <cmath>
using namespace std;
int main() {
    setlocale(LC_CTYPE, "Russian");
    int number, remainder, revnumber = 0;
    cout << "������� ����� �����: " << endl;
    cin >> number;
    while (number > 0) {
        remainder = number % 10;
        number = number / 10;
        revnumber = (revnumber * 10) + remainder;

    }
    cout << " ����� �����: " << revnumber;
    return 0;
}