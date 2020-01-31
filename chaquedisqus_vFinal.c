#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
char mapa [31][31];
void printm(int ir,int jc);
int k;
int p;


int main()
{
	char a;
 do{
	system ("cls");
	printf("**Welcome to: COMO HACER QUE UN ESTUDIANTE DE ING. SE QUIERA SUICIDAR**\n");
	printf("1. Jugar\n");
	printf("2. Controles\n");
	printf("3. Creditos\n");
	printf("4. Salir\n");
	printf("Elija una opcion (1-4): ");
	
 
	
	a=getch();
	switch(a){
		
	//system ("cls");
	
		case'1':
			fflush(stdin);
fflush(stdin);

 int j;
 int i;
 int c,x=1;
 int t,v=3;

 char a;
 FILE *archivo;



 archivo=fopen("mat5x5.txt","r"); 


 if(archivo==NULL){
	printf("error al abrir el archivo");
	getch();
	exit(1);
 } 




 for(i=0;i<31;i++){
	for(j=0;j<31;j++){
		c=fgetc(archivo);
 	//printf("%c",c);
 	mapa[i][j]=c;
	}
 }//Llena la matriz mapa con el fichero de texto
        
        
        mapa[0][0]='*';
        printm(i,j);
        
       
    do{
       	
       	
	if(x==1){
		printf("Vida:%d\n\n",v);
       }
       x=0;
       	 
       	a=getch();
	    switch(a){
        	
        	case's':
        		if(mapa[k+1][p]=='_'){
        			goto inicio_1;
				}
				else if(mapa[k+1][p]=='.'){
					goto fin;
				}
        		if(mapa[k+1][p]!=' '){
        			break;
				}
			
				
        		k++;
        		
        		system("cls");
        		mapa[k-1][p]='0';
        		printm(k,p);
        		x=1;
        		break;
        	
        	case 'w':
        		if(mapa[k-1][p]=='_'){
        			goto inicio_1;
				}
				else if(mapa[k+1][p]=='.'){
					goto fin;
				}
        		if(mapa[k-1][p]!=' '){
        			break;
				}
        		k--;
        		
        		system("cls");
        		mapa[k+1][p]='0';
        		
        		printm(k,p);
        		x=1;
        		break;
        		
        	case 'd':
        		if(mapa[k][p+1]=='_'){
        			goto inicio_1;
				}
        		else if(mapa[k][p+1]!=' '){
        			break;
				}
        		p++;
        		system("cls");
        		mapa[k][p-1]='0';
        		printm(k,p);
        		x=1;
        		break;
        		
        		
        	case 'a':
        		if(mapa[k][p-1]=='_'){
        			goto inicio_1;
				}
        		if(mapa[k][p-1]!=' '){
        			break;
				}
        		p--;
        		system("cls");
        		mapa[k][p+1]='0';
        		printm(k,p);
        		x=1;	
        		break;
        		
        	inicio_1:{
        	system("cls");
        	printf("*-*-*-*PERDISTE UNA VIDA*-*-*-*\n\n\n");
        	system("pause");
        	system("cls");
        	x=1;
        	printm(i,j);
        	v=v-1;
			}
		}
   }while(a!='p'&&v>=1);
    fflush(stdin);
	
	system ("cls");
	printf("-----------------PERDEDOR-----------------");
	getch();
	
	if(v>=3){
	    fin:
		system("cls");
		printf("Ganaste We ALV\n");
	    system("pause");
	}
			
			break;
		
		case'2':
			//system ("cls");
			printf("\n\n1.-Arriba=w\n");
			printf("2.-Abajo=s\n");
			printf("3.-Izquierda=a\n");
			printf("4.-Derecha=d\n");
			printf("5.-Barrera=%c\n",219);
			printf("6.-Minas=_\n");
			printf("7.-Meta=.\n");
			getch();
			break;
			
		case'3':
			//system ("cls");
			printf("\n\nAgradecemos formalmente a todos aquellos que nos vieron sufrir llorar y hasta desmayarnos\ntambien queremos agradecer a nuestros familiares por aguantar nuestros berrinches y al comedor\nque nos estuvo alimentando durante este proyecto.\n");
			printf("Desarrolladores:\n");
			printf("Set Arnulfo Salcedo Hernández\n");
			printf("E. Alejandro Guerra Casillas\n");
			printf("Carlos Gracia de la O\n");
			printf("Lisset Lopez Solis\n");
			printf("\n\nThanks for being my compass and my sea.");
			getch();
			break;
			
	}
	
 }while(a!='4');
	return 0;
}



void printm(int ir,int jc)//imprime el mapa con movimiento (función de movimiento)
{
	int k;
	int p;
	mapa[ir][jc]='*';

	for(k=0;k<31;k++)
	{
		for(p=0;p<31;p++)
		{
			if(mapa[k][p]=='0')
			{
				mapa[k][p]=' ';
			}
			if(mapa[k][p]=='1')
			{
				mapa[k][p]=219;
			}
			if(mapa[k][p]=='2')
			{
				mapa[k][p]='_';	
			}
			if(mapa[k][p]=='5')
			{
				mapa[k][p]='.';	
			}
			
			printf("%c",mapa[k][p]);
		}
	}
}

