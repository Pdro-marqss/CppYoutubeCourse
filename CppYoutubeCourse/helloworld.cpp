#include <iostream>
#include <vector>
#include <string>

namespace first {
	// Declarei aqui 2 variaveis com mesmo nome de variaveis declaradas abaixo no codigo.
	int x = 12;
	int y = 23;
}

namespace second {
	int x = 123;
	int y = 234;
}

//palavraChave -> tipo -> novoNome_t
typedef std::vector<std::pair<std::string, int>> pairlist_t;

// Outro exemplo de typedef para facilitar o uso de strings
typedef std::string text_t;

// using no lugar de typedef
//palavraChave -> novoNome_t -> tipo
using number_t = int;

int main() {

	/* >>> PRINT EM TELA
	
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



	/* >>> VARIAVEIS E TIPOS DE DADOS

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



	/* >>> VARIAVEIS CONSTANTES

		.Uma constante diz ao compilador que o valor da variavel nao pode ser alterado depois de atribuido.
		.read-only
		.Em constantes um padrao muito utilizado é definir o nome da variavel com letras maiusculas.

	*/
	const double PI = 3.14159;
	double radius = 10;
	double circumference = 2 * PI * radius;
	std::cout << "Circumference: " << circumference << "cm" << '\n';



	/* >>> NAMESPACES

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



	/* TYPEDEF, TYPE ALIAS E USING

		.typedef é uma palavra reservada usada para criar um novo nome (alias) para um tipo de dado existente.
		  Tornando-se um novo identificador para aquele tipo existente. Ajuda a melhorar a legibilidade do codigo.
		.Para o exemplo, vou fazer o include do headerfile <vector> no topo do arquivo.
		.typedef é feito fora do main, geralmente no topo do arquivo.
		.É comum no final do novo nome do tipo, adicionar _t para indicar que é um tipo.
		.typedef tem sido substituido pelo using, que funciona melhor com templates.
		.using também é definido fora do main e no topo do arquivo.

	*/
	// Sem usar typedef
	std::vector<std::pair<std::string, int>> pairlistWithoutTypeDef;
	
	// Usando typedef
	pairlist_t pairlistWithTypeDef;

	text_t stringComTypedef = "Esta string usa uma typedef";
	std::cout << stringComTypedef << '\n';

	//usando using
	number_t minhaIdade = 25;
	std::cout << "Minha idade: " << minhaIdade << '\n';



	/* OPERADORES ARITIMETICOS

		.existem: +(adicao), -(subtracao), *(multiplicacao), /(divisao), %(resto).
		.usando um int caso a divisao tenha valor com ponto, vamos perder o que vem depois do ponto. Para salvar,
		  precisamos mudar o tipo do valor para double.
		.Se quiser o valor do resto da divisao, podemos usar o modulo de resto que é %.
		.Operadores aritimeticos tem uma ordem de execucao. Na equacao, primeiro é executado o que esta em (),
		  depois multiplicacao e divisao, depois adicao e subtracao

	*/
	int students = 20;

	students = students + 2;
	// OU:
	students += 2;
	// OU caso queira adicionar apenas 1 a mais:
	students++;

	students = students - 2;
	// OU :
	students -= 2;
	// OU caso queira remover apenas 1:
	students--;

	students = students * 2;
	students *= 2;

	students = students / 2;
	students /= 3;

	int resto = students % 2;

	std::cout << "Quantidade de estudantes: " << students << '\n';
	std::cout << "Resto da divisao de estudantes por 2: " << resto << '\n';



	/* CONVERSÃO DE TIPO

		.Converte um valor de um tipo de dado para outro.
		.Existe o tipo implicito, onde o compilador faz a conversao automaticamente.
		.Existe o tipo explicito, que precisa ser feito manualmente usando (int), (char), etc
		.Se implicitamente o compilador converter um number com typagem em int, ele devolve uma letra. Isso
		  porque na tabela ASCII, cada numero corresponde a uma letra ou caractere especial.
		.Esse tipo de conversao é muito util em alguns casos, como por exemplo quando vamos fazer um calculo
		  de media (exemplo abaixo). La, quando dividimos 2 inteiros e o resultado é um numero com ponto como
		  0,83, o compilador faz um truncate na virgula e devolve só o 0, que depois é multiplicado por 100, dando
		  o resultado de 0. Isso prejudica a operação. Entao para resolver isso nós alteramos o tipo dos inteiros
		  explicitamente para double, assim preserva a parte decimal e conclui a operaçao.

	*/
	// Exemplo de conversao implicita
	int implicito = 3.14; // o compilador vai automaticamente converter 3.14 (double) para 3 (int)

	// Exemplo de conversao explicita
	double explicito = (int)3.14; // Transforma double 3.14 em int 3.

	// Exemplo de caso de uso (descrito nas anotaçoes acima)
	int correctAnswers = 8;
	int numberOfQUestions = 10;
	// --> Devolve Resultado Errado:
	// double scorePercentage = correctAnswers / numberOfQUestions * 100;
	// --> Devolve Resultado Certo:
	double scorePercentage = (double)correctAnswers / (double)numberOfQUestions * 100;
	std::cout << "Porcentagem de acerto na prova: " << scorePercentage << "%" << '\n';



	/* INPUT DE USUARIO

		.Ja vimos o cout que é usado para imprimir na tela. Significa character output e é acompanhado
		  do operador de inserção <<.
		.Agora vamos ver o cin que é usado para receber input do usuario. Significa character input e 
		  é acompanhado do operador de extração >>.
		.Por padrao quando digitamos espaços, o cin considera apenas o primeiro valor antes do espaço.
		  Para capturar uma linha inteira com espaços, precisamos usar o std::getline(). Essa funcao
		  precisa do #include<string> no topo do arquivo, ja que ela vem de la.
		.Um bug que o getline pode apresentar é quando usado depois de um cin. Isso porque o cin
		  deixa o caractere de nova linha (\n) no buffer, e o getline le esse caractere como uma linha
		  vazia. Para evitar isso, podemos usar o std::ws no cin. Esse ws elimina os espaços vazios
		  em branco do buffer antes de ler a linha completa com getline.

	*/
	std::string userName;
	int age;

	std::cout << "E qual a sua idade? : ";
	std::cin >> age;

	std::cout << "Qual o seu nome completo ? : ";
	std::getline(std::cin >> std::ws, userName);

	std::cout << "Ola " << userName << '\n';
	std::cout << "Voce tem " << age << " anos de idade" << '\n';








	system("pause");

	return 0;
}