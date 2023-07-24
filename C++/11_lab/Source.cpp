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
    decimalA = scanner(true);//вводим число с клавитаруы в десятичном представлении
    if (!decimalInputMiddleware(decimalA)) return 0;//проверяем не превышает ли число размерность в два байта и не является ли число отрицательным
    std::string binaryA = std::bitset<16>(decimalA).to_string();//переводим число в двоичное представление и записываем его в строку для отображения пользователю на экране (я использовал костыль в виде функции bitset)
    printf("[\x1B[34m%s\033[0m] - Number A in binary view\n", &binaryA);//выводим число в двоичном представлении

    printf("Enter a position number A to get 3 bits from\nPosition: ");//вводим позицию (начиная справа) в двоичном представлении числа для копирования оттуда значении трех битов
    positionA = scanner(true, 10, -1);//функция сканер считывает значения с консоли в виде строки а затем преобразует эту строку в число (если не удалось преобразовать в число, то возвращает -1)
    if (!positionInputMiddleware(positionA)) return 0;//проверяем не выходит ли значение позиции за пределы двух байт (следовательно значение должно быть больше 0 и меньше 13)

    mask = 7; //задаем маску для выбора трех битов из числа (7 в двоичном представлении = 00000000 000111 )
    std::string maskBinary = std::bitset<16>(mask).to_string(); //преобразуем десятичное представление в двоичное и выводим эту строку пользователю
    printf("[\x1B[34m%s\033[0m] - Mask in binary view\n", &maskBinary);
    ь
    printf("Enter a decimal number B to analyse\nNumber: ");
    decimalB = scanner(true); //вводим уже второе число (в которое мы хотим вставить три бита из первого)
    if (!decimalInputMiddleware(decimalB)) return 0; //проверяем второе число на корректность
    std::string binaryB = std::bitset<16>(decimalB).to_string();
    printf("[\x1B[34m%s\033[0m] - Number B in binary view\n", &binaryB);//выводим в двоичном представлении пользователю

    printf("Enter a position number B to paste 3 bits in\nPosition: ");//вводим позицию во втором числе (куда нужно вставить три бита из первого числа)
    positionB = scanner(true, 10, -1);
    if (!positionInputMiddleware(positionB)) return 0;//проверяем позицию

    mask = mask << positionB;// делаем сдвиг на заданную позицию для чистки битов (например нам нужно будет вставить три бита с первого числа во второе, начиная со второй позиции => делаем сдвиг до этой позиции в нашей маске (00000000 00011100) => простым языком: (там где стоят единички - туда мы будем вставлять биты с первого числа))
    mask = ~mask; //инверсируем маску => (00000000 00011100 --> 11111111 11100011) (нули в маске нужны для дальнейшего приготовления места для вставки во второе число)

    decimalB = decimalB & mask;//теперь мы умножаем нашу маску на второе число (логично предположить, что при умножении любого бита второго числа на 1 мы получим тот же бит, но если умножим на ноль то получим исключительно 0) с помощью побитового умножения мы чистим три бита во втором числе чтобы туда потом вставить три бита из первого числа
    binaryB = std::bitset<16>(decimalB).to_string();
    printf("[\x1B[34m%s\033[0m] - Number B in binary view after cleaning scope\n", &binaryB);

    mask = 7; //возвращаем нашу маску в исходное состояние
    mask = mask << positionA;// делаем сдвиг на заданную позицию (например на нужно будет выбрать три бита с первого числа, начиная со второй позиции => делаем сдвиг до этой позиции (00000000 00011100) => простым языком: (там где стоят единички - оттуда будем брать биты с первого числа ))
    mask = decimalA & mask;//с помощью умножения получаем значения наших трех битов из первого числа чтобы вставить во второе

    mask = mask << positionB;//сдвигаем наши три бита из первого числа на нужную позицию для вставки во второе число (на ранее подготовленное "очищенное место")
    decimalB = decimalB | mask;//вставляем наши взятые три бита из первого числа на очищенное место во втором.
    // Например:
    // маска = 00000000 000->101<-00 (три бита которые мы скопировали из первого числа помечены стрелочками)
    // второе число: 11111111 111->000<-11 (три бита которые мы очистили помечены стрелочками)
    //=> маска + второе число = 00000000 00010100 + 11111111 11100011 = 11111111 11110111

    maskBinary = std::bitset<16>(decimalB).to_string();
    printf("[\x1B[34m%s\033[0m] - Number B after mask and number b sum\n", &maskBinary);
    return 1;
};
int main() {
    task2();
    return 0;
}