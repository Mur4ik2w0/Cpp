#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");
    // ЗАДАНИЕ 1
    int seconds, minutes, hours;

    cout << "=== ЗАДАНИЕ 1 ===" << "\n";
    cout << "seconds: ";
    cin >> seconds;

    minutes = seconds / 60;
    seconds = seconds % 60;

    hours = minutes / 60;
    minutes = minutes % 60;

    cout << "hours: " << hours << "\n";
    cout << "minutes: " << minutes << "\n";
    cout << "seconds: " << seconds << "\n";


    // ЗАДАНИЕ 2
    double number;
    int dollar, cent;

    cout << "\n=== ЗАДАНИЕ 2 ===" << "\n";
    cout << "number(USE '.' INSTEAD of ','): ";
    cin >> number;

    dollar = number;
    cent = (number - dollar) * 100;

    cout << dollar << " dollars and " << cent << " cents\n";


    // ЗАДАНИЕ 3
    int days, weeks;

    cout << "\n=== ЗАДАНИЕ 3 ===" << "\n";
    cout << "days: ";
    cin >> days;

    weeks = days / 7;
    days = days % 7;

    cout << "weeks: " << weeks << "\n";
    cout << "days: " << days << "\n";


    // ЗАДАНИЕ 4
    double speed, distance, time;
    int run_minutes, run_seconds; // используем новые имена, чтобы не путаться с Заданием 1

    cout << "\n=== ЗАДАНИЕ 4 ===" << "\n";
    cout << "Calculating running speed.\n";
    cout << "Enter the length of distance(meters) = ";
    cin >> distance;

    cout << "Enter time(min.sec) = ";
    cin >> time;

    run_minutes = time;
    run_seconds = (time - run_minutes) * 100;
    time = (run_minutes * 60) + run_seconds;

    speed = distance / time * 3.6;

    cout << "Distance: " << distance << "m\n";
    cout << "Time: " << run_minutes << " min " << run_seconds << " sec = " << time << " seconds\n";
    cout << "You were running at speed " << speed << " km/h\n";


    // ЗАДАНИЕ 5
    double deposit, percent, month_percent, monthly_payment;

    cout << "\n=== ЗАДАНИЕ 5 ===" << "\n";
    cout << "Enter deposit amount (euro): ";
    cin >> deposit;

    cout << "Enter annual percent: ";
    cin >> percent;

    // Сначала узнаем, сколько процентов в месяц
    month_percent = percent / 12;

    // Считаем, сколько денег банк выплачивает каждый месяц
    monthly_payment = deposit * month_percent / 100;

    cout << "Bank pays every month: " << monthly_payment << " euro\n";

    return 0;
}