#pragma once
#include <iostream>
#include <fstream>

template <typename T>
T safeInput(T minInput, T maxInput) {
	while (true)
	{
		T method;
		std::cin >> method;
		if (std::cin.fail() || method < minInput || method > maxInput)
		{
			std::cin.clear(); // очищает флаг ошибки
			std::cout << "Неверный ввод.\nПовторите снова: ";
		}
		else
		{
			std::cin.ignore(32767, '\n'); // убираем у числа лишние \n
			std::cin.clear();
			return method;
		}
		std::cin.ignore(32767, '\n');
	}
}

bool processInputNameOfInputFile(std::string& filename);