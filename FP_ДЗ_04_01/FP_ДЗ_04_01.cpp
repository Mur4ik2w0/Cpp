#include <iostream>
using namespace std;

int main() {
    // ЗАДАНИЕ 1
    {
        cout << "Home task #1\n\n";
        int userNumber, d1, d2, d3, d4, d5, d6, sum1, sum2, temp;

        cout << "Please, enter your 6-digit number:\n";
        cin >> userNumber;

        if (userNumber / 100000 < 1) {
            cout << "Your number includes less than 6 digits!\n";
        }
        else if (userNumber / 100000 > 9) {
            cout << "Your number includes more than 6 digits!\n";
        }
        else {
            cout << "Your number includes exactly 6 digits!\n";

            // Dыделяем цифры справа налево
            d6 = userNumber % 10;
            temp = userNumber / 10;
            d5 = temp % 10;
            temp = temp / 10;
            d4 = temp % 10;
            temp = temp / 10;
            d3 = temp % 10;
            temp = temp / 10;
            d2 = temp % 10;
            d1 = temp / 10;

            cout << d1 << " " << d2 << " " << d3 << " " << d4 << " " << d5 << " " << d6;

            sum1 = d1 + d2 + d3;
            sum2 = d4 + d5 + d6;

            if (sum1 == sum2) {
                cout << "Your number brings you good luck!\n";
            }
            else {
                cout << "It's a pity!\n";
            }
        }
    }

    // ЗАДАНИЕ 2
    {
        cout << "\nHome task #2\n\n";
        int userNumber, d1, d2, d3, d4, newNumber, temp;

        cout << "Please, enter your 4-digit number:\n";
        cin >> userNumber;

        if (userNumber / 1000 < 1) {
            cout << "Your number includes less than 4 digits!\n";
        }
        else if (userNumber / 1000 > 9) {
            cout << "Your number includes more than 4 digits!\n";
        }
        else {

            // Выделяем цифры
            d4 = userNumber % 10;
            temp = userNumber / 10;
            d3 = temp % 10;
            temp = temp / 10;
            d2 = temp % 10;
            d1 = temp / 10;

            cout << d1 << " " << d2 << " " << d3 << " " << d4 << " Let's modify it.\n";

            // Cобираем новое число вручную
            newNumber = d2 * 1000 + d1 * 100 + d4 * 10 + d3;

            cout << "Your new number: " << newNumber << "\n";
        }
    }

    // ЗАДАНИЕ 3 
    {
        cout << "\nHome task #3\n\n";
        int d1, d2, d3, d4, d5, d6, d7, maxNumber;

        cout << "Please, enter your 1st number:\n"; cin >> d1;
        cout << "Please, enter your 2nd number:\n"; cin >> d2;
        cout << "Please, enter your 3d number:\n";  cin >> d3;
        cout << "Please, enter your 4th number:\n"; cin >> d4;
        cout << "Please, enter your 5th number:\n"; cin >> d5;
        cout << "Please, enter your 6th number:\n"; cin >> d6;
        cout << "Please, enter your 7th number:\n"; cin >> d7;

        // Начальный максимум - тупо сравниваем первые два
        if (d1 > d2) {
            maxNumber = d1;
        }
        else {
            maxNumber = d2;
        }

        // Дальше тупо проверяем каждое следующим if
        if (d3 > maxNumber) { maxNumber = d3; }
        if (d4 > maxNumber) { maxNumber = d4; }
        if (d5 > maxNumber) { maxNumber = d5; }
        if (d6 > maxNumber) { maxNumber = d6; }
        if (d7 > maxNumber) { maxNumber = d7; }

        cout << "Your max number: " << maxNumber << "\n";
    }

    // ЗАДАНИЕ 4
    {
        cout << "\nHome task #4\n\n";
        double distAB, distBC, weight, consumption = 0;
        double fuelAB, fuelBC, fuelLeft, refuel;

        cout << "Enter distance between A and B (km):\n";
        cin >> distAB;
        cout << "Enter distance between B and C (km):\n";
        cin >> distBC;
        cout << "Enter cargo weight (kg):\n";
        cin >> weight;

        // Pадаем расход топлива
        if (weight <= 500) {
            consumption = 1;
        }
        else if (weight <= 1000) {
            consumption = 4;
        }
        else if (weight <= 1500) {
            consumption = 7;
        }
        else if (weight <= 2000) {
            consumption = 9;
        }
        else {
            consumption = 0; // Самолет не поднимает
        }

        if (consumption == 0) {
            cout << "Flight is impossible: cargo is too heavy!\n";
        }
        else {
            fuelAB = distAB * consumption;
            fuelBC = distBC * consumption;

            // Проверяем, хватит ли бака на каждый участок по отдельности
            if (fuelAB > 300) {
                cout << "Flight is impossible: not enough fuel for A to B!\n";
            }
            else if (fuelBC > 300) {
                cout << "Flight is impossible: not enough fuel for B to C!\n";
            }
            else {
                // Сколько топлива осталось после пункта А?
                fuelLeft = 300 - fuelAB;

                // Если остатка хватает, то дозаправка = 0. Если нет - добиваем разницу.
                if (fuelLeft >= fuelBC) {
                    refuel = 0;
                }
                else {
                    refuel = fuelBC - fuelLeft;
                }
                cout << "Minimum fuel to refuel at point B: " << refuel << " liters\n";
            }
        }
    }

    return 0;
}