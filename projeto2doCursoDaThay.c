#include <stdio.h>
#include <stdlib.h> 
#include <string.h>
 
 
int vida = 100;
int cobra=0, jacare=0, buraco=0;
int result;
int total = cobra+jacare+buraco; 



 void planetC(){
 		printf("\n\tVoceh entrou no planeta C");
 				printf("\n\tFavor nao usar calculadora nas questoes ok");
				printf("\n\t Enquanto anda, voceh ve distante um lago e segue em direcao a ele\n");
				printf("\n\tVoceh encontrou uma cobra, resolva as questoes para derrota-la\n");
				
				printf("\n\t1.Qual e o resultado de 10+1 ? ");
				scanf("%d",&result);
				
				while(result != 11){
				  	cobra++;
				  	printf("\n\tvoce perdeu 5 pontos");
				  	vida = vida-5;
				  	printf("\n\tQual e o resultado de 10+1?  ");
				    scanf("%d",&result);
				  }
				 
				printf("\n\t2.Qual e o resultado de 30-4 ? ");
				scanf("%d",&result);
				
				while(result != 26){
				  	cobra++;
				  	printf("\n\tvoce perdeu 5 pontos");
				  	vida = vida-5;
				  	printf("\n\tQual e o resultado de 30-4?  ");
				    scanf("%d",&result);
				  }  
				  
				printf("\n\t3.Qual e o resultado de 99+6 ? ");
				scanf("%d",&result);
				
				while(result != 105){
				  	cobra++;
				  	printf("\n\tvoce perdeu 5 pontos");
				  	vida = vida-5;
				  	printf("\n\tQual e o resultado de 99+6?  ");
				    scanf("%d",&result);
				  } 
				printf("\n\tParabens, voceh chegou ao lago e pegou o DNA\n");
				total = cobra+jacare+buraco;
 }

void planetCSS(){
	printf("\n\tVoceh entrou no planeta CSS");
				printf("\n\t Enquanto anda, voceh ve distante um lago e segue em direcao a ele\n");
				printf("\n\tVoceh encontrou um jacare, resolva as questoes para derrota-lo\n");
				
				printf("\n\t1.Qual e o resultado de 9*5 ? ");
				scanf("%d",&result);
				
				while(result != 45){
				  	jacare++;
				  	printf("\n\tvoce perdeu 7 pontos");
				  	vida = vida-7;
				  	printf("\n\tQual e o resultado de 9*5?  ");
				    scanf("%d",&result);
				  }
				 
				printf("\n\t2.Qual e o resultado de 30*4 ? ");
				scanf("%d",&result);
				
				while(result != 120){
				  	jacare++;
				  	printf("\n\tvoce perdeu 7 pontos");
				  	vida = vida-7;
				  	printf("\n\tQual e o resultado de 30*4?  ");
				    scanf("%d",&result);
				  }  
				  
				printf("\n\t3.Qual e o resultado de 99*6 ? ");
				scanf("%d",&result);
				
				while(result != 594){
				  	jacare++;
				  	printf("\n\tvoce perdeu 7 pontos");
				  	vida = vida-7;
				  	printf("\n\tQual e o resultado de 99*6?  ");
				    scanf("%d",&result);
				  } 
				  
				  printf("\n\tSeus error ate agora sao : %d \n",jacare);
				  printf("\n\tParabens, voceh chegou ao lago e pegou o DNA\n");
				  total = cobra+jacare+buraco;
				  
}

