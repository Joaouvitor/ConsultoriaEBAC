#include <stdio.h> //BIBLIOTECA DE COMUNICA��O COM O �SUARIO 
#include <stdlib.h> //BIBLIOTECA DE ESPA�O EM MEM�RIA
#include <locale.h> //BIBLIOTECA DE TEXTO REGIONAL 
#include <string.h> // BIBLIOTECA RESPONSAVEL POR CUIDAR DAS STRINGS


     int registro()   
{
	 // criar variaveis/ strings 
       char arquivo[40];  
	   char cpf[40]; 
       char nome[40];
       char sobrenome[40];
       char cargo[40];
       
       printf("Digite o cpf a ser cadastrado: ");
       scanf("%s", cpf);                           //LER O VALOR COLOCADO NA VARIAVEL/STRING
       
       strcpy(arquivo, cpf); // COPIAR OS VALORES DAS STRINGS
       
       FILE *file; // CRIAR O ARQUIVO
       file = fopen(arquivo, "w"); // "fopen" abrir o aquivo dento do cochete  // "w" SERVE PARA CRIAR UM NOVO ARQUIVO
       fprintf(file,cpf); // SALVAR VALOR DA VARIAVEL, NO CASO CPF
       fclose(file); //FECHAR ARQUIVO
       
	   file = fopen(arquivo, "a");      // "a" ATUALIZAR ARQUIVO
       fprintf(file,",");               // "," SEPARAR POR VIRGULA AS INFORM��ES ( REPETIR EM TODOS QUE DESEJA SEPARAR ) 
       fclose(file); //USAR SEMPRE PARA FECHAR ARQUIVO
       
       printf("Digite o nome a ser cadastrado: ");
       scanf("%s",nome);                                

       
       file = fopen(arquivo, "a");       
       fprintf(file,nome);
       fclose(file);
       
       file = fopen(arquivo, "a");
       fprintf(file,",");
       fclose(file);
       
       printf("Digite o sobrenome a ser cadastrado:");
       scanf("%s",sobrenome);
       
       file = fopen(arquivo, "a");
       fprintf(file, sobrenome);
       fclose(file);
       
       file = fopen(arquivo, "a");
       fprintf(file,",");
       fclose(file);
       
       printf("Digite o cargo a ser cadastrado: ");
       scanf("%s",cargo);
       
       file = fopen(arquivo, "a");
	   fprintf(file,cargo);
	   fclose(file);
	   
	   
	   system("pause");
	 
}
       



     int consulta()
 {
 
	    setlocale(LC_ALL, "Portuguese");  // N�O ESQUECER DE COLOCAR EM TODO NOVO COMANDO PARA ASSENTO 
	    
		char cpf[40];
		char conteudo[200];
		
		printf("Digite o cpf a ser consultado:");
		scanf("%s",cpf);
		
		FILE *file;
		file = fopen(cpf,"r");  // "r" PARA LER O ARQUIVO, NO CASO "cpf"
		
		if(file == NULL)
		{
		printf("N�o foi possivel localizar o arquivo!.\n");
		}
		
		while(fgets(conteudo, 200, file) != NULL )
		{ // while= enquanto, fgets= procurar, conteudo=variavel criada, file= arquivo, 200= maximo de carctere, null= anular se for maior que 200
			printf("\nEssas s�o as informa��es do usu�rio: ");
			printf("%s",conteudo);
			printf("\n\n");
			
			
	}
		system("pause");
		   
		}	
 

     int deletar()
{
	char cpf[40];
	
	printf("Digite o CPF a ser deletado: ");
	scanf("%s",cpf);
	
	remove(cpf);                                   // Excluir dado solicitado
	
	FILE *file;
	file = fopen(cpf,"r");
	
	if(file == NULL)
	{
	printf("Usu�rio removido ou n�o se encontra no sistema!.\n");
	system("pause");
	}
	}

     int main() //CODIGO DE FUNCIONALIDADE GERAL 
{
	 int opcao=0; // ESPA�O PARA ALOCA��O DE VARIAVEIS
	 int laco=1;
	 char senhadigitada[10]= "a";
	 int comparacao;
	 
	 setlocale(LC_ALL, "Portuguese");
	 printf("\tCentral de cart�rio EBAC\n\n");
	 printf("Login de administrador\n\nDigite sua senha:");
	 scanf("%s", senhadigitada);
	 
	 comparacao = strcmp(senhadigitada, "admin");
	 
	if(comparacao == 0)	 
	{

	
		 {
		

	 
	     for(laco=1; laco==1;) // PARA RECONDICIONAR AO PONTO DESEJADO OU DE INICIO
	     {
		
	     system("cls");
	
	     setlocale(LC_ALL, "Portuguese"); // ALOCA��O DENTRO DA FUN��O PARA LINGUAGEM TEXTUAL
	
	
	     printf("\tCentral de cart�rio EBAC\n\n\n"); //PRINTF PARA INICIO DE COMANDO PARA INTRODU��O TEXTUAL COM �SUARIO
	
	     printf("Esolha a op��o desejada:\n\n");  // INICIO DO MENU
	     printf("\t1- Registrar nomes\n\n");     
	     printf("\t2- Consultar nomes\n\n");      
 	     printf("\t3- Deletar nomes\n\n");
	     printf("\t4- Sair do sistema\n\n");        
  	     printf("Opc�o:"); //FIM DO MENU
	
	     scanf("%d", &opcao);                    // PARA DESTINAR VARIAVEL DO �SUARIO � "int opcao=0"
	     system("cls");                          // PARA LIMPAR TELA ANTERIOR 
	 
	     switch(opcao)                          // PARA DAR FUN��ES DE ESCOLHAS MINIMIZADAS DIFERENTE DA DETALHADA "IF"
	     {
	 	case 1:
	 	registro();     // CHAMAR FUN��ES EX: "int registro"
	 	break;
		
	 	case 2:
	 	consulta();	
	 	break;
		
	 	case 3:
	 	deletar();	
	 	break;
	 	
	 	case 4:
	 	printf("Obrigado por utilizar o sistema !\n");
	 	return 0;
	 	break;
		
	 	default:	printf("Essa op��o n�o est� disponivel\n");  // PARA ESCOLHAS DIFERENTES DAS DISPONIVEIS
	 	system("pause");
					
	     }
    
	 }     	 
}
     }else
     printf("Senha incorreta!");
}


 
