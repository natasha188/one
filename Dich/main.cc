//���������� ������������ ������
#include<iostream>
#include<iomanip>
#include<cmath>

//����� ������� �������
int main()

{
	//������� �� ������� ���������
	std::cout <<
			"����� ������������ �����"<< //���������
			std::endl; //������ ������
	//��� �������� ������
	std::cout <<"������� ������ � ����� ����������: ";
	double start, end;
	std::cin >>start>> end;

	std::cout <<"������� ���: ";
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
