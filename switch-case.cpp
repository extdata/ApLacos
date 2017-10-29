#include <iostream>
using std::cout;
using std::cin;

int main(int argc, char **argv)
{
	int valor1;
	int valor2;
	int valor3;
	int calcular;
	
	
	cout << "Realizar opera" << (char) 135 << "" << (char) 228 << "es matem" << (char) 160 << "ticas simples de adi" << (char) 135 << "" << (char) 198 << "o, subtra"<< (char) 135 << "" << (char) 198 << "o, multiplica"<< (char) 135 << "" << (char) 198 << "o ou divis"<< (char) 198 << "o!\n";
	cout << "\nDigite o primeiro valor: ";
	cin >> valor1;
	
	
	cout << "\nDigite o segundo valor: ";
	cin >> valor2;
	
	cout << "\nEscolha 1 para somar; 2 para subtrair; 3 para multiplicar; 4 para dividir: ";
	cin >> calcular;
	
	switch ( calcular )
	{
		case 1:
			valor3 = valor1 + valor2;
			cout << "\nA soma dos valores " << (char) 130 << ": "<< valor3;
			break;
		case 2:
			valor3=valor1-valor2;
			cout << "\nA subtra" << (char) 135 << "" << (char) 198 << "o dos valores " << (char) 130 << ": " << valor3;
			break;
		case 3:
			valor3=valor1*valor2;
			cout << "\nA multiplica" << (char) 135 << "" << (char) 198 << "o dos valores " << (char) 130 << ": " << valor3;
			break;
		case 4:
			valor3=valor1/valor2;
			cout << "\nA divis"<< (char) 198 << "o dos valores " << (char) 130 << ": " << valor3;
			break;
	}
	
	cout << '\n';
	
	system ( "pause" );
	return 0;
}