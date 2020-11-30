#include <stdio.h>
#include <stdlib.h> // esse include serve para habilitar o system cls

/* Exemplo de como pode ser a parte dos planetas 

void entrandoNosPlanetas(){
	int C,CSS e assim vai;
	
		printf("\n\t\tE aqui sua verdadeira aventura comeca\n");
			printf("\n\n\n\t\tBem vindo ao planeta C \n\n\t\t Digite sua senha: "); // Aqui começa o Planeta C
			scanf("%d",&C);
		
			while(C != 4321){
			printf("\n\t\tSenha incorreta, digite a senha novamente: ");
			scanf("%d",&C);
			}
			
			if(C == 4321){ Se senha for ok a aventura no planeta C segue
				printf("\n\t\tTudo ok");
			}
			printf("\n\n\n\t\tBem vindo ao planeta CSS \n\n\t\t Digite sua senha: "); // Aqui começa o Planeta C
			scanf("%d",&CSS);
			
			while(CSS != 65421){
				printf("\n\t\tSenha incorreta, digite a senha novamente: ");
				scanf("%d",&CSS);	
			}
			
			if(CSS == 65421){ Se senha for ok a aventura no planeta CSS segue
				printf("\n\t\tTudo Certo");
			}
}
*/

int main(){
	char nomes [3][20],res[20];
	int i, vida = 100,permissao,pergunteNovamente=0; // Os pontos de vida, são referentes a parte das aventuras, deixei configurado aqui já
	printf("\n\t\t\tBem vindo a Antares Brasileiro\n");
	printf("\n\tObjetivo da Missao: Encontrar a combinacao de DNA e salvar o MUNDO \n\n");
	
	for(i=0;i<3;i++){
		printf("\n\tDigite o seu nome: ");
		scanf("%s", nomes[i]);
	}

   system("cls"); // A função cls serve para limpar o processamento, é algo que deixa o programa mais legivel ele funciona igualmente o limpatela do portugol 

	
	for(i=0;i<3;i++){
		printf("\n\t\tTripulantes integrando a nave: %s \n", nomes[i]); // os dois \t apenas para centralizar os nomes obtidos
	}
	// Aqui encerra os nomes e começa a parte do operador e do switch case	
	printf("\n\t\tQuase tudo pronto pra partir\n\n");
	
	do{
	printf("\t\tDigite: \n \t\t1 para permitir o lancamento \n \t\t2 para explodir\n \t\t3 para nao permitir decolagem ");	
	scanf("%d",&permissao);
	
	switch (permissao){
		case 1: // uma contagem regressiva vai aparecer
			printf("\n\t\tContagem regressiva: 3... 2.. 1... VAII!");
			
			system("cls");
		//	entrandoNosPlanetas();  Esse aqui chama a função dos planetas que será construida 
		
		break;
		
		case 2: // Vai exibir os tripulantes mortos
			for(i=0;i<3;i++){
		printf("\n\t\tTripulantes Mortos: %s \n", nomes[i]); 
		pergunteNovamente=1;
	}
		break;
		
		case 3: // Vai exibir um alerta de saida 
			printf("\n\t\tSaiam do foguete imediatamente, decolagem nao permitida!!!");
		pergunteNovamente=1;
			
		break;
		
		default:
			printf("\n\t\tOpcao invalida");
	}
	}while( pergunteNovamente == 1); // A flag é em relação a perguntar novamente, caso o operador digite 2 ou 3 a pergunta será lançada novamente até ele aceitar
   
	return 0;
}

// por os planetas em funções; Fazer a ordenação dos nomes dos planetas em ordem alfabetica, não podemos ordenar manualmente 
