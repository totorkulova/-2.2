// Лаба2.2.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <iomanip>

int main()
{
    setlocale(LC_ALL, "ru");

    // Размеры параллелепипеда.
    // Используем double, так как размеры могут быть дробными.
    double length;
    double width;
    double height;

    // Результаты вычислений.
    double volume;
    double surfaceArea;

    // Явно задаём коэффициент 2 как значение типа double.
    const double TWO = static_cast<double>(2);

    // Ввод длины.
    std::cout << "Введите длину параллелепипеда: ";
    std::cin >> length;

    // Ввод ширины.
    std::cout << "Введите ширину параллелепипеда: ";
    std::cin >> width;

    // Ввод высоты.
    std::cout << "Введите высоту параллелепипеда: ";
    std::cin >> height;

    // Вычисляем объём.
    volume = length * width * height;

    // Вычисляем площадь полной поверхности.
    surfaceArea =
        TWO * (length * width
            + length * height
            + width * height);

    // Форматируем вывод:
    // 2 знака после десятичной точки.
    std::cout << std::fixed << std::setprecision(2);

    // Выводим результаты.
    std::cout << "Объём параллелепипеда: "
        << volume << std::endl;

    std::cout << "Площадь поверхности: "
        << surfaceArea << std::endl;

    return 0;
}
