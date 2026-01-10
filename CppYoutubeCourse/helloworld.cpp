#include <iostream>

int main() {
	/* Anotaçoes sobre Print em Tela
	
		-std é um namespace padrão da biblioteca C++ que significa 'standard' (padrão).
		-Cout é o objeto de saída padrão em C++ usado para imprimir dados na tela. Não se le count de contar e 
		  sim c-out, que significa character output (saída de caracteres).
		-Existe também o std::endl que além de pular a linha, também força o chamado 'flush' do buffer de saída.
		-Usar o \n é mais performatico.
		-O << é um operador de inserção em stream. Ele diz "Envie o valor x para o fluxo de saida cout".
		-O cout é uma stream de saida (output stream).

	*/
	std::cout << "Hello World!" << '\n';
	std::cout << "I Like pizza" << '\n';

	/* Anotaçoes sobre Variaveis e Tipos de Dados

		.Da pra declarar a variavel e assinar o valor depois ou fazer ambos juntos, como nos exemplos x e y.
		.int = integer (numero inteiro) // int age = 25;
		.double = double (numero com casas decimais) // double price = 9.99;
		.char = character (armazena um unico caractere) // char initial = 'A';
		.bool = boolean (armazena verdadeiro ou falso) // bool isStudent = true;
		.sting = string (é basicamente um objeto que representa uma sequencia de caracteres)
		  Diferente dos outros, uma string vem do standard, entao precisa do std:: // std::string name = "Pedro";
		  Em c++ uma string é basicamente um array de chars, por isso nao é um tipo nativo e precisa do std.
	*/
	int x;
	x = 5;
	int y = 6;
	std::cout << x << y << '\n';

	double price = 19.99;
	std::cout << "Price: " << price << '\n';

	char initialNameLetter = 'P';
	std::cout << "Initial name latter: " << initialNameLetter << '\n';

	bool isCppFun = true;
	std::cout << "Is C# fun ?: " << isCppFun << '\n';

	std::string name = "Pedro";
	std::cout << "My name is: " << name << '\n';





	system("pause");

	return 0;
}