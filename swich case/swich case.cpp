#include <iostream>
using namespace std;

int main() {
    // Задание 1. Дни недели
    {
        int day;
        cout << "Task 1. Enter day number (1-7): ";
        cin >> day;
        switch (day) {
        case 1: cout << "Monday\n"; break;
        case 2: cout << "Tuesday\n"; break;
        case 3: cout << "Wednesday\n"; break;
        case 4: cout << "Thursday\n"; break;
        case 5: cout << "Friday\n"; break;
        case 6: cout << "Saturday\n"; break;
        case 7: cout << "Sunday\n"; break;
        default: cout << "Error: invalid day\n";
        }
        cout << "\n";
    }

    // Задание 2. Калькулятор
    {
        double a, b;
        char op;
        cout << "Task 2. Enter expression (e.g., 10 / 2): ";
        cin >> a >> op >> b;
        switch (op) {
        case '+': cout << "Result: " << a + b << "\n"; break;
        case '-': cout << "Result: " << a - b << "\n"; break;
        case '*': cout << "Result: " << a * b << "\n"; break;
        case '/':
            if (b == 0) {
                cout << "Error: division by zero\n";
            }
            else {
                cout << "Result: " << a / b << "\n";
            }
            break;
        default: cout << "Error: unknown operation\n";
        }
        cout << "\n";
    }

    // Задание 3. Сезоны года
    {
        enum Season { WINTER, SPRING, SUMMER, AUTUMN };
        int s;
        cout << "Task 3. Enter season (0-3): ";
        cin >> s;
        switch (s) {
        case WINTER: cout << "Winter, average temp -10C\n"; break;
        case SPRING: cout << "Spring, average temp +10C\n"; break;
        case SUMMER: cout << "Summer, average temp +25C\n"; break;
        case AUTUMN: cout << "Autumn, average temp +10C\n"; break;
        default: cout << "Error: invalid season\n";
        }
        cout << "\n";
    }

    // Задание 4. Меню программы
    {
        int choice;
        cout << "Task 4. Menu:\n";
        cout << "1. Greeting\n";
        cout << "2. Current time (stub)\n";
        cout << "3. Calculator (stub)\n";
        cout << "4. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;
        switch (choice) {
        case 1: cout << "Hello! Welcome.\n"; break;
        case 2: cout << "Current time: 12:00\n"; break;
        case 3: cout << "Calculator is under construction.\n"; break;
        case 4: cout << "Exiting program.\n"; break;
        default: cout << "Error: unknown menu item\n";
        }
        cout << "\n";
    }

    // Задание 5. Оценки студентов
    {
        enum Grade { A, B, C, D, F };
        char ch;
        cout << "Task 5. Enter grade (A, B, C, D, F): ";
        cin >> ch;
        Grade g;
        switch (ch) {
        case 'A': g = A; break;
        case 'B': g = B; break;
        case 'C': g = C; break;
        case 'D': g = D; break;
        case 'F': g = F; break;
        default: g = (Grade)-1; break;
        }
        switch (g) {
        case A: cout << "Excellent (5)\n"; break;
        case B: cout << "Good (4)\n"; break;
        case C: cout << "Satisfactory (3)\n"; break;
        case D: cout << "Weak (2)\n"; break;
        case F: cout << "Unsatisfactory (2)\n"; break;
        default: cout << "Error: unknown symbol\n";
        }
        cout << "\n";
    }

    // Задание 6. Определение времени суток
    {
        int hour;
        cout << "Task 6. Enter hour (0-23): ";
        cin >> hour;
        switch (hour) {
        case 0: case 1: case 2: case 3: case 4: case 5:
            cout << "Night\n"; break;
        case 6: case 7: case 8: case 9: case 10: case 11:
            cout << "Morning\n"; break;
        case 12: case 13: case 14: case 15: case 16: case 17:
            cout << "Day\n"; break;
        case 18: case 19: case 20: case 21: case 22: case 23:
            cout << "Evening\n"; break;
        default: cout << "Error: invalid hour\n";
        }
        cout << "\n";
    }

    // Задание 7. Направления движения
    {
        enum Direction { UP, DOWN, LEFT, RIGHT };
        char ch;
        cout << "Task 7. Enter direction (w, s, a, d): ";
        cin >> ch;
        Direction dir;
        switch (ch) {
        case 'w': dir = UP; break;
        case 's': dir = DOWN; break;
        case 'a': dir = LEFT; break;
        case 'd': dir = RIGHT; break;
        default: dir = (Direction)-1; break;
        }
        switch (dir) {
        case UP: cout << "Offset: (0, +1)\n"; break;
        case DOWN: cout << "Offset: (0, -1)\n"; break;
        case LEFT: cout << "Offset: (-1, 0)\n"; break;
        case RIGHT: cout << "Offset: (+1, 0)\n"; break;
        default: cout << "Error: unknown direction\n";
        }
        cout << "\n";
    }

    // Задание 8. Римские цифры
    {
        int num;
        cout << "Task 8. Enter number (1-10): ";
        cin >> num;
        switch (num) {
        case 1: cout << "I\n"; break;
        case 2: cout << "II\n"; break;
        case 3: cout << "III\n"; break;
        case 4: cout << "IV\n"; break;
        case 5: cout << "V\n"; break;
        case 6: cout << "VI\n"; break;
        case 7: cout << "VII\n"; break;
        case 8: cout << "VIII\n"; break;
        case 9: cout << "IX\n"; break;
        case 10: cout << "X\n"; break;
        default: cout << "Error: number out of range\n";
        }
        cout << "\n";
    }

    // Задание 9. Статусы заказа
    {
        enum OrderStatus { NEW, PAID, SHIPPED, DELIVERED, CANCELLED };
        int s;
        cout << "Task 9. Enter status (0-4): ";
        cin >> s;
        switch (s) {
        case NEW: cout << "Order created. Awaiting payment.\n"; break;
        case PAID: cout << "Paid. Preparing for shipment.\n"; break;
        case SHIPPED: cout << "Shipped. Await delivery.\n"; break;
        case DELIVERED: cout << "Delivered. Thank you for your purchase!\n"; break;
        case CANCELLED: cout << "Cancelled. Contact support.\n"; break;
        default: cout << "Error: invalid status\n";
        }
        cout << "\n";
    }

    // Задание 10. Цвета светофора (без <cctype>)
    {
        char ch;
        cout << "Task 10. Enter traffic light color (r, y, g): ";
        cin >> ch;
        switch (ch) {
        case 'r':
        case 'R': cout << "Stop\n"; break;
        case 'y':
        case 'Y': cout << "Get ready\n"; break;
        case 'g':
        case 'G': cout << "Go\n"; break;
        default: cout << "Error: unknown color\n";
        }
        cout << "\n";
    }

    // Задание 11. Уровни доступа
    {
        enum AccessLevel { GUEST, USER, MODERATOR, ADMIN };
        int level;
        cout << "Task 11. Enter access level (0-3): ";
        cin >> level;
        switch (level) {
        case GUEST:
            cout << "Guest: view only\n";
            cout << "Rights:\n- view content\n- read comments\n";
            break;
        case USER:
            cout << "User: view and edit own data\n";
            cout << "Rights:\n- view content\n- edit own profile\n";
            break;
        case MODERATOR:
            cout << "Moderator: delete messages, ban users\n";
            cout << "Rights:\n- delete messages\n- ban users\n- view reports\n";
            break;
        case ADMIN:
            cout << "Administrator: full access\n";
            cout << "Rights:\n- manage users\n- manage content\n- system settings\n";
            break;
        default: cout << "Error: invalid level\n";
        }
        cout << "\n";
    }

    // Задание 12. Перевод единиц длины
    {
        double meters, result;
        char code;
        cout << "Task 12. Enter length in meters and code (m, c, d, k, i, f): ";
        cin >> meters >> code;
        switch (code) {
        case 'm': result = meters * 1000; cout << meters << " m = " << result << " mm\n"; break;
        case 'c': result = meters * 100; cout << meters << " m = " << result << " cm\n"; break;
        case 'd': result = meters * 10; cout << meters << " m = " << result << " dm\n"; break;
        case 'k': result = meters / 1000.0; cout << meters << " m = " << result << " km\n"; break;
        case 'i': result = meters * 39.3701; cout << meters << " m = " << result << " in\n"; break;
        case 'f': result = meters * 3.28084; cout << meters << " m = " << result << " ft\n"; break;
        default: cout << "Error: unknown code\n";
        }
        cout << "\n";
    }

    return 0;
}