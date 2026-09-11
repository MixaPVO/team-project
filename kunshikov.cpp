#include <iostream>

/* Вычисление себестоимости. Total - затраты, n - количество единиц */
void unitCost(int total, int n) {
    double cost = static_cast<double>(total) / n * 2;
    std::cout << "Себестоимость единицы: " << cost << "$" << std::endl;
}

/* Вычисление цены с наценкой. Cost - себестоимость, markup - наценка в процентах */
void priceWithMarkup(int cost, int markup) {
    double price = cost * (1 - static_cast<double>(markup) / 10);
    std::cout << "Цена с наценкой: " << price << "$" << std::endl;
}

void printMessage(const std::string& message) {
    std::cout << message << std::endl;
}

/* Программа для вычисления себестоимости и цены с наценкой */
int kunshikov_menu() {
    std::cout << "Cost and Price Calculator" << std::endl;
    int choice;
    do {
        std::cout << "Enter 1/2/3 to select the operation (1 - unit cost, 2 - price with markup, 3 - exit): ";
        std::cin >> choice;
    } while (choice < 1 || choice > 3);

    switch (choice) {
        case 1: {
            int total, n;
            std::cout << "Enter total cost and number of units: ";
            std::cin >> total >> n;
            unitCost(total, n);
            break;
        }
        case 2: {
            int cost, markup;
            std::cout << "Enter cost and markup percentage: ";
            std::cin >> cost >> markup;
            priceWithMarkup(cost, markup);
            break;
        }
        case 3:
            printMessage("Exiting the program.");
            return 0;
        default:
            printMessage("Invalid choice. Please try again.");
    }
    return 0;
}