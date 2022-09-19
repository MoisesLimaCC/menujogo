#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <windows.h>
#include <dos.h>


main(){
	
	int x=201,p=205,m=186,y=187,o=191,k=204,l=185,h=200,f=188,g=203,r=206,v=185,w=202;
	int opc;
	char name[100];
	while(true){
		printf("%c",x);
	
	for(int i =0;i<23;i++){
		printf("%c",p);
	}
	printf("%c",y);
	
		printf("\n%c\t",m);
			printf(" ESCAPE\t");
		printf("\t%c",m);
	
	printf("\n%c",k);
	
	for(int i =0;i<23;i++){
		printf("%c",p);
	}	
	printf("%c\n",l);
	

	printf("%c1 - JOGAR\t\t%c\n%c2 - NOVO JOGADOR\t%c\n%c3 - VER PONTUACAO\t%c\n%c4 - MANUAL\t\t%c\n%c5 - SAIR\t\t%c\n",m,m,m,m,m,m,m,m,m,m);
	printf("%c",h);
	for(int i =0;i<23;i++){
		printf("%c",p);
	}
	printf("%c\n",f);
	
	scanf("%d",&opc);
	system("cls");

	switch(opc){
		case 1:
			Beep(1000, 100);
			printf("Carregando...\n");
			system("pause");
			system("cls");
			break;
		case 2:
			printf("DIGITE SEU NOME:\n");
			scanf("%s",name);
			system("cls");
			Beep(1000, 100);
			printf("BEM VINDO, %s!\n",strupr(name));
			system("pause");
			system("cls");
			break;
		case 3:
			Beep(1000, 100);
			printf("%c",x);
			for(int i =0;i<23;i++){
		printf("%c",p);
		}
		
		printf("%c",g);
		for(int i =0;i<23;i++){
		printf("%c",p);
		}
		
		printf("%c",y);
		printf("\n%c\t",m);
		printf("JOGADOR");
		printf("\t\t%c\t",m);
		printf("PONTUACAO\t");
		printf("%c\t\t",m);
		printf("\n%c",k);
			
		for(int i =0;i<23;i++){
		printf("%c",p);
		}
		
		printf("%c",r);
		
		for(int i =0;i<23;i++){
		printf("%c",p);
		}
		
		printf("%c",v);
		printf("\n%c\t",m);
		printf("JOGADOR 1");
		printf("\t%c\t",m);
		printf("X pontos");
		printf("\t%c\t",m);
		printf("\n%c",k);
	
		for(int i =0;i<23;i++){
			printf("%c",p);
		}
		printf("%c",r);
		for(int i =0;i<23;i++){
			printf("%c",p);
		}
		printf("%c",v);
		printf("\n%c\t",m);
		printf("JOGADOR 2\t");
		printf("%c\t",m);
		printf("X PONTOS");
		printf("\t%c\t",m);
		printf("\n%c",h);
		
		for(int i =0;i<23;i++){
		printf("%c",p);
		}
		
		printf("%c",w);
		
		for(int i =0;i<23;i++){
		printf("%c",p);
		}
		
		printf("%c",f);
		printf("\n");
		system("pause");
		system("cls");
		break;
	case 4:
		Beep(1000, 100);
		printf("O caminho tera obstaculos como: buracos, agua, fogo ou monstros.\nA cada passo que voce se submeter nesses obstaculos ira causar a perda de pelo menos 10 porcento da sua porcentagem total de vida.\n");
		printf("Quanto maior o tempo de permanencia do jogo, maior sera sua pontuacao\nQuanto maior o tempo, ira aumentar o grau de velocidade e dificuldade.\n");
		system("pause");
		system("cls");
		break;
		case 5:
			system("exit");
		}
		if(opc==5){
			break;
		}
	}
	
		
}
