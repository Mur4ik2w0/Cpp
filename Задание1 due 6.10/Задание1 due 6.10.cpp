#include <iostream>
#include <cmath>
using namespace std;

int main() {
    // Задание 1. Чётное или нечётное
    {
        int num;
        cout << "Task 1. Enter integer: ";
        cin >> num;
        if (num % 2 == 0) {
            cout << "Even\n\n";
        }
        else {
            cout << "Odd\n\n";
        }
    }

    // Задание 2. Максимум из трёх чисел
    {
        int a, b, c, max;
        cout << "Task 2. Enter three numbers: ";
        cin >> a >> b >> c;
        if (a >= b && a >= c) {
            max = a;
        }
        else if (b >= a && b >= c) {
            max = b;
        }
        else {
            max = c;
        }
        cout << "Max number: " << max << "\n\n";
    }

    // Задание 3. Знак числа
    {
        int num;
        cout << "Task 3. Enter number: ";
        cin >> num;
        if (num > 0) {
            cout << "Positive\n\n";
        }
        else if (num < 0) {
            cout << "Negative\n\n";
        }
        else {
            cout << "Zero\n\n";
        }
    }

    // Задание 4. Оценка по баллам
    {
        int score;
        cout << "Task 4. Enter score (0-100): ";
        cin >> score;
        if (score >= 90 && score <= 100) {
            cout << "Excellent\n\n";
        }
        else if (score >= 75 && score <= 89) {
            cout << "Good\n\n";
        }
        else if (score >= 60 && score <= 74) {
            cout << "Satisfactory\n\n";
        }
        else if (score >= 0 && score <= 59) {
            cout << "Unsatisfactory\n\n";
        }
        else {
            cout << "Error: score out of range\n\n";
        }
    }

    // Задание 5. Високосный год
    {
        int year;
        cout << "Task 5. Enter year: ";
        cin >> year;
        if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
            cout << "Leap year\n\n";
        }
        else {
            cout << "Not a leap year\n\n";
        }
    }

    // Задание 6. Квадратное уравнение
    {
        double a, b, c, d, x1, x2;
        cout << "Task 6. Enter a, b, c: ";
        cin >> a >> b >> c;

        if (a == 0) {
            if (b == 0) {
                if (c == 0) {
                    cout << "Infinite roots\n\n";
                }
                else {
                    cout << "No roots\n\n";
                }
            }
            else {
                x1 = -c / b;
                cout << "1 root: " << x1 << "\n\n";
            }
        }
        else {
            d = b * b - 4 * a * c;
            if (d > 0) {
                x1 = (-b + sqrt(d)) / (2 * a);
                x2 = (-b - sqrt(d)) / (2 * a);
                cout << "2 roots: " << x1 << " and " << x2 << "\n\n";
            }
            else if (d == 0) {
                x1 = -b / (2 * a);
                cout << "1 root: " << x1 << "\n\n";
            }
            else {
                cout << "No roots\n\n";
            }
        }
    }

    // Задание 7. Треугольник существует?
    {
        double a, b, c;
        cout << "Task 7. Enter three sides: ";
        cin >> a >> b >> c;

        if (a + b > c && a + c > b && b + c > a) {
            cout << "Triangle exists. Type: ";
            if (a == b && b == c) {
                cout << "Equilateral\n\n";
            }
            else if (a == b || a == c || b == c) {
                cout << "Isosceles\n\n";
            }
            else {
                cout << "Scalene\n\n";
            }
        }
        else {
            cout << "Triangle does not exist\n\n";
        }
    }

    // Задание 8. Калькулятор
    {
        double a, b;
        char op;
        cout << "Task 8. Enter expression (e.g., 5 + 3): ";
        cin >> a >> op >> b;

        if (op == '+') {
            cout << "Result: " << a + b << "\n\n";
        }
        else if (op == '-') {
            cout << "Result: " << a - b << "\n\n";
        }
        else if (op == '*') {
            cout << "Result: " << a * b << "\n\n";
        }
        else if (op == '/') {
            if (b == 0) {
                cout << "Error: division by zero\n\n";
            }
            else {
                cout << "Result: " << a / b << "\n\n";
            }
        }
        else {
            cout << "Unknown operation\n\n";
        }
    }

    // Задание 9. Скидка в магазине
    {
        double sum, total;
        cout << "Task 9. Enter purchase amount: ";
        cin >> sum;

        if (sum < 1000) {
            total = sum;
        }
        else if (sum >= 1000 && sum <= 5000) {
            total = sum * 0.95;
        }
        else if (sum > 5000 && sum <= 10000) {
            total = sum * 0.90;
        }
        else {
            total = sum * 0.85;
        }
        cout << "Total with discount: " << total << "\n\n";
    }

    // Задание 10. Определение времени суток
    {
        int hour;
        cout << "Task 10. Enter current hour (0-23): ";
        cin >> hour;

        if (hour < 0 || hour > 23) {
            cout << "Error: invalid hour\n\n";
        }
        else if (hour >= 6 && hour <= 11) {
            cout << "Good morning\n\n";
        }
        else if (hour >= 12 && hour <= 17) {
            cout << "Good afternoon\n\n";
        }
        else if (hour >= 18 && hour <= 22) {
            cout << "Good evening\n\n";
        }
        else {
            cout << "Good night\n\n";
        }
    }

    return 0;
}