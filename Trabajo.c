# include<stdio.h>
# include<string.h>
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
	
	
	printf("A continuacion elegira el modo que desea jugar.\n");
	printf("\n");
	
	printf("Opcion 1- Todos los temas.\n");
	printf("Opcion 2- Numeros.\n");
	printf("Opcion 3- Tema concreto.\n");
	scanf("%d", &opcion);
	
	switch(opcion){
	
	    case 1:
	    	printf("Encontrara palabras pertenecientes a temas diversos\n");
	    	
	    	break;
	    
	    case 2:
	    	printf("A continuacion solo apareceran numeros de forma consecutiva\n");
	    	
	    	break;
	    	
	    case 3:
	    	
	        printf("Eliga un tema entre los siguientes.\n");
	    	printf("Tema 1- Animales.\n");
	        printf("Tema 2- Comidas.\n");
	        printf("Tema 3- Enfermedades.\n");
	        printf("Tema 4- Paises.\n");
	        scanf("%d", &temas);
	        
	        switch(temas){
	        	
	        	case 1:
	        		
	        		
	        		
	        		break;
	        	
	        	case 2:
	        		
	        		
	        		break;
	        		
	        	case 3:
	        		
	        		
	        		break;
	        		
	        	case 4:
	        		
	        		
	        		break;
	        		
			}
	        
	        break;
	    
    }
	    
    
}
