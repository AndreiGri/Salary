#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
    // Изменение кодировки терминала:
    system("chcp 1251 > nul");
    cout << endl;

    int salary1 = 0;
    int salary2 = 0;
    int salary3 = 0;
    int maximum;
    int minimum;

    cout << " Введите зарплату первого сотрудника: ";
    cin >> salary1;
    cout << " Введите зарплату второго сотрудника: ";
    cin >> salary2;
    cout << " Введите зарплату третьего сотрудника: ";
    cin >> salary3;
    cout << " ---------------Вычисляем---------------" << endl;

    if (salary1 > salary2 && salary1 > salary3) {
        maximum = salary1;
    }
    else {
        if (salary2 > salary1 && salary2 > salary3) {
            maximum = salary2;
        }
        else {
            maximum = salary3;
        }
    }

    if (salary1 < salary2 && salary1 < salary3) {
        minimum = salary1;
    }
    else {
        if (salary2 < salary1 && salary2 < salary3) {
            minimum = salary2;
        }
        else {
            minimum = salary3;
        }
    }

    cout << " Максимальная зарплата в отделе " << maximum << " рублей," << endl;
    cout << " Разница между самой большой и самой маленькой зарплатами составляет ";
    cout << maximum - minimum << " рублей," << endl;
    cout << " Средняя зарплата по отделу ";

    cout << (salary1 + salary2 + salary3) / 3 << " рублей." << endl;

    // Задержка окна консоли:
    system("pause > nul");

    return 0;
}