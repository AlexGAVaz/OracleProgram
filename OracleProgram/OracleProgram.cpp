#include <iostream>
using namespace std;

int main() {
    int day, month, year;
    cout << "Введите день, месяц и год рождения через пробел: ";
    cin >> day >> month >> year;
    
    // Год рождения: високосный или нет
    bool leap = (year % 4 == 0 && year % 100 != 0) || year % 400 == 0;
    cout << "Год рождения " << (leap ? "високосный" : "невисокосный") << endl;
    
    // Год по восточному календарю
    const char* animals[] = {"Крысы", "Коровы", "Тигра", "Зайца", "Дракона", "Змеи", "Лошади", "Овцы", "Обезьяны", "Петуха", "Собаки", "Свиньи"};
    int animalIndex = (year - 4) % 12;
    cout << "Год по восточному календарю: " << animals[animalIndex] << endl;
    
    // Определим количество дней в месяце
    int daysInMonth = 0;
    switch(month)
    {
        case 1: daysInMonth = 31;
            break;
        case 2:
            daysInMonth = leap ? 29 : 28;
            break;
        case 3:
            daysInMonth = 31;
            break;
        case 4:
            daysInMonth = 30;
            break;
        case 5:
            daysInMonth = 31;
            break;
        case 6:
            daysInMonth = 30;
            break;
        case 7:
            daysInMonth = 31;
            break;
        case 8:
            daysInMonth = 31;
            break;
        case 9:
            daysInMonth = 30;
            break;
        case 10:
            daysInMonth = 31;
            break;
        case 11:
            daysInMonth = 30;
            break;
        case 12:
            daysInMonth = 31;
            break;
        default: cout << "Некорректный месяц" << endl;
    }
    
    // Проверяем, корректна ли дата рождения
    if(day < 1 || day > daysInMonth) cout << "Некорректная день" << endl;
    
    //Определяем знак зодиака
    switch (month)
    {
        case 1:
            if (day < 20) cout << "Знак зодиака: Козерог" << endl;
            else cout << "Знак зодиака: Водолей" << endl;
            break;
        case 2:
            if (day < 19) cout << "Знак зодиака: Водолей" << endl;
            else cout << "Знак зодиака: Рыбы" << endl;
            break;
        case 3:
            if (day < 21) cout << "Знак зодиака: Рыбы" << endl;
            else cout << "Знак зодиака: Овен" << endl;
            break;
        case 4:
            if (day < 20) cout << "Знак зодиака: Овен" << endl;
            else cout << "Знак зодиака: Телец" << endl;
            break;
        case 5:
            if (day < 21) cout << "Знак зодиака: Телец" << endl;
            else cout << "Знак зодиака: Близнецы" << endl;
            break;
        case 6:
            if (day < 22) cout << "Знак зодиака: Близнецы" << endl;
            else cout << "Знак зодиака: Рак" << endl;
            break;
        case 7:
            if (day < 23) cout << "Знак зодиака: Рак" << endl;
            else cout << "Знак зодиака: Лев" << endl;
            break;
        case 8:
            if (day < 23) cout << "Знак зодиака: Лев" << endl;
            else cout << "Знак зодиака: Дева" << endl;
            break;
        case 9:
            if (day < 23) cout << "Знак зодиака: Дева" << endl;
            else cout << "Знак зодиака: Весы" << endl;
            break;        case 10:
            if (day < 23) cout << "Знак зодиака: Весы" << endl;
            else cout << "Знак зодиака: Скорпион" << endl;
            break;
        case 11:
            if (day < 23) cout << "Знак зодиака: Скорпион" << endl;
            else cout << "Знак зодиака: Стрелец" << endl;
            break;
        case 12:
            if (day < 22) cout << "Знак зодиака: Стрелец" << endl;
            else cout << "Знак зодиака: Козерог" << endl;
    }
}
