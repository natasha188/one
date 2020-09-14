//подкючение заголовочных файлов
#include<iostream>
#include<iomanip>
#include<cmath>

//сама€ главна€ функци€
int main()

{
	//выводим на консоль сообщение
	std::cout <<
			"Ѕудем табулировать синус"<< //сообщение
			std::endl; //первые строки
	//код исходных данных
	std::cout <<"¬ведите начало и конец промежутка: ";
	double start, end;
	std::cin >>start>> end;

	std::cout <<"¬ведите шаг: ";
	double step;
	std::cin >>step;

	std::cout<<
			" x | sin(x)\n"
			"---------\n";
	std::cout <<std::fixed;
	for(double x = start; x <= end; x += step){
		double y = sin(x);
		std::cout <<
				std::setw(7) <<std::setprecision(3) << x <<
				'|' <<
				std::setw(8) <<std::setprecision(4) << y <<
				std::endl;
	}
	return 0;
}
