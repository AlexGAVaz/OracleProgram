#include <iostream>
using namespace std;

int main() {
    int day, month, year;
    cout << "Введите день, месяц и год рождения через пробел: ";
    cin >> day >> month >> year;

    // Год рождения: високосный или нет
    bool leap = false;
    if (year % 4 == 0) {
        if (year % 100 == 0) {
            if (year % 400 == 0) {
                leap = true;
            }
        } else {
            leap = true;
        }
    }
    cout << "Год рождения " << (leap ? "високосный" : "невисокосный") << endl;

    // Год по восточному календарю
    const char* animals[] = {
        "Крысы", "Коровы", "Тигра", "Зайца", "Дракона", "Змеи", "Лошади", "Овцы", "Обезьяны", "Петуха", "Собаки", "Свиньи"};
    int animalIndex = (year - 4) % 12;
    cout << "Год по восточному календарю: " << animals[animalIndex] << endl;

    // Знак зодиака
    string astroSign[] = {
        "Водолея", "Рыб", "Овна", "Тельца", "Близнецов", "Рака", "Льва", "Девы", "Весов", "Скорпиона", "Стрельца", "Козерога"};
       int astroDays[] = {
           21, 20, 21, 21, 22, 22, 23, 24, 24, 24, 23, 22};
       int astroIndex = month - 1;
       if (day < astroDays[astroIndex]) {
           astroIndex = (astroIndex == 0) ? 11 : astroIndex - 1;
       }
       cout << "Zodiac sign: " << astroSign[astroIndex] << endl;
       
       return 0;
}