void planetHTML(){
	printf("\n\tVoceh entrou no planeta HTML");
				printf("\n\t Enquanto anda, voceh ve distante um lago e segue em direcao a ele\n");
				printf("\n\tVoceh encontrou um buraco, resolva as questoes para nao cair no buraco\n");
				
				printf("\n\t1.Qual e o resultado de 9*5*2 ? ");
				scanf("%d",&result);
				
				while(result != 90){
				  	buraco++;
				  	printf("\n\tvoce perdeu 6 pontos");
				  	vida = vida-6;
				  	printf("\n\tQual e o resultado de 9*5*2?  ");
				    scanf("%d",&result);
				  }
				 
				printf("\n\t2.Qual e o resultado de 30*4/2 ? ");
				scanf("%d",&result);
				
				while(result != 60){
				  	buraco++;
				  	printf("\n\tvoce perdeu 6 pontos");
				  	vida = vida-6;
				  	printf("\n\tQual e o resultado de 30*4/2?  ");
				    scanf("%d",&result);
				  }  
				  
				printf("\n\t3.Qual e o resultado de 99*6/2 ? ");
				scanf("%d",&result);
				while(result != 297){
				  	buraco++;
				  	printf("\n\tvoce perdeu 6 pontos");
				  	vida = vida-6;
				  	printf("\n\tQual e o resultado de 99*6/2?  ");
				    scanf("%d",&result);
				  } 
				  printf("\n\tSeus error ate agora sao : %d \n",buraco);
				  printf("\n\tParabens, voceh chegou ao lago e pegou o DNA\n");
				  total = cobra+jacare+buraco;
}
void planetJava(){
	printf("\n\tVoceh entrou no planeta JAVA ");
				printf("\n\t Enquanto anda, voceh ve distante um lago e segue em direcao a ele\n");
				printf("\n\tVoceh encontra dificuldades, resolva as questoes para prosseguir \n");
				
				printf("\n\t1.Qual e o resultado de 9*5*2/3 ? ");
				scanf("%d",&result);
				
				while(result != 30){
				  	jacare++;
				  	printf("\n\tvoce perdeu 7 pontos");
				  	vida = vida-7;
				  	printf("\n\tQual e o resultado de 9*5*2/3?  ");
				    scanf("%d",&result);
				  }
				 
				printf("\n\t2.Qual e o resultado de 30-1*5*2 ? ");
				scanf("%d",&result);
				
				while(result != 20){
				    buraco++;
				  	printf("\n\tvoce perdeu 6 pontos");
				  	vida = vida-6;
				  	printf("\n\tQual e o resultado de 30-1*5*2?  ");
				    scanf("%d",&result);
				  }  
				  
				printf("\n\t3.Qual e o resultado de 99+3 ? ");
				scanf("%d",&result);
				
				while(result != 102){
				  	cobra++;
				  	printf("\n\tvoce perdeu 5 pontos");
				  	vida = vida-5;
				  	printf("\n\tQual e o resultado de 99+3?  ");
				    scanf("%d",&result);
				  } 
				  int total;
				  
				  total = cobra+buraco+jacare;
				  printf("\n\tSeus error ate agora sao : %d \n",total);
				  printf("\n\tParabens, voceh chegou ao lago e pegou o DNA\n");
				  total = cobra+jacare+buraco;
				  
}
void planetJs(){
	printf("\n\tVoceh entrou no planeta JAVASCRIPT ");
				printf("\n\t Enquanto anda, voceh ve distante um lago e segue em direcao a ele\n");
				printf("\n\tVoceh encontra dificuldades, resolva as questoes para prosseguir \n");
				
				printf("\n\t1.Qual e o resultado de 9*5*2/3/2 ? ");
				scanf("%d",&result);
				
				while(result != 15){
				  	jacare++;
				  	printf("\n\tvoce perdeu 7 pontos");
				  	vida = vida-7;
				  	printf("\n\tQual e o resultado de 9*5*2/3/2?  ");
				    scanf("%d",&result);
				  }
				 
				printf("\n\t2.Qual e o resultado de 30-1*5*2-2 ? ");
				scanf("%d",&result);
				
				while(result != 18){
				    buraco++;
				  	printf("\n\tvoce perdeu 6 pontos");
				  	vida = vida-6;
				  	printf("\n\tQual e o resultado de 30-1*5*2-2?  ");
				    scanf("%d",&result);
				  }  
				  
				printf("\n\t3.Qual e o resultado de 99+3/2 ? ");
				scanf("%d",&result);
				
				while(result != 51){
				  	cobra++;
				  	printf("\n\tvoce perdeu 5 pontos");
				  	vida = vida-5;
				  	printf("\n\tQual e o resultado de 99+3/2?  ");
				    scanf("%d",&result);
				  } 
				  printf("\n\tSeus error ate agora sao : %d \n",total);
				  printf("\n\tParabens, voceh chegou ao lago e pegou o DNA\n");
				  total = cobra+jacare+buraco;
				  
}
void planetPhyton(){
	printf("\n\tVoceh entrou no planeta PHYTON ");
				printf("\n\t Enquanto anda, voceh ve distante um lago e segue em direcao a ele\n");
				printf("\n\tVoceh encontra dificuldades, resolva as questoes para prosseguir \n");
				
				printf("\n\t1.Qual e o resultado de 9+2 ? ");
				scanf("%d",&result);
				
				while(result != 11){
				  	cobra++;
				  	printf("\n\tvoce perdeu 5 pontos");
				  	vida = vida-5;
				  	printf("\n\tQual e o resultado de 9+2?  ");
				    scanf("%d",&result);
				  }
				 
				printf("\n\t2.Qual e o resultado de 30-1? ");
				scanf("%d",&result);
				
				while(result != 29){
				    cobra++;
				  	printf("\n\tvoce perdeu 5 pontos");
				  	vida = vida-5;
				  	printf("\n\tQual e o resultado de 30-1?  ");
				    scanf("%d",&result);
				  }  
				  
				printf("\n\t3.Qual e o resultado de 1+1 ? ");
				scanf("%d",&result);
				
				while(result != 2){
				  	cobra++;
				  	printf("\n\tvoce perdeu 5 pontos");
				  	vida = vida-5;
				  	printf("\n\tQual e o resultado de 1+1?  ");
				    scanf("%d",&result);
				  } 
				  total = cobra+jacare+buraco;
				  printf("\n\tSeus error ate agora sao : %d \n",total);
				  printf("\n\tParabens, voceh chegou ao lago e pegou o DNA\n");
				  
}
void planetTypescript(){
	printf("\n\tVoceh entrou no planeta TYPESCRIPT ");
				printf("\n\t Enquanto anda, voceh ve distante um lago e segue em direcao a ele\n");
				printf("\n\tVoceh encontra dificuldades, resolva as questoes para prosseguir \n");
				
				printf("\n\t1.Qual e o resultado de 9*5*2/3/2/3 ? ");
				scanf("%d",&result);
				
				while(result != 5){
				  	jacare++;
				  	printf("\n\tvoce perdeu 7 pontos");
				  	vida = vida-7;
				  	printf("\n\tQual e o resultado de 9*5*2/3/2/3?  ");
				    scanf("%d",&result);
				  }
				 
				printf("\n\t2.Qual e o resultado de 30-1*5*2-2*2 ? ");
				scanf("%d",&result);
				
				while(result != 16){
				    buraco++;
				  	printf("\n\tvoce perdeu 6 pontos");
				  	vida = vida-6;
				  	printf("\n\tQual e o resultado de 30-1*5*2-2*2?  ");
				    scanf("%d",&result);
				  }  
				  
				printf("\n\t3.Qual e o resultado de 99+32+1 ? ");
				scanf("%d",&result);
				
				while(result != 132){
				  	cobra++;
				  	printf("\n\tvoce perdeu 5 pontos");
				  	vida = vida-5;
				  	printf("\n\tQual e o resultado de 99+32+1?  ");
				    scanf("%d",&result);
				  } 
				  total = cobra+jacare+buraco;
				  printf("\n\tSeus error ate agora sao : %d \n",total);
				  printf("\n\tParabens, voceh chegou ao lago e pegou o DNA\n");
}
void entrandoNosPlanetas(){
	int j=0,I;
	int i,J;
	char dnaProcess[27];
	char planets[7][20] = {"java","c","javascript","typescript","phyton","css","html"}, aux[20];
	char correctPlanets[7][20]= {"c","css","html","java","javascript","phyton","typescript"};
	char c[] = {"ABCD"}, css[] = {"JUED"}, html[] = {"IJXL"} , java[] = {"OPDW"}, javascript[] = {"UHTY"}, python[] = {"LLOP"} , typescript[] = {"JNBG" };
	int C,CSS,HTML,JAVA,JAVASCRIPT,PHYTON,TYPESCRIPT; 
	
	// Ordenando os planetas
		for(i = 1; i<7; i++){ // quantidade de palavras
		for(J = 1; J < 7;J++){
			if( strcmp(planets[J-1], planets[J])>0){
				strcpy(aux, planets[J-1]);
				strcpy(planets[J-1],planets[J]);
				strcpy(planets[J],aux);
			}
		}
	}
	// Avaliando se a ordenacao está correta, caso nao esteja o programa se encerrará até ser ajeitado * Para testar é só mudar o indice abaixo contanto que seja diferente pelo qual esteja sendo comparado ex: 1,0 vai dar erro mas 1 e 1 vai continuar
	if(strcmp(planets[0],correctPlanets[0]) == 0 && strcmp(planets[1],correctPlanets[1]) == 0 && strcmp(planets[2],correctPlanets[2]) == 0 && strcmp(planets[3],correctPlanets[3]) == 0 && strcmp(planets[4],correctPlanets[4]) == 0 && strcmp(planets[5],correctPlanets[5]) == 0 && strcmp(planets[6],correctPlanets[6]) == 0 && strcmp(planets[7],correctPlanets[7]) == 0){
		printf("\n\t\tE aqui sua verdadeira aventura comeca\n");
			printf("\n\n\n\t\tBem vindo ao planeta C \n\n\t\t Digite sua senha: "); // Aqui começa o Planeta C
			scanf("%d",&C);
		
			while(C != 4321){
			printf("\n\t\tSenha incorreta, digite a senha novamente: ");
			scanf("%d",&C);
			}
			
			if(C == 4321){ //Se senha for ok a aventura no planeta C segue
			planetC();  
				for( I=0;I<j+4;I++){
					dnaProcess[I]= c[I];
				} 
			printf("\n\tNova sequencia obtida: %s\t",dnaProcess);	
			}
				
			printf("\n\n\n\t\tBem vindo ao planeta CSS \n\n\t\t Digite sua senha: "); // Aqui começa o Planeta CSS
			scanf("%d",&CSS);
			
			while(CSS != 6542){
				printf("\n\t\tSenha incorreta, digite a senha novamente: ");
				scanf("%d",&CSS);	
			}
			
			if(CSS == 6542){ // Se senha for ok a aventura no planeta CSS segue
				planetCSS();
				int x = 0;
				for( I=4;I<j+8;I++){
					dnaProcess[I]= css[x];
					x++;
				} 
				printf("\n\tSequencia obtida: %s",css);
			} 
			// HTML
			printf("\n\n\n\t\tBem vindo ao planeta HTML \n\n\t\t Digite sua senha: "); 
			scanf("%d",&HTML);
			
			while(HTML != 9876){
				printf("\n\t\tSenha incorreta, digite a senha novamente: ");
				scanf("%d",&HTML);	
			}
			
			if(HTML == 9876){ // Se senha for ok a aventura no planeta CSS segue
				planetHTML();
			    int x=0;
				for( I=8;I<j+12;I++){
					dnaProcess[I]= html[x];
					x++;
				} 
				printf("\n\t Sequencia adicionada com sucesso");
				printf("\n\tSequencia obtida: %s",html);
				
			}
			
			// Java
				printf("\n\n\n\t\tBem vindo ao planeta JAVA \n\n\t\t Digite sua senha: "); 
			scanf("%d",&JAVA);
			
			while(JAVA != 1234){
				printf("\n\t\tSenha incorreta, digite a senha novamente: ");
				scanf("%d",&JAVA);	
			}
			
			if(JAVA == 1234){ // Se senha for ok a aventura no planeta CSS segue
				planetJava();
				int x=0;
				for( I=12;I<j+16;I++){
					dnaProcess[I]= java[x];
					x++;
				} 
				printf("\n\t Sequencia adicionada com sucesso");
				printf("\n\tSequencia obtida: %s",java);
				
			}
			// Javascrpit
			printf("\n\n\n\t\tBem vindo ao planeta JAVASCRIPT \n\n\t\t Digite sua senha: "); 
			scanf("%d",&JAVASCRIPT);
			while(JAVASCRIPT != 5678){
				printf("\n\t\tSenha incorreta, digite a senha novamente: ");
				scanf("%d",&JAVASCRIPT);	
			}
			if(JAVASCRIPT == 5678){ // Se senha for ok a aventura no planeta CSS segue
				planetJs();
				int x=0;
				for( I=16;I<j+20;I++){
					dnaProcess[I]= javascript[x];
					x++;
				} 
				printf("\n\t Sequencia adicionada com sucesso");
				printf("\n\tSequencia obtida: %s",javascript);
				
			}
			//Phyton
			printf("\n\n\n\t\tBem vindo ao planeta PHYTON \n\n\t\t Digite sua senha: "); 
			scanf("%d",&PHYTON);
			
			while(PHYTON != 2456){
				printf("\n\t\tSenha incorreta, digite a senha novamente: ");
				scanf("%d",&PHYTON);	
			}
			
			if(PHYTON == 2456){ // Se senha for ok a aventura no planeta CSS segue
				planetPhyton();
				int x=0;
				for( I=20;I<j+24;I++){
					dnaProcess[I]= python[x];
					x++;
				} 
				printf("\n\tSequencia obtida: %s",python);	
			}
			// Typescript
			printf("\n\n\n\t\tBem vindo ao planeta TYPESCRIPT \n\n\t\t Digite sua senha: "); 
			scanf("%d",&TYPESCRIPT);
			while(TYPESCRIPT != 8765){
				printf("\n\t\tSenha incorreta, digite a senha novamente: ");
				scanf("%d",&TYPESCRIPT);	
			}
			
			if(TYPESCRIPT == 8765){ // Se senha for ok a aventura no planeta CSS segue
				planetTypescript();
				int x=0;
				for( I=24;I<j+28;I++){
					dnaProcess[I]= typescript[x];
					x++;
				} 
				printf("\n\t Sequencia adicionada com sucesso");
				printf("\n\tSequencia obtida: %s",typescript);
			}
			
			if( vida > 0){
				system("cls");
				printf("\n\tParabens, voces sao herois e conseguiram salvar todo mundo");
				printf("\n\n\tGracas a combinacao obtida: %s", dnaProcess);
				printf("\n\n\tO mundo esta a salvo, obrigado...");
				
				printf("\n\n\tInformacoes adicionais: ");
				printf("\n\n\tSaldo de vida: %d",vida);
				printf("\n\n\tSaldo de erros: %d",total);	
			}else{
			system("cls");
			printf("\n\tVoceh,apesar de ter chegado ao fim, fracassou e morreu antes de chegar\n na terra logo tudo acabou e todo mundo morreu pelo seu erro"); 
				printf("\n\n\tInformacoes adicionais: ");
				printf("\n\n\tSaldo de vida: %d",vida);
				printf("\n\n\tSaldo de erros: %d",total);
			}
}else{
		printf("\n\tOrdem dos planetas invalida, favor recomecar o programa");
		exit(0);
	}
}


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
			entrandoNosPlanetas(); // Esse aqui chama a função dos planetas que será construida 
			exit(0);
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
