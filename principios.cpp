#include <conio.h>
#include<stdio.h>

   /*escriba un programa que lea la nota final de N alummnos
   y calcule la nota final media de los N alumnos*/
   
	int main(){
		
		int i,a, nota;
		int	const limite=20;
		float acum=0, promd=0;
				
		printf("\n\n          P R O M E D I O    D E     N O T A S \n");
		
		printf("\n\n determine la cantidad de alumnos a evaluar:");
		 scanf("%i",&a);

		for (int i=1;i<=a;i++){
			
			printf("\n\n          ingrese la nota final del alumno:"); 
				scanf("%i",&nota);
			
			/*Si el usuario del programa ingresa por error notas mayores a  
 			 ( > 20pts) = sobrepasa la nota maxima a optener en la asignatura */
 			 
			while(nota >limite){
				printf("LA NOTA INGRESA SUPERA LA CALIFICACION MAXIMA DE 20PTS");
	
				printf("\n\n     ingrese la nota final del alumno:");
				scanf("%i",&nota);
			}
		
		acum= acum+nota;						
		}
		
		promd= acum/a;
	
			printf("\n\n la media de las notas es de: %2.f", promd);
			
			
			return 0;	
		
	}
  	
