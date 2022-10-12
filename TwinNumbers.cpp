#include <iostream>
using namespace std;

int main()
{
    setlocale(0, "");
    int counter1 = 0, counter2 = 0;
    int number1, div1, number2, div2;
    cout << "Введите первое число: ";
    cin >> number1;
    cout << "Введите второе число: ";
    cin >> number2;

    for (div1 = number1; div1 > 0; div1--) {
        if (number1 % div1 == 0) {
            counter1 += 1;
        }
    }

    for (div2 = number2; div2 > 0; div2--) {
        if (number2 % div2 == 0) {
            counter2 += 1;
        }
    }

    if ((counter1 = counter2 == 2) and abs(number1 - number2) == 2)
        cout << "Числа близнецы" << endl;
    else
        cout << "Числа не близнецы" << endl;
}
