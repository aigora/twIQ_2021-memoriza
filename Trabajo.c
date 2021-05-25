# include<stdio.h>
# include<string.h>
#include <stdlib.h>     /* srand, rand */
#include <time.h>
#include<windows.h>

struct jugador {
	char nombre[50];
	char apellido[50];
	char apellido2[50];
	char matricula[10]; 
};

int main(){
	
	printf("    -------------------------------    \n");
	printf("    -------------------------------    \n");
	printf("    -----------MEMORIZA------------    \n");
	printf("    -------------------------------    \n");
	printf("    -------------------------------    \n");
	
	int temas=0;
	int login=0;
	int dificultad=0;


    struct jugador jugador[200];
    FILE*pfichero;
    int i=0,contador=1, njugador;
    char opcion;
    char buscamatricula[10];
    int jugador1;

   pfichero = fopen("UsuariosMemori.txt","r");
   
   if(pfichero==NULL){
         printf("Ha sucedido un error, por favor vuelva a abrir el programa\n");
         return 0;
         
    }while(fscanf(pfichero, "%s %s %s %d", jugador[contador].nombre, jugador[contador].apellido, jugador[contador].apellido2, &jugador[contador].matricula) != EOF){
      	
      	contador++;
      	njugador++;
	}
	
    fclose(pfichero);
	 
    printf("Bienvenido a este maravilloso juego.\n\n");
    
    do {
    	fflush(stdin);
    	printf("Si quiere iniciar sesion pulse A\n");
    	printf("Si quiere registrarse pulse B\n");
    	printf("Si quiere saber como se juega pulse C.\n");
    	printf("Si quiere salir del juego pulse D\n");
    	scanf("%c", &opcion);
    	
    	if( opcion == 'A'|| opcion == 'a') {
    		printf("Bienvenido de nuevo, identifiquese para iniciar sesion Jugador\n");
    		printf("Introduzca su numero de matricula\n");
    		fflush(stdin);
    		scanf("%d", &buscamatricula);
    	
    		for(i=1; i<=njugador; i++){
    			if(strcmp(jugador[i].matricula, buscamatricula) == 0){
    				printf("Bienvenido %s %s %s.\nDisfrute\n", jugador[i].nombre, jugador[i].apellido, jugador[i].apellido2);
    				i=jugador1;
    				break;
				}
			}
		}
		
		else if( opcion == 'B' || opcion == 'b'){
			pfichero=fopen("UsuariosMemori.txt", "a");
			printf("Bienvenido al juego memoriza, para poder jugar registrate\n\n");
			printf("Introduzca su nombre\n");
			fflush(stdin);
			scanf("%s", &jugador[njugador+1].nombre);
			fprintf(pfichero, "\n%s ", jugador[njugador+1].nombre);
			printf("Introduzca su primer apellido\n");
			fflush(stdin);
			scanf("%s", &jugador[njugador+1].apellido);
			fprintf(pfichero, "%s ", jugador[njugador+1].apellido);
			printf("Introduzca su segundo apellido\n");
			fflush(stdin);
			scanf("%s", &jugador[njugador+1].apellido2);
			fprintf(pfichero, "%s ", jugador[njugador+1].apellido2);
			printf("Introduzca su numero de matricula\n");
			fflush(stdin);
			scanf("%s", &jugador[njugador+1].matricula);
			fprintf(pfichero, "%s", jugador[njugador+1].matricula);
			njugador=njugador+1;
			jugador1=njugador;
			printf("¿Preparado para jugar? Buena suerte %s %s %s\n",jugador[jugador1].nombre, jugador[jugador1].apellido, jugador[jugador1].apellido2);
		
			
		}else if ( opcion == 'C' || opcion == 'c'){
			printf("En este juego, los jugadores deberan escoger una dificultad, y posteriormente apareceran numeros de\n ");
			printf("forma continua con el fin de que deba ir escribiendo dichos numeros en el orden indicado hasta que \n ");
			printf("lo introduzca de forma erronea momento en el que usted se ira al pozo, o por el contrario logre \n");
			printf("introducir correctamente los 10 numeros, entonces ganara.\n\n");
			
			break;
			
		}else if ( opcion == 'D' || opcion == 'd'){
			printf("¡Nos vemos pronto!\n");
			return 0;
		}	
		
    }while( opcion != 'A' && opcion != 'a' && opcion != 'B' && opcion != 'b' && opcion != 'C' && opcion != 'c' && opcion != 'D' && opcion != 'd');

	
	
	printf("A continuacion elegira la dificutad a la que deseara jugar.\n");
	printf("\n");
	
	printf("Opcion 1- Facil.\n");
	printf("Opcion 2- Medio.\n");
	printf("Opcion 3- Dificil.\n");
	scanf("%d", &dificultad);
	
	switch(dificultad){
	
	    case 1:
	    	printf("Has seleccionado la opcion facil, tratara de memorizar numeros de 1 cifra.\n");
	    	
	    	
            int n0, n1, n2, n3, n4, n5, n6, n7, n8, n9, n10, n11, n12, n13, n14, n15, n16, n17, n18, n19;

            srand (time(NULL));

            n0 = rand() % 10 + 1;
  
            printf("el primer valor es %d\n", n0);
  
            printf("Digame el valor del primer numero:\n");
            scanf("%d", &n1);
  
            if(n1==n0){
    	        printf("Correcto, continuemos;\n");
    	        printf("\n");
            }else{
    	        printf("Fallaste.\n");
    	        return 0;
            }
            
            system("cls");
    
			srand (time(NULL));
    
    		n2 = rand() % 10 + 1;
    
    		printf("el segundo valor es %d\n", n2);
    
    		printf("Digame el valor del primer numero:\n");
    		scanf("%d", &n1);
    
    		printf("Digame el valor del segundo numero:\n");
    		scanf("%d", &n3);
    
    		if((n1==n0)&&(n2==n3)){
    			printf("Correcto, continuemos;\n");
    			printf("\n");
    		}else{
    			printf("Fallaste, intentelo de nuevo");
    			return 0;
    		}
    		
    		system("cls");
    
    		srand (time(NULL));
     
			n4 = rand() % 10 + 1;
    
    		printf("el tercer valor es %d\n", n4);
    
    		printf("Digame el valor del primer numero:\n");
    		scanf("%d", &n1);
    		
    		printf("Digame el valor del segundo numero:\n");
    		scanf("%d", &n3);
    
    		printf("Digame el valor del tercer numero:\n");
    		scanf("%d", &n5);
    
    		if((n1==n0)&&(n2==n3)&&(n4==n5)){
    			printf("Correcto, continuemos;\n");
    			printf("\n");
   		 	}else{
    			printf("Fallaste, intentelo de nuevo");
    			return 0;
    		}
    		
    		system("cls");
  
    		srand (time(NULL));
     
			n6 = rand() % 10 + 1;
    
    		printf("el cuarto valor es %d\n", n6);
    
    		printf("Digame el valor del primer numero:\n");
    		scanf("%d", &n1);
    	
    		printf("Digame el valor del segundo numero:\n");
    		scanf("%d", &n3);
    
    		printf("Digame el valor del tercer numero:\n");
    		scanf("%d", &n5);
    
    		printf("Digame el valor del cuarto numero:\n");
    		scanf("%d", &n7);
    
    		if((n1==n0)&&(n2==n3)&&(n4==n5)&&(n6==n7)){
    			printf("Correcto, continuemos;\n");
    			printf("\n");
    		}else{
    			printf("Fallaste, intentelo de nuevo");
    			return 0;
    		}
    		
    		system("cls");
     
    		srand (time(NULL));
     
			n8 = rand() % 10 + 1;
    
    		printf("el quinto valor es %d\n", n8);
    
    		printf("Digame el valor del primer numero:\n");
    		scanf("%d", &n1);
    
    		printf("Digame el valor del segundo numero:\n");
    		scanf("%d", &n3);
    
    		printf("Digame el valor del tercer numero:\n");
    		scanf("%d", &n5);
    
    		printf("Digame el valor del cuarto numero:\n");
    		scanf("%d", &n7);
    
    		printf("Digame el valor del quinto numero:\n");
    		scanf("%d", &n9);
    
    		if((n1==n0)&&(n2==n3)&&(n4==n5)&&(n6==n7)&&(n8==n9)){
    			printf("Correcto, continuemos;\n");
    			printf("\n");
 		   	}else{
    			printf("Fallaste, intentelo de nuevo");
    			return 0;
    		}
    		
    		system("cls");
    
    		srand (time(NULL));
     
			n10 = rand() % 10 + 1;
    
    		printf("el sexto valor es %d\n", n10);
    
    		printf("Digame el valor del primer numero:\n");
    		scanf("%d", &n1);
    
    		printf("Digame el valor del segundo numero:\n");
    		scanf("%d", &n3);
    
    		printf("Digame el valor del tercer numero:\n");
    		scanf("%d", &n5);
    
    		printf("Digame el valor del cuarto numero:\n");
   			scanf("%d", &n7);
    	
    		printf("Digame el valor del quinto numero:\n");
    		scanf("%d", &n9);
    
    		printf("Digame el valor del sexto numero:\n");
    		scanf("%d", &n11);
    
    		if((n1==n0)&&(n2==n3)&&(n4==n5)&&(n6==n7)&&(n8==n9)&&(n10==n11)){
    			printf("Correcto, continuemos;\n");
    			printf("\n");
    		}else{
    			printf("Fallaste, intentelo de nuevo");
    			return 0;
    		}
    		
    		system("cls");
    		
    		srand (time(NULL));
     
			n12 = rand() % 10 + 1;
    
    		printf("el septimo valor es %d\n", n12);
    
    		printf("Digame el valor del primer numero:\n");
    		scanf("%d", &n1);
    
    		printf("Digame el valor del segundo numero:\n");
    		scanf("%d", &n3);
    
    		printf("Digame el valor del tercer numero:\n");
    		scanf("%d", &n5);
    
    		printf("Digame el valor del cuarto numero:\n");
   			scanf("%d", &n7);
    	
    		printf("Digame el valor del quinto numero:\n");
    		scanf("%d", &n9);
    
    		printf("Digame el valor del sexto numero:\n");
    		scanf("%d", &n11);
    		
    		printf("Digame el valor del septimo numero:\n");
    		scanf("%d", &n13);
    
    		if((n1==n0)&&(n2==n3)&&(n4==n5)&&(n6==n7)&&(n8==n9)&&(n10==n11)&&(n12=n13)){
    			printf("Correcto, continuemos;\n");
    			printf("\n");
    		}else{
    			printf("Fallaste, intentelo de nuevo");
    			return 0;
    		}
    		
    		system("cls");
    		
    		srand (time(NULL));
     
			n14 = rand() % 10 + 1;
    
    		printf("el septimo valor es %d\n", n14);
    
    		printf("Digame el valor del primer numero:\n");
    		scanf("%d", &n1);
    
    		printf("Digame el valor del segundo numero:\n");
    		scanf("%d", &n3);
    
    		printf("Digame el valor del tercer numero:\n");
    		scanf("%d", &n5);
    
    		printf("Digame el valor del cuarto numero:\n");
   			scanf("%d", &n7);
    	
    		printf("Digame el valor del quinto numero:\n");
    		scanf("%d", &n9);
    
    		printf("Digame el valor del sexto numero:\n");
    		scanf("%d", &n11);
    		
    		printf("Digame el valor del septimo numero:\n");
    		scanf("%d", &n13);
    		
    		printf("Digame el valor del octavo numero:\n");
    		scanf("%d", &n15);
    
    		if((n1==n0)&&(n2==n3)&&(n4==n5)&&(n6==n7)&&(n8==n9)&&(n10==n11)&&(n12==n13)&&(n14==n15)){
    			printf("Correcto, continuemos;\n");
    			printf("\n");
    		}else{
    			printf("Fallaste, intentelo de nuevo");
    			
    		}
    		
    		system("cls");
    		
    		srand (time(NULL));
     
			n16 = rand() % 10 + 1;
    
    		printf("el septimo valor es %d\n", n16);
    
    		printf("Digame el valor del primer numero:\n");
    		scanf("%d", &n1);
    
    		printf("Digame el valor del segundo numero:\n");
    		scanf("%d", &n3);
    
    		printf("Digame el valor del tercer numero:\n");
    		scanf("%d", &n5);
    
    		printf("Digame el valor del cuarto numero:\n");
   			scanf("%d", &n7);
    	
    		printf("Digame el valor del quinto numero:\n");
    		scanf("%d", &n9);
    
    		printf("Digame el valor del sexto numero:\n");
    		scanf("%d", &n11);
    		
    		printf("Digame el valor del septimo numero:\n");
    		scanf("%d", &n13);
    		
    		printf("Digame el valor del octavo numero:\n");
    		scanf("%d", &n15);
    		
    		printf("Digame el valor del noveno numero:\n");
    		scanf("%d", &n17);
    
    		if((n1==n0)&&(n2==n3)&&(n4==n5)&&(n6==n7)&&(n8==n9)&&(n10==n11)&&(n12==n13)&&(n14==n15)&&(n16==n17)){
    			printf("Correcto, continuemos;\n");
    			printf("\n");
    		}else{
    			printf("Fallaste, intentelo de nuevo");
    			return 0;
    		}
    		
    		system("cls");
    		
    		srand (time(NULL));
     
			n18 = rand() % 10 + 1;
    
    		printf("el septimo valor es %d\n", n18);
    
    		printf("Digame el valor del primer numero:\n");
    		scanf("%d", &n1);
    
    		printf("Digame el valor del segundo numero:\n");
    		scanf("%d", &n3);
    
    		printf("Digame el valor del tercer numero:\n");
    		scanf("%d", &n5);
    
    		printf("Digame el valor del cuarto numero:\n");
   			scanf("%d", &n7);
    	
    		printf("Digame el valor del quinto numero:\n");
    		scanf("%d", &n9);
    
    		printf("Digame el valor del sexto numero:\n");
    		scanf("%d", &n11);
    		
    		printf("Digame el valor del septimo numero:\n");
    		scanf("%d", &n13);
    		
    		printf("Digame el valor del octavo numero:\n");
    		scanf("%d", &n15);
    		
    		printf("Digame el valor del noveno numero:\n");
    		scanf("%d", &n17);
    		
    		printf("Digame el valor del decimo numero:\n");
    		scanf("%d", &n19);
    
    		if((n1==n0)&&(n2==n3)&&(n4==n5)&&(n6==n7)&&(n8==n9)&&(n10==n11)&&(n12==n13)&&(n14==n15)&&(n16==n17)&&(n18==n19)){
    			printf("No esta mal, intente el nivel medio a ver si eres capaz.\n");
    			printf("\n");
    		}else{
    			printf("Fallaste, intentelo de nuevo");	
    		}
    		
        
  		return 0;
	    	
	    
	    
	    case 2:
	    	printf("Has seleccionado la opcion intermedia, tratara de memorizar numeros de 2 cifras.\n");
	    	 
	    	int n20, n21, n22, n23, n24, n25, n26, n27, n28, n29, n30, n31, n32, n33, n34, n35, n36, n37, n38, n39;

            srand (time(NULL));

            n20 = rand() % 100 + 1;
  
            printf("el primer valor es %d\n", n20);
  
            printf("Digame el valor del primer numero:\n");
            scanf("%d", &n1);
  
            if(n21==n20){
    	        printf("Correcto, continuemos;\n");
    	        printf("\n");
            }else{
    	        printf("Fallaste");
    	    return 0;
            }
            
            system("cls");
    
			srand (time(NULL));
    
    		n22 = rand() % 100 + 1;
    
    		printf("el segundo valor es %d\n", n22);
    
    		printf("Digame el valor del primer numero:\n");
    		scanf("%d", &n21);
    
    		printf("Digame el valor del segundo numero:\n");
    		scanf("%d", &n23);
    
    		if((n21==n20)&&(n22==n23)){
    			printf("Correcto, continuemos;\n");
    			printf("\n");
    		}else{
    			printf("Fallaste, intentelo de nuevo");
    			return 0;
    		}
    		
    		system("cls");
    
    		srand (time(NULL));
     
			n24 = rand() % 100 + 1;
    
    		printf("el tercer valor es %d\n", n24);
    
    		printf("Digame el valor del primer numero:\n");
    		scanf("%d", &n21);
    		
    		printf("Digame el valor del segundo numero:\n");
    		scanf("%d", &n23);
    
    		printf("Digame el valor del tercer numero:\n");
    		scanf("%d", &n25);
    
    		if((n21==n20)&&(n22==n23)&&(n24==n25)){
    			printf("Correcto, continuemos;\n");
    			printf("\n");
   		 	}else{
    			printf("Fallaste, intentelo de nuevo");
    			return 0;
    		}
    		
    		system("cls");
  
    		srand (time(NULL));
     
			n26 = rand() % 100 + 1;
    
    		printf("el cuarto valor es %d\n", n26);
    
    		printf("Digame el valor del primer numero:\n");
    		scanf("%d", &n21);
    	
    		printf("Digame el valor del segundo numero:\n");
    		scanf("%d", &n23);
    
    		printf("Digame el valor del tercer numero:\n");
    		scanf("%d", &n25);
    
    		printf("Digame el valor del cuarto numero:\n");
    		scanf("%d", &n27);
    
    		if((n21==n20)&&(n22==n23)&&(n24==n25)&&(n26==n27)){
    			printf("Correcto, continuemos;\n");
    			printf("\n");
    		}else{
    			printf("Fallaste, intentelo de nuevo");
    			return 0;
    		}
    		
    		system("cls");
     
    		srand (time(NULL));
     
			n28 = rand() % 100 + 1;
    
    		printf("el quinto valor es %d\n", n28);
    
    		printf("Digame el valor del primer numero:\n");
    		scanf("%d", &n21);
    
    		printf("Digame el valor del segundo numero:\n");
    		scanf("%d", &n23);
    
    		printf("Digame el valor del tercer numero:\n");
    		scanf("%d", &n25);
    
    		printf("Digame el valor del cuarto numero:\n");
    		scanf("%d", &n27);
    
    		printf("Digame el valor del quinto numero:\n");
    		scanf("%d", &n29);
    
    		if((n21==n20)&&(n22==n23)&&(n24==n25)&&(n26==n27)&&(n28==n29)){
    			printf("Correcto, continuemos;\n");
    			printf("\n");
 		   	}else{
    			printf("Fallaste, intentelo de nuevo");
    			return 0;
    		}
    		
    		system("cls");
    
    		srand (time(NULL));
     
			n30 = rand() % 100 + 1;
    
    		printf("el sexto valor es %d\n", n30);
    
    		printf("Digame el valor del primer numero:\n");
    		scanf("%d", &n21);
    
    		printf("Digame el valor del segundo numero:\n");
    		scanf("%d", &n23);
    
    		printf("Digame el valor del tercer numero:\n");
    		scanf("%d", &n25);
    
    		printf("Digame el valor del cuarto numero:\n");
   			scanf("%d", &n27);
    	
    		printf("Digame el valor del quinto numero:\n");
    		scanf("%d", &n29);
    
    		printf("Digame el valor del sexto numero:\n");
    		scanf("%d", &n31);
    
    		if((n21==n20)&&(n22==n23)&&(n24==n25)&&(n26==n27)&&(n28==n29)&&(n30==n31)){
    			printf("Correcto, continuemos;\n");
    			printf("\n");
    		}else{
    			printf("Fallaste, intentelo de nuevo");
    			return 0;
    		}
    		
    		system("cls");
    		
    		srand (time(NULL));
     
			n32 = rand() % 100 + 1;
    
    		printf("el septimo valor es %d\n", n32);
    
    		printf("Digame el valor del primer numero:\n");
    		scanf("%d", &n21);
    
    		printf("Digame el valor del segundo numero:\n");
    		scanf("%d", &n23);
    
    		printf("Digame el valor del tercer numero:\n");
    		scanf("%d", &n25);
    
    		printf("Digame el valor del cuarto numero:\n");
   			scanf("%d", &n27);
    	
    		printf("Digame el valor del quinto numero:\n");
    		scanf("%d", &n29);
    
    		printf("Digame el valor del sexto numero:\n");
    		scanf("%d", &n31);
    		
    		printf("Digame el valor del septimo numero:\n");
    		scanf("%d", &n33);
    
    		if((n21==n20)&&(n22==n23)&&(n24==n25)&&(n26==n27)&&(n28==n29)&&(n30==n31)&&(n32=n33)){
    			printf("Correcto, continuemos;\n");
    			printf("\n");
    		}else{
    			printf("Fallaste, intentelo de nuevo");
    			return 0;
    		}
    		
    		system("cls");
    		
    		srand (time(NULL));
     
			n34 = rand() % 100 + 1;
    
    		printf("el septimo valor es %d\n", n34);
    
    		printf("Digame el valor del primer numero:\n");
    		scanf("%d", &n21);
    
    		printf("Digame el valor del segundo numero:\n");
    		scanf("%d", &n23);
    
    		printf("Digame el valor del tercer numero:\n");
    		scanf("%d", &n25);
    
    		printf("Digame el valor del cuarto numero:\n");
   			scanf("%d", &n27);
    	
    		printf("Digame el valor del quinto numero:\n");
    		scanf("%d", &n29);
    
    		printf("Digame el valor del sexto numero:\n");
    		scanf("%d", &n31);
    		
    		printf("Digame el valor del septimo numero:\n");
    		scanf("%d", &n33);
    		
    		printf("Digame el valor del octavo numero:\n");
    		scanf("%d", &n35);
    
    		if((n21==n20)&&(n22==n23)&&(n24==n25)&&(n26==n27)&&(n28==n29)&&(n30==n31)&&(n32==n33)&&(n34==n35)){
    			printf("Correcto, continuemos;\n");
    			printf("\n");
    		}else{
    			printf("Fallaste, intentelo de nuevo");
    			return 0;
    		}
    		
    		system("cls");
    		
    		srand (time(NULL));
     
			n36 = rand() % 100 + 1;
    
    		printf("el septimo valor es %d\n", n36);
    
    		printf("Digame el valor del primer numero:\n");
    		scanf("%d", &n21);
    
    		printf("Digame el valor del segundo numero:\n");
    		scanf("%d", &n23);
    
    		printf("Digame el valor del tercer numero:\n");
    		scanf("%d", &n25);
    
    		printf("Digame el valor del cuarto numero:\n");
   			scanf("%d", &n27);
    	
    		printf("Digame el valor del quinto numero:\n");
    		scanf("%d", &n29);
    
    		printf("Digame el valor del sexto numero:\n");
    		scanf("%d", &n31);
    		
    		printf("Digame el valor del septimo numero:\n");
    		scanf("%d", &n33);
    		
    		printf("Digame el valor del octavo numero:\n");
    		scanf("%d", &n35);
    		
    		printf("Digame el valor del noveno numero:\n");
    		scanf("%d", &n37);
    
    		if((n21==n20)&&(n22==n23)&&(n24==n25)&&(n26==n27)&&(n28==n29)&&(n30==n31)&&(n32==n33)&&(n34==n35)&&(n36==n37)){
    			printf("Correcto, continuemos;\n");
    			printf("\n");
    		}else{
    			printf("Fallaste, intentelo de nuevo");
    			return 0;
    		}
    		
    		system("cls");
    		
    		srand (time(NULL));
     
			n38 = rand() % 100 + 1;
    
    		printf("el septimo valor es %d\n", n38);
    
    		printf("Digame el valor del primer numero:\n");
    		scanf("%d", &n21);
    
    		printf("Digame el valor del segundo numero:\n");
    		scanf("%d", &n23);
    
    		printf("Digame el valor del tercer numero:\n");
    		scanf("%d", &n25);
    
    		printf("Digame el valor del cuarto numero:\n");
   			scanf("%d", &n27);
    	
    		printf("Digame el valor del quinto numero:\n");
    		scanf("%d", &n29);
    
    		printf("Digame el valor del sexto numero:\n");
    		scanf("%d", &n31);
    		
    		printf("Digame el valor del septimo numero:\n");
    		scanf("%d", &n33);
    		
    		printf("Digame el valor del octavo numero:\n");
    		scanf("%d", &n35);
    		
    		printf("Digame el valor del noveno numero:\n");
    		scanf("%d", &n37);
    		
    		printf("Digame el valor del decimo numero:\n");
    		scanf("%d", &n39);
    		
    		if((n21==n20)&&(n22==n23)&&(n24==n25)&&(n26==n27)&&(n28==n29)&&(n30==n31)&&(n32==n33)&&(n34==n35)&&(n36==n37)&&(n38==n39)){
    			printf("Enhorabuena, si se te ha hecho a poco intente el nivel dificil.\n");
    			printf("\n");
    		}else{
    			printf("Fallaste, intentelo de nuevo");
    			fflush(stdin);
				return 0;
    		}
    		
    		system("cls");
        

  		return 0;
    
	    	
	    	break;
	    	
	    case 3:
	    	printf("Has seleccionado la opcion dificil, tratara de memorizar numero de 3 cifras.\n");
	        
	        int n40, n41, n42, n43, n44, n45, n46, n47, n48, n49, n50, n51, n52, n53, n54, n55, n56, n57, n58, n59;

            srand (time(NULL));

            n40 = rand() % 1000 + 1;
  
            printf("el primer valor es %d\n", n40);
  
            printf("Digame el valor del primer numero:\n");
            scanf("%d", &n41);
  
            if(n41==n40){
    	        printf("Correcto, continuemos;\n");
    	        printf("\n");
            }else{
    	        printf("Fallaste, intentelo de nuevo");
    	    return 0;
            }
            
            system("cls");
    
			srand (time(NULL));
    
    		n42 = rand() % 1000 + 1;
    
    		printf("el segundo valor es %d\n", n42);
    
    		printf("Digame el valor del primer numero:\n");
    		scanf("%d", &n41);
    
    		printf("Digame el valor del segundo numero:\n");
    		scanf("%d", &n43);
    
    		if((n41==n40)&&(n42==n43)){
    			printf("Correcto, continuemos;\n");
    			printf("\n");
    		}else{
    			printf("Fallaste, intentelo de nuevo");
    			return 0;
    		}
    		
    		system("cls");
    
    		srand (time(NULL));
     
			n44 = rand() % 1000 + 1;
    
    		printf("el tercer valor es %d\n", n44);
    
    		printf("Digame el valor del primer numero:\n");
    		scanf("%d", &n41);
    		
    		printf("Digame el valor del segundo numero:\n");
    		scanf("%d", &n43);
    
    		printf("Digame el valor del tercer numero:\n");
    		scanf("%d", &n45);
    
    		if((n41==n40)&&(n42==n43)&&(n44==n45)){
    			printf("Correcto, continuemos;\n");
    			printf("\n");
   		 	}else{
    			printf("Fallaste, intentelo de nuevo");
    			return 0;
    		}
    		
    		system("cls");
  
    		srand (time(NULL));
     
			n46 = rand() % 1000 + 1;
    
    		printf("el cuarto valor es %d\n", n46);
    
    		printf("Digame el valor del primer numero:\n");
    		scanf("%d", &n41);
    	
    		printf("Digame el valor del segundo numero:\n");
    		scanf("%d", &n43);
    
    		printf("Digame el valor del tercer numero:\n");
    		scanf("%d", &n45);
    
    		printf("Digame el valor del cuarto numero:\n");
    		scanf("%d", &n47);
    
    		if((n41==n40)&&(n42==n43)&&(n44==n45)&&(n46==n47)){
    			printf("Correcto, continuemos;\n");
    			printf("\n");
    		}else{
    			printf("Fallaste, intentelo de nuevo");
    			return 0;
    		}
    		
    		system("cls");
     
    		srand (time(NULL));
     
			n48 = rand() % 1000 + 1;
    
    		printf("el quinto valor es %d\n", n48);
    
    		printf("Digame el valor del primer numero:\n");
    		scanf("%d", &n41);
    
    		printf("Digame el valor del segundo numero:\n");
    		scanf("%d", &n43);
    
    		printf("Digame el valor del tercer numero:\n");
    		scanf("%d", &n45);
    
    		printf("Digame el valor del cuarto numero:\n");
    		scanf("%d", &n47);
    
    		printf("Digame el valor del quinto numero:\n");
    		scanf("%d", &n49);
    
    		if((n41==n40)&&(n42==n43)&&(n44==n45)&&(n46==n47)&&(n48==n49)){
    			printf("Correcto, continuemos;\n");
    			printf("\n");
 		   	}else{
    			printf("Fallaste, intentelo de nuevo");
    			return 0;
    		}
    		
    		system("cls");
    
    		srand (time(NULL));
     
			n50 = rand() % 1000 + 1;
    
    		printf("el sexto valor es %d\n", n50);
    
    		printf("Digame el valor del primer numero:\n");
    		scanf("%d", &n41);
    
    		printf("Digame el valor del segundo numero:\n");
    		scanf("%d", &n43);
    
    		printf("Digame el valor del tercer numero:\n");
    		scanf("%d", &n45);
    
    		printf("Digame el valor del cuarto numero:\n");
   			scanf("%d", &n47);
    	
    		printf("Digame el valor del quinto numero:\n");
    		scanf("%d", &n49);
    
    		printf("Digame el valor del sexto numero:\n");
    		scanf("%d", &n51);
    
    		if((n41==n40)&&(n42==n43)&&(n44==n45)&&(n46==n47)&&(n48==n49)&&(n50==n51)){
    			printf("Correcto, continuemos;\n");
    			printf("\n");
    		}else{
    			printf("Fallaste, intentelo de nuevo");
    			return 0;
    		}
    		
    		system("cls");
    		
    		srand (time(NULL));
     
			n52 = rand() % 1000 + 1;
    
    		printf("el septimo valor es %d\n", n52);
    
    		printf("Digame el valor del primer numero:\n");
    		scanf("%d", &n41);
    
    		printf("Digame el valor del segundo numero:\n");
    		scanf("%d", &n43);
    
    		printf("Digame el valor del tercer numero:\n");
    		scanf("%d", &n45);
    
    		printf("Digame el valor del cuarto numero:\n");
   			scanf("%d", &n47);
    	
    		printf("Digame el valor del quinto numero:\n");
    		scanf("%d", &n49);
    
    		printf("Digame el valor del sexto numero:\n");
    		scanf("%d", &n51);
    		
    		printf("Digame el valor del septimo numero:\n");
    		scanf("%d", &n53);
    
    		if((n41==n40)&&(n42==n43)&&(n44==n45)&&(n46==n47)&&(n48==n49)&&(n50==n51)&&(n52=n53)){
    			printf("Correcto, continuemos;\n");
    			printf("\n");
    		}else{
    			printf("Fallaste, intentelo de nuevo");
    			return 0;
    		}
    		
    		system("cls");
    		
    		srand (time(NULL));
     
			n54 = rand() % 1000 + 1;
    
    		printf("el septimo valor es %d\n", n54);
    
    		printf("Digame el valor del primer numero:\n");
    		scanf("%d", &n41);
    
    		printf("Digame el valor del segundo numero:\n");
    		scanf("%d", &n43);
    
    		printf("Digame el valor del tercer numero:\n");
    		scanf("%d", &n45);
    
    		printf("Digame el valor del cuarto numero:\n");
   			scanf("%d", &n47);
    	
    		printf("Digame el valor del quinto numero:\n");
    		scanf("%d", &n49);
    
    		printf("Digame el valor del sexto numero:\n");
    		scanf("%d", &n51);
    		
    		printf("Digame el valor del septimo numero:\n");
    		scanf("%d", &n53);
    		
    		printf("Digame el valor del octavo numero:\n");
    		scanf("%d", &n55);
    
    		if((n41==n40)&&(n42==n43)&&(n44==n45)&&(n46==n47)&&(n48==n49)&&(n50==n51)&&(n52==n53)&&(n54==n55)){
    			printf("Correcto, continuemos;\n");
    			printf("\n");
    		}else{
    			printf("Fallaste, intentelo de nuevo");
    			return 0;
    		}
    		
    		system("cls");
    		
    		srand (time(NULL));
     
			n56 = rand() % 1000 + 1;
    
    		printf("el septimo valor es %d\n", n56);
    
    		printf("Digame el valor del primer numero:\n");
    		scanf("%d", &n41);
    
    		printf("Digame el valor del segundo numero:\n");
    		scanf("%d", &n43);
    
    		printf("Digame el valor del tercer numero:\n");
    		scanf("%d", &n45);
    
    		printf("Digame el valor del cuarto numero:\n");
   			scanf("%d", &n47);
    	
    		printf("Digame el valor del quinto numero:\n");
    		scanf("%d", &n49);
    
    		printf("Digame el valor del sexto numero:\n");
    		scanf("%d", &n51);
    		
    		printf("Digame el valor del septimo numero:\n");
    		scanf("%d", &n53);
    		
    		printf("Digame el valor del octavo numero:\n");
    		scanf("%d", &n55);
    		
    		printf("Digame el valor del noveno numero:\n");
    		scanf("%d", &n57);
    
    		if((n41==n40)&&(n42==n43)&&(n44==n45)&&(n46==n47)&&(n48==n49)&&(n50==n51)&&(n52==n53)&&(n54==n55)&&(n56==n57)){
    			printf("Correcto, continuemos;\n");
    			printf("\n");
    		}else{
    			printf("Fallaste, intentelo de nuevo");
    			return 0;
    		}
    		
    		system("cls");
    		
    		srand (time(NULL));
     
			n58 = rand() % 1000 + 1;
    
    		printf("el septimo valor es %d\n", n58);
    
    		printf("Digame el valor del primer numero:\n");
    		scanf("%d", &n41);
    
    		printf("Digame el valor del segundo numero:\n");
    		scanf("%d", &n43);
    
    		printf("Digame el valor del tercer numero:\n");
    		scanf("%d", &n45);
    
    		printf("Digame el valor del cuarto numero:\n");
   			scanf("%d", &n47);
    	
    		printf("Digame el valor del quinto numero:\n");
    		scanf("%d", &n49);
    
    		printf("Digame el valor del sexto numero:\n");
    		scanf("%d", &n51);
    		
    		printf("Digame el valor del septimo numero:\n");
    		scanf("%d", &n53);
    		
    		printf("Digame el valor del octavo numero:\n");
    		scanf("%d", &n55);
    		
    		printf("Digame el valor del noveno numero:\n");
    		scanf("%d", &n57);
    		
    		printf("Digame el valor del decimo numero:\n");
    		scanf("%d", &n59);
    
    		if((n41==n40)&&(n42==n43)&&(n44==n45)&&(n46==n47)&&(n48==n49)&&(n50==n51)&&(n52==n53)&&(n54==n55)&&(n56==n57)&&(n58==n59)){
    			printf("Es usted un maquina, ya no hay mas niveles, pero enorgullecete de tu logro.\n");
    			printf("\n");
    		}else{
    			printf("Fallaste, intentelo de nuevo");
    			return 0;
    		}
    		
    		system("cls");
        

  		return 0;
	    
	        break;
    }
	    
    
}

