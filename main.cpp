// Командный проект. Группа ПИ-51.
// Команда: Кунщиков (в. 97), Ретивых (в. 63, техлид).
#include <iostream>
#include <windows.h>
#include "retivykh.h"
#include "kunshikov.h"
// === КОНЕЦ БЛОКА ПОДКЛЮЧЕНИЙ ===
using namespace std;
int main() {
SetConsoleOutputCP(65001);
int choice;
do {
cout << "\n=== Командный проект: сборник расчётов ===\n";
// === БЛОК МЕНЮ: каждый участник добавляет свои пункты ===
  
cout << "1. Перевести километры в мили\n";
cout << "2. Перевести мили в километры\n";
cout << "3. Вычисление себестоимости\n";
cout << "4. Вычисление цены с наценкой\n";
// === КОНЕЦ БЛОКА МЕНЮ ===
cout << "0. Выход\n";
cout << "Выберите пункт: ";
cin >> choice;
switch (choice) {
// === БЛОК ОБРАБОТКИ: каждый участник добавляет свои case ===
case 1:
    int km;
    cout << "Введите километры: ";
    cin >> km;
    cout << kmToMiles(km) << endl;
    break;
case 2:
    int mi;
    cout << "Введите мили: ";
    cin >> mi;
    cout << milesToKm(mi) << endl;
    break;
case 3:
  int total, n;
  std::cout << "Введите общие затраты и количество единиц: ";
  std::cin >> total >> n;
  unitCost(total, n);
  break;
case 4:
  int cost, markup;
  std::cout << "Введите себестоимость и процент наценки: ";
  std::cin >> cost >> markup;
  priceWithMarkup(cost, markup);
  break;
// === КОНЕЦ БЛОКА ОБРАБОТКИ ===
case 0:
  cout << "Работа завершена.\n";
  break;
default:
  cout << "Такого пункта нет.\n";
  }
} while (choice != 0);
return 0;
}
