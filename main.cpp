// Командный проект. Группа ПИ-54.
// Команда: Лавриненко (в. 20), Дворников (в. 40, техлид).
#include <iostream>
// === БЛОК ПОДКЛЮЧЕНИЙ: каждый участник добавляет свой заголовочный файл ===
#include "lavrinenko.h"
#include "dvornikov.h"
// === КОНЕЦ БЛОКА ПОДКЛЮЧЕНИЙ ===
using namespace std;

    int main() {
        system("chcp 65001");

        int choice;
        double a,h;
        double v, f, lambda, T;

        do {
            cout << "\n=== Командный проект: сборник расчётов ===\n";
            // === БЛОК МЕНЮ: каждый участник добавляет свои пункты ===
            cout << "0. Выход\n";
            cout << "1. Длина волны (v / f)\n";
            cout << "2. Скорость волны (λ / T)\n";
            cout << "3. Объём пирамиды с квадратным основанием\n";
            cout << "4. Высота боковой грани\n";
            cout << "Выберите пункт: ";
            // === КОНЕЦ БЛОКА МЕНЮ ===
            cin >> choice;
            switch (choice) {
            // === БЛОК ОБРАБОТКИ: каждый участник добавляет свои case ===
                case 0:
                    cout << "Работа завершена.\n";
                    break;

                case 1: {
                    do {
                        cout << "Введите v (м/с) и f (Гц): ";
                        cin >> v >> f;
                    } while (v < 0 || f <= 0);
                    cout << "Длина волны λ = " << waveLength(v, f) << " м\n";
                    break;
                }

                case 2: {
                    do {
                        cout << "Введите λ (м) и T (с): ";
                        cin >> lambda >> T;
                    } while (lambda < 0 || T <= 0);
                    cout << "Скорость волны v = " << waveSpeed(lambda, T) << " м/с\n";
                    break;
                }

                case 3:
                    do{
                     cout<<"Введите a и h: ";
                     cin>>a>>h;
                    } while(a<=0||h<=0);
                cout<<"Объем = " << pyramidVolume(a,h)<<"\n";
                break;

                case 4:
                    do{
                     cout<<"Введите a и h в метрах: ";
                     cin>>a>>h;
                    } while(a<=0||h<=0);
                cout<<"Высота боковой грани = " << pyramidApothem(a,h)<<"\n";
                break;

                default:
                    cout << "Такого пункта нет.\n";
            // === КОНЕЦ БЛОКА ОБРАБОТКИ ===   
            }
        } while (choice != 0);
        return 0;
}
