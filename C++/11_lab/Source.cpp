#include <iostream> 
#include <bitset>
using namespace std;
int positionInputMiddleware(int positionDecimal) {
    if (positionDecimal > 13) {
        printf("\x1B[31mPosition index is too big to procedure!\033[0m\n");
        return 0;
    }
    if (positionDecimal < 0) {
        printf("\x1B[Position index is cannot be (negative, or NaN) to procedure!\033[0m\n");
        return 0;
    }
    return 1;
}
int positionInputMiddleware(int positionDecimal) {
    if (positionDecimal > 13) {
        printf("\x1B[31mPosition index is too big to procedure!\033[0m\n");
        return 0;
    }
    if (positionDecimal < 0) {
        printf("\x1B[Position index is cannot be (negative, or NaN) to procedure!\033[0m\n");
        return 0;
    }
    return 1;
}
int task2() {
    int decimalA = 0, decimalB = 0, mask, positionA = 0, positionB = 0;
    printf("Enter a decimal number A to analyse\nNumber: ");
    decimalA = scanner(true);//������ ����� � ���������� � ���������� �������������
    if (!decimalInputMiddleware(decimalA)) return 0;//��������� �� ��������� �� ����� ����������� � ��� ����� � �� �������� �� ����� �������������
    std::string binaryA = std::bitset<16>(decimalA).to_string();//��������� ����� � �������� ������������� � ���������� ��� � ������ ��� ����������� ������������ �� ������ (� ����������� ������� � ���� ������� bitset)
    printf("[\x1B[34m%s\033[0m] - Number A in binary view\n", &binaryA);//������� ����� � �������� �������������

    printf("Enter a position number A to get 3 bits from\nPosition: ");//������ ������� (������� ������) � �������� ������������� ����� ��� ����������� ������ �������� ���� �����
    positionA = scanner(true, 10, -1);//������� ������ ��������� �������� � ������� � ���� ������ � ����� ����������� ��� ������ � ����� (���� �� ������� ������������� � �����, �� ���������� -1)
    if (!positionInputMiddleware(positionA)) return 0;//��������� �� ������� �� �������� ������� �� ������� ���� ���� (������������� �������� ������ ���� ������ 0 � ������ 13)

    mask = 7; //������ ����� ��� ������ ���� ����� �� ����� (7 � �������� ������������� = 00000000 000111 )
    std::string maskBinary = std::bitset<16>(mask).to_string(); //����������� ���������� ������������� � �������� � ������� ��� ������ ������������
    printf("[\x1B[34m%s\033[0m] - Mask in binary view\n", &maskBinary);
    �
    printf("Enter a decimal number B to analyse\nNumber: ");
    decimalB = scanner(true); //������ ��� ������ ����� (� ������� �� ����� �������� ��� ���� �� �������)
    if (!decimalInputMiddleware(decimalB)) return 0; //��������� ������ ����� �� ������������
    std::string binaryB = std::bitset<16>(decimalB).to_string();
    printf("[\x1B[34m%s\033[0m] - Number B in binary view\n", &binaryB);//������� � �������� ������������� ������������

    printf("Enter a position number B to paste 3 bits in\nPosition: ");//������ ������� �� ������ ����� (���� ����� �������� ��� ���� �� ������� �����)
    positionB = scanner(true, 10, -1);
    if (!positionInputMiddleware(positionB)) return 0;//��������� �������

    mask = mask << positionB;// ������ ����� �� �������� ������� ��� ������ ����� (�������� ��� ����� ����� �������� ��� ���� � ������� ����� �� ������, ������� �� ������ ������� => ������ ����� �� ���� ������� � ����� ����� (00000000 00011100) => ������� ������: (��� ��� ����� �������� - ���� �� ����� ��������� ���� � ������� �����))
    mask = ~mask; //����������� ����� => (00000000 00011100 --> 11111111 11100011) (���� � ����� ����� ��� ����������� ������������� ����� ��� ������� �� ������ �����)

    decimalB = decimalB & mask;//������ �� �������� ���� ����� �� ������ ����� (������� ������������, ��� ��� ��������� ������ ���� ������� ����� �� 1 �� ������� ��� �� ���, �� ���� ������� �� ���� �� ������� ������������� 0) � ������� ���������� ��������� �� ������ ��� ���� �� ������ ����� ����� ���� ����� �������� ��� ���� �� ������� �����
    binaryB = std::bitset<16>(decimalB).to_string();
    printf("[\x1B[34m%s\033[0m] - Number B in binary view after cleaning scope\n", &binaryB);

    mask = 7; //���������� ���� ����� � �������� ���������
    mask = mask << positionA;// ������ ����� �� �������� ������� (�������� �� ����� ����� ������� ��� ���� � ������� �����, ������� �� ������ ������� => ������ ����� �� ���� ������� (00000000 00011100) => ������� ������: (��� ��� ����� �������� - ������ ����� ����� ���� � ������� ����� ))
    mask = decimalA & mask;//� ������� ��������� �������� �������� ����� ���� ����� �� ������� ����� ����� �������� �� ������

    mask = mask << positionB;//�������� ���� ��� ���� �� ������� ����� �� ������ ������� ��� ������� �� ������ ����� (�� ����� �������������� "��������� �����")
    decimalB = decimalB | mask;//��������� ���� ������ ��� ���� �� ������� ����� �� ��������� ����� �� ������.
    // ��������:
    // ����� = 00000000 000->101<-00 (��� ���� ������� �� ����������� �� ������� ����� �������� �����������)
    // ������ �����: 11111111 111->000<-11 (��� ���� ������� �� �������� �������� �����������)
    //=> ����� + ������ ����� = 00000000 00010100 + 11111111 11100011 = 11111111 11110111

    maskBinary = std::bitset<16>(decimalB).to_string();
    printf("[\x1B[34m%s\033[0m] - Number B after mask and number b sum\n", &maskBinary);
    return 1;
};
int main() {
    task2();
    return 0;
}