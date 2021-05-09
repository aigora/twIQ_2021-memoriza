# include<stdio.h>
# include<string.h>
#include <stdlib.h>     /* srand, rand */
#include <time.h>

int main(){
	
	printf("    -------------------------------    \n");
	printf("    -------------------------------    \n");
	printf("    -----------MEMORIZA------------    \n");
	printf("    -------------------------------    \n");
	printf("    -------------------------------    \n");
	
	int opcion=0;
	int temas=0;
	int login=0;
	int nombre[100], primerapellido[100], segundoapellido[100], usuario[100], matricula;
	
	
	printf("Bienvenido al juego de memoriza, donde usted podra poner a prueba su capacidad para retener informacion.\n");
	printf("\n");

	printf("Elija una opcion para continuar.\n");
	printf("   1-Registrarse.\n");
        printf("   2-Iniciar sesion.\n");
        printf("   3-Como se juega.\n");
	printf("   4-Salir.\n");
	scanf("%d", &login);
	

	
	switch(login){
		
		case 1:
			printf ("Registrarse. \n");
			printf ("nombre del jugador \n");
			scanf ("%s", &nombre[100]);
			
			printf("Primer apellido:\n");
		        scanf("%s", &primerapellido);
			
			printf("Segundo apellido:\n");
            scanf("%s", &segundoapellido);
		
			printf("Numero de matricula (que sera su contraseña): \n");
		        scanf("%d", &matricula);
		    
		        printf( "Nombre de usuario:\n");
		    	scanf("%s", &usuario);
		    
			break;
			
		case 2:
			printf ("Iniciar sesion. \n");
			printf("Introduce el nombre de usuario:\n");
			scanf("%s", &usuario);
			    
			printf("Introduce la contrasenya:\n");
			scanf("%s", &matricula);
			
			break;
			
		case 3:
			printf("En este juego, los jugadores deberan escoger el tema a tratar, y posteriormente apareceran palabras de\n ");
			printf("forma continua con el fin de que deba ir escribiendo dichas palabras en el orden indicado hasta que \n ");
			printf("lo introduzca de forma erronea momento en el que usted se ira al pozo.\n");
			
			break;
			
		case 4:
			printf("Con esta opcion regresara al comienzo del programa\n");
			
		    	break;
	}
	
	
	printf("A continuacion elegira la dificutad a la que deseará jugar.\n");
	printf("\n");
	
	printf("Opcion 1- Facil.\n");
	printf("Opcion 2- Medio.\n");
	printf("Opcion 3- Dificil.\n");
	scanf("%d", &opcion);
	
	switch(opcion){
	
	    case 1:
	    	printf("Has seleccionado la opcion facil, al parecer porque eres un maquina que no quiere fliparse delante de sus amigos.\n");
	    	
	    	
            int n0, n1, n2, n3, n4, n5, n6, n7, n8, n9, n10, n11;

            srand (time(NULL));

            n0 = rand() % 10 + 1;
  
            printf("el primer valor es %d\n", n0);
  
            printf("Digame el valor del primer numero:\n");
            scanf("%d", &n1);
  
            if(n1==n0){
    	        printf("Correcto, continuemos;\n");
    	        printf("\n");
            }else{
    	        printf("Fallaste, intentelo de nuevo");
    	    return 0;
            }
    
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
    
    		srand (time(NULL));
     
			n4 = rand() % 10 + 1;
    
    		printf("el tercer valor es %d\n", n4);
    
    		printf("Digame el valor del primer numero:\n");
    		scanf("%d", &n1);
    		
    		printf("Digame el valor del segundo numero:\n");
    		scanf("%d", &n3);
    
    		printf("Digame el valor del segundo numero:\n");
    		scanf("%d", &n5);
    
    		if((n1==n0)&&(n2==n3)&&(n4==n5)){
    			printf("Correcto, continuemos;\n");
    			printf("\n");
   		 	}else{
    			printf("Fallaste, intentelo de nuevo");
    			return 0;
    		}
  
    		srand (time(NULL));
     
			n6 = rand() % 10 + 1;
    
    		printf("el tercer valor es %d\n", n6);
    
    		printf("Digame el valor del primer numero:\n");
    		scanf("%d", &n1);
    	
    		printf("Digame el valor del segundo numero:\n");
    		scanf("%d", &n3);
    
    		printf("Digame el valor del segundo numero:\n");
    		scanf("%d", &n5);
    
    		printf("Digame el valor del segundo numero:\n");
    		scanf("%d", &n7);
    
    		if((n1==n0)&&(n2==n3)&&(n4==n5)&&(n6==n7)){
    			printf("Correcto, continuemos;\n");
    			printf("\n");
    		}else{
    			printf("Fallaste, intentelo de nuevo");
    			return 0;
    		}
     
    		srand (time(NULL));
     
			n8 = rand() % 10 + 1;
    
    		printf("el tercer valor es %d\n", n8);
    
    		printf("Digame el valor del primer numero:\n");
    		scanf("%d", &n1);
    
    		printf("Digame el valor del segundo numero:\n");
    		scanf("%d", &n3);
    
    		printf("Digame el valor del segundo numero:\n");
    		scanf("%d", &n5);
    
    		printf("Digame el valor del segundo numero:\n");
    		scanf("%d", &n7);
    
    		printf("Digame el valor del segundo numero:\n");
    		scanf("%d", &n9);
    
    		if((n1==n0)&&(n2==n3)&&(n4==n5)&&(n6==n7)&&(n8==n9)){
    			printf("Correcto, continuemos;\n");
    			printf("\n");
 		   	}else{
    			printf("Fallaste, intentelo de nuevo");
    			return 0;
    		}
    
    		srand (time(NULL));
     
			n10 = rand() % 10 + 1;
    
    		printf("el tercer valor es %d\n", n10);
    
    		printf("Digame el valor del primer numero:\n");
    		scanf("%d", &n1);
    
    		printf("Digame el valor del segundo numero:\n");
    		scanf("%d", &n3);
    
    		printf("Digame el valor del segundo numero:\n");
    		scanf("%d", &n5);
    
    		printf("Digame el valor del segundo numero:\n");
   			scanf("%d", &n7);
    	
    		printf("Digame el valor del segundo numero:\n");
    		scanf("%d", &n9);
    
    		printf("Digame el valor del segundo numero:\n");
    		scanf("%d", &n11);
    
    		if((n1==n0)&&(n2==n3)&&(n4==n5)&&(n6==n7)&&(n8==n9)&&(n10==n11)){
    			printf("Correcto, continuemos;\n");
    			printf("\n");
    		}else{
    			printf("Fallaste, intentelo de nuevo");
    			return 0;
    		}
     
  		return 0;
	}
	    	
	    
	    
	    /*case 2:
	    	printf("Has seleccionado la opcion intermedia, donde a pesar de que sabemos que das para mas, vas ha relajarte un poco con algo mas facil.\n");
	    	
	    	
	    	break;
	    	
	    case 3:
	    	printf("Has seleccionado la opcion dificil, digna de grandes cabezas como la de einstein o rajoy.\n");
	    
	    
	        break;
    }*/
	    
    
}

