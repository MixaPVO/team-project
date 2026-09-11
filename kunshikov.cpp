#include <iostream>

/* Вычисление себестоимости. Total - затраты, n - количество единиц */
void unitCost(int total, int n) {
    double cost = static_cast<double>(total) / n;
    std::cout << "Себестоимость единицы: " << cost << "$" << std::endl;
}

/* Вычисление цены с наценкой. Cost - себестоимость, markup - наценка в процентах */
void priceWithMarkup(int cost, int markup) {
    double price = cost * (1 + static_cast<double>(markup) / 100);
    std::cout << "Цена с наценкой: " << price << "$" << std::endl;
}