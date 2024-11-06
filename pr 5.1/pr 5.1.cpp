#include <iostream>
using namespace std;

int main() {
    setlocale(0, "ru");
    int hours;

    cout << "Введите время (часы от 0 до 23): ";
    cin >> hours;

    if (hours < 0 || hours > 23) {
        cout << "Некорректный ввод. Пожалуйста, введите часы от 0 до 23." << endl;
        return 1; 
    }

    switch (hours) {
    case 0: case 1: case 2: case 3: case 4: case 5: case 6:
        cout << "Доброй ночи!" << endl;
        break;
    case 7: case 8: case 9: case 10: case 11:
        cout << "Доброе утро!" << endl;
        break;
    case 12: case 13: case 14: case 15: case 16: case 17: case 18:
        cout << "Добрый день!" << endl;
        break;
    case 19: case 20: case 21: case 22: case 23:
        cout << "Добрый вечер!" << endl;
        break;
    default:
        cout << "Некорректный ввод." << endl; 
        break;
    }

    return 0;
}
