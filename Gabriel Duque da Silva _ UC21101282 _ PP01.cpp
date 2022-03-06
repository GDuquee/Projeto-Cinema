//Nome: Gabriel Duque da Silva  //Matricula: UC21101282 //Curso: BCC


#include<stdio.h>//biblioteca para o uso de printf e scanf
#include<string.h>//biblioteca para ler strings, strlen e strcmp:
#include<stdlib.h>//biblioteca nesse caso para usar o comando system ("pause")
#include<ctype.h>//biblioteca para o uso de toupper

int main(){//inicio do algoritimo

int nSessoes, nPessoas, idade, i, maiorMulher, maiorHomem;//declaracao de variavel int
char nomeFilme[50], sexo;//declaracao de variavel char
int crianca, adolescente, adulto, idoso, homem, mulher;//declaracao de variavel int

//float - %f
//double - %lf
//int - %d ou %i
//char - %c

crianca = 0;//declaracao de variavel
adolescente = 0;//declaracao de variavel
adulto = 0;//declaracao de variavel
idoso = 0;//declaracao de variavel
homem = 0;//declaracao de variavel
mulher = 0;//declaracao de variavel


	printf("\n					****************CINE DUQUE****************		\n");
	printf("\n		Ola, seja Bem Vindo ao programa desenvolvido para o sistema de pesquisa do Cinema		\n");
	
do{//estrutura usada para repeticao

	printf("\nInforme a quantidade de sessoes desejadas para que a pesquisa seja realizada:");//imprimir na tela 
	scanf("%d", &nSessoes);//leitura dos dados e alocacao na variavel especificada
	fflush(stdin);//limpar o buffer de memoria
	
	if(nSessoes >2 || nSessoes <2)//estrutura de condicao usada para numero de sessoes
		{
		printf("Aceitamos somente 2 sessoes\n");//imprimir na tela
		}
	else//estrutura de condicao que acompanha o if
		{
		printf("sessoes inseridas com sucesso\n");//imprimir na tela
	 	}
 	
  }
  
while(nSessoes >2 || nSessoes <2);//estrutura usada para repeticao

do{//estrutura usada para repeticao

	printf("\nInsira o nome do filme desejado:");//imprimir na tela
	fgets(nomeFilme, 50, stdin);//leitura dos dados e alocacao na variavel especificada
	fflush(stdin);//limpar o buffer de memoria
	
	if(strlen(nomeFilme) <= 2)//estrutura de condicao usada para nome do filme
		{
		printf("Filme inexistente\n");//imprimir na tela
		}
	else//estrutura de condicao que acompanha o if
		{
		printf("Filme encontrado!\n");//imprimir na tela
		}
	
  }
  
while(strlen(nomeFilme) <= 2);//estrutura usada para repeticao

do{//estrutura usada para repeticao
	
	printf("\nInsiram a quantidade de pessoas que assistiram as duas sessoes do filme: %s", nomeFilme);//imprimir na tela
	scanf("%d", &nPessoas);//leitura dos dados e alocacao na variavel especificada
	fflush(stdin);//limpar o buffer de memoria
	
	if(nPessoas <4)//estrutura de condicao usada para numero de pessoas
		{
		printf("10 ou mais pessoas assistiram o filme, digite um numero maior ou igual a 10!\n");//imprimir na tela
		}
	else//estrutura de condicao que acompanha o if
		{
		printf("Numero de pessoas aceita\n");//imprimir na tela	
		}
  }
  
while(nPessoas <4 );//estrutura usada para repeticao

for(i = 0; i < nPessoas; i ++)//estrutura usada para repeticao

{
	
do{//estrutura usada para repeticao
	
	printf("\nInforme a idade de todas as pessoas que estavam presente nas sessoes 1 por 1, consecutivamente:");//imprimir na tela
	scanf("%d", &idade);//leitura dos dados e alocacao na variavel especificada
	fflush(stdin);//limpar o buffer de memoria
	
	if (idade < 3 || idade > 100)//estrutura de condicao usada para idade
		{
		printf("inserir idades de 3 a 100 anos!\n");//imprimir na tela
		}

	if(idade >= 3 && idade <= 13)//estrutura de condicao usada para idade
		{
		crianca = crianca + 1;
		}
	
	if(idade >= 14 && idade <= 17)//estrutura de condicao usada para idade
		{
		adolescente = adolescente + 1;
		}
	
	if(idade >= 18 && idade <= 64)//estrutura de condicao usada para idade
		{
		adulto = adulto + 1;
		}
		
	if(idade >= 65 && idade <= 100)//estrutura de condicao usada para idade
		{
		idoso = idoso + 1;
		}

  }
  
while(idade < 3 || idade > 100);//estrutura usada para repeticao	

do{//estrutura usada para repeticao
	
	printf("Informe o sexo da pessoa com 'M para Macsculino' e 'F para Feminino' ");//imprimir na tela
	scanf("%c", &sexo);//leitura dos dados e alocacao na variavel especificada
	fflush(stdin);//limpar o buffer de memoria
	
	sexo = toupper(sexo);// comando converte um caracter para maiúsculo
	
	if (sexo != 'M' && sexo != 'F')//estrutura de condicao usada para sexo masculino e feminino
		{
		printf("Sexo invalido, digite novamente\n");//imprimir na tela
		}
	if('F' == sexo)//estrutura de condicao usada para sexo feminino
		{
		mulher = mulher + 1;
		}
	if('M' == sexo)//estrutura de condicao usada para sexo masculino
		{
		homem = homem + 1;
		}
	if((idade >= 18) && (sexo == 'F'))//estrutura de condicao usada para idade e sexo
		{
		maiorMulher++;
		}
	if((idade >= 18) && (sexo == 'M'))//estrutura de condicao usada para idade e sexo
		{
		maiorHomem++;
		}
	
  }

while(sexo != 'M' && sexo != 'F');//estrutura usada para repeticao

}

system("cls");//comando para limpar tela

printf("		Tabela 1 \n");

printf("Filme: %s\n Mulheres: %d\n Homens %d\n Crianca: %d\n Adolescente: %d\n Idoso: %d\n", nomeFilme, mulher, homem, crianca, adolescente, idoso);//imprimir na tela

system("pause");//comando usado para não deixar um teste rápido fechar

system("cls");//comando para limpar tela

printf("		Tabela 2 - Identificadores de maiores de idade\n");

printf("Homens maiores de idade: %d\n Mulheres maiores de idade: %d\n ", maiorHomem, maiorMulher);//imprimir na tela

system("pause");//comando usado para não deixar um teste rápido fechar

return 0;
}//fim do algoritimo  

