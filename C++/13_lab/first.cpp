#include <iostream>
using namespace std;
int main()
{
    setlocale(LC_ALL, "ru");
    char text[256];

    int length = 0, a = 0, * pa = &a;
    cout << "¬ведите набор символов: " << endl;
    cin >> text;
    while (text[length] != '\0')
    {
        length++;
    }

    for (int i = 0; i + 1 < length; i += 2) {
        char temp = text[i];
        text[i] = text[i + 1];
        text[i + 1] = temp;
    }
    cout << text << endl;
    for (int i = 0; i < length; i++) {
        if (text[i] == ',' || text[i] == '.') {
            *pa += 1;
        }
    }
    cout << "количество точек и з€п€тых: " << *pa << endl;
}