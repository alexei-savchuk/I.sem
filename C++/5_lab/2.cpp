#include <iostream>
int main()
{
	using namespace std;
	setlocale(LC_CTYPE, "Russian");
	int k;
	printf(" вы хотите связаться с оператором? (1-да, 2-нет)");
	cin >> k;
	switch (k)
	{
	case 1: printf("по какому поводу (1-взнос средств на № телефона, 2-оформить СИМ-карту, 3-поменять тариф)");
		cin >> k;
		switch (k)
		{
		case 1: printf("введите сумму платежа"); break;
		case 2: printf("нужны паспортные данные"); break;
		case 3: printf("на какой желаете поменят?"); break;
		}
		break;
	case 2: printf("хорошего вам дня"); break;
	default: printf("некорректный вариант"); break;
	case 3 printf(""); break;
	default: printf("некорректный вариант"); break;
	}
	return 0;
}
