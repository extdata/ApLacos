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
    
    
    
    int count = 0;
    int nValor;
    double valor;
    double soma;
    
    
    while ( count < 10)
    {
        cout << "O valor apos o incremento eh: " << count << '\n';
        count++;
    }
    
    cout << "\n\nDigite o numero de valores a serem somados:\n";
    cin >> nValor;
    
    count = 0;
    soma = 0;
    while ( count < nValor)
    {
        cout << "Digite o valor: " << '\n';
        cin >> valor;
    }
    
    
    
    int count = 0;
    int nValor;
    double valor;
    double soma;
    
    
    do
    {
        cout << "O valor apos o incremento eh: " << count << '\n';
        count++;
    } while (count < 10);
    
    cout << "\n\n\Digite o numero de valores a serem somados:\n";
    cin nValor;
    
    count = 0;
    soma = 0;
    
    
    
    
    count = 0;
    soma = 0;
    while (count < nValor)
    {
        cout << "Digite um valor positivo (se negativo sera pedido para digitar novamente); " << count << '\n';
        cin >> valor;
        
        if ( valor < 0)
            continue;
            
            soma+= valor;
            
            count++;
    }
    
    if (count > 0)
        cout << "A media eh: " << soma/count << '\n';
        
        
        
    cout << "\n\n\Digite valores positivos a serem somados ou qualquer valor negativo para parar: ";
        
        
    count = 0;
    soma = 0;
    while ( true)
        {
            cout << "Digite o valor: " << '\n';
            cin >> valor;
            
            if (valor < 0)
                break;
        }
	
	system ( "pause" );
	return 0;
}