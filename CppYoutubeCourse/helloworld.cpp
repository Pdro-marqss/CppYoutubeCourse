#include <iostream>

namespace first {
	// Declarei aqui 2 variaveis com mesmo nome de variaveis declaradas abaixo no codigo.
	int x = 12;
	int y = 23;
}

namespace second {
	int x = 123;
	int y = 234;
}

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



	/* Anotaçoes sobre Variaveis constantes

		.Uma constante diz ao compilador que o valor da variavel nao pode ser alterado depois de atribuido.
		.read-only
		.Em constantes um padrao muito utilizado é definir o nome da variavel com letras maiusculas.
	*/
	const double PI = 3.14159;
	double radius = 10;
	double circumference = 2 * PI * radius;
	std::cout << "Circumference: " << circumference << "cm" << '\n';


	/* Anotaçoes sobre Namespaces

		.Namespace é uma forma de agrupar entidades como classes, objetos e funções sob um nome comum. Evitando
		  assim conflitso de nomes iguais. Os nomes podem repetir desde que sejam em namespaces diferentes.
		.O namespace deve ser criado fora do main. Geralmente no topo do arquivo.
		.Quando for imprimir o valor, tem que especificar de qual namespace é a variavel, ou ele vai pegar a do
		  escopo local.
		.Os 2 pontos :: é o operador de scope resolution operator, usado para acessar membros de um namespace 
		  ou classe.
		.Caso no seja declarado um using namespace first, por exemplo, isso significa que aquele namespace esta
		  sendo usado como padrao, podendo assim remover o prefixo first::.
		.Um hackzinho que algumas pessoas usam é declarar no topo do arquivo main o using namespace std, assim
		  nao precisam escrever o prefixo std:: para chamar count, string, etc... Isso nao é recomendado porque
		  dentro de std existem muitas entidades e isso pode causar conflitos de nomes. Por exemplo, em std
		  existe o data std::data. Usando o namespace std eu nao poderia criar uma variavel chamada data.
	*/
	std::cout << "Variavel x do escopo local: " << x << '\n';
	std::cout << "Variavel x do namespace first: " << first::x << '\n';
	std::cout << "Variavel x do namespace second: " << second::x << '\n';










	system("pause");

	return 0;
}