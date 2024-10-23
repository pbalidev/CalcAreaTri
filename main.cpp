#include <cstdlib>
#include <cstdio>
#include <locale>
#include <Windows.h>
#include <iostream>

using namespace std;

int main(int argc, char **argv) {
	SetConsoleOutputCP (CP_UTF8);
	float altura_triangulo;
	float base_triangulo;
	float area_triangulo;
	cout << "Insira a altura do triângulo: " << endl;
	cin >> altura_triangulo;
	cout << "Insira a base do triângulo: " << endl;
	cin >> base_triangulo;
	area_triangulo = base_triangulo * altura_triangulo / 2;
	cout << "A área do triângulo é de: " << area_triangulo << " metros." << endl;
	return 0;
}