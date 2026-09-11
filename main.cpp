// Командный проект. Группа ПИ-51.
// Команда: Кунщиков (в. 97), Ретивых (в. 63, техлид).
#include <iostream>
// === БЛОК ПОДКЛЮЧЕНИЙ: каждый участник добавляет свой заголовочный файл ===
// #include "ivanov.h"
// #include "petrov.h"
// #include "sidorova.h"
#include "Kunshikov.h"
// === КОНЕЦ БЛОКА ПОДКЛЮЧЕНИЙ ===
using namespace std;
int main() {
int choice;
do {
cout << "\n=== Командный проект: сборник расчётов ===\n";
// === БЛОК МЕНЮ: каждый участник добавляет свои пункты ===

// === КОНЕЦ БЛОКА МЕНЮ ===
cout << "0. Выход\n";
cout << "Выберите пункт: ";
cin >> choice;
switch (choice) {
// === БЛОК ОБРАБОТКИ: каждый участник добавляет свои case ===
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
