#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
	/*---------- Variables; Accede int y diccionario -------------------------*/
	char letra; 	//input
	int nupal;		//numero de palabras
	int i,j;	//Variables dummy principales
	char k,l; 	//Variables dummy cortas
	
	//indice de tamaños, array que almacena temporalmente las palabras y 
	// array que almacena temporalmente el grafo
	char indice[16] = {0};
	char palabras[16], grafo[16]; 

	//punteros de palabras e isomorfismos
	*char oracion;
	*char grafoptr;

	scanf("%d", &nupal);

	//array de punteros que llevan a las palabras
	char *posiciones[nupal];	
	//array de punteros que llevan a los isomorfismos
	char *isomorfismos[nupal];  

	//guarda cada palabra e isomorfismo
	for (i = 0; i < nupal; ++i)
	{
		//obtiene la palabra y el isomorfismo; al terminar j será el tamño -1
		for (j = 0; (letra = getchar()) != '/n'; ++j)
		{
			palabras[j] = letra;

			//ciclo para obtener el siguiente vertice
			for (k = 0; letra == palabras[k] || k > 16; ++k) ;
			//si k es mayor que 16 significa que hubo un error
			if (k > 16)
			{
				exit(0);
			}

			grafo[j] = k;
		}
		//Reserva espacios de memoria y genera un puntero que vaya a ellos
		oracion = (char*)malloc((j+1) * sizeof(char));
		grafoptr = (char*)malloc((j+1) * sizeof(char));

		//Guarda la oracion y el isomorfismo en una direccion de memoria
		for (l = 0; l < j; ++l)
		{
			*(oracion + l) = palabras[l];
			*(grafoptr +l) = grafo[l];
		}

		//Reorganiza el indice
		
		

	}



	// While de desencriptado

		/*---------- Accede encriptado ---------------------------------------*/


		/*---------- Desencripta ---------------------------------------*/


	return 0;
}