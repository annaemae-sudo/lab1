#include <iostream>
#include <cmath>

int main() {
    std::cout << "Окружность" << std::endl;
    
    double r; // Радиус
    
    // Защита для радиуса
    do {
        std::cout << "r = ? ";
        std::cin >> r;
        if (std::cin.fail() || r <= 0) {
            std::cout << "Ошибка! Радиус должен быть положительным числом." << std::endl;
            std::cin.clear();
            std::cin.ignore(10000, '\n');
            r = -1;
        }
    } while (r <= 0);
    
    // Вычисление параметров
    double len = 2 * M_PI * r; // Длина окружности
    double S_circle = M_PI * r * r; // Площадь круга
    
    // Для сектора нужен угол
    double ugol;
    do {
        std::cout << "Угол (в градусах) = ? ";
        std::cin >> ugol;
        if (std::cin.fail() || ugol < 0 || ugol > 360) {
            std::cout << "Ошибка! Угол должен быть в диапазоне от 0 до 360." << std::endl;
            std::cin.clear();
            std::cin.ignore(10000, '\n');
            ugol = -1;
        }
    } while (ugol < 0 || ugol > 360);
    
    double S_sector = (M_PI * r * r * ugol) / 360.0; // Площадь сектора
    
    // Вывод результатов
    std::cout << "\nРезультаты:" << std::endl;
    std::cout << "Длина окружности = " << len << std::endl;
    std::cout << "Площадь круга = " << S_circle << std::endl;
    std::cout << "Площадь сектора (" << ugol << "°) = " << S_sector << std::endl;
    
    return 0;
}