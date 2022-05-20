/*Autor: Oscar Eduardo Fletes Ixta 28/04/2022 
	Hacer un programa que pida el nombre de un archivo e imprime su contenido en pantalla 
	Imprimiendo caracter por caracter 
	
	Programa en lenguaje c que pide el nombre de un archivo e imprime su contedo en pantalla caracter por caracter,con uso
	de file*f, fopen(),fgets,EOF,fclose(f), y uso de la libreria "milibreria.h" para validar datos 
	
	Autor: Oscar Eduardo Fletes Ixta
	Escuela: UVM Campus Lomas Verdes
	Materia: Programcion Estructurada
	CICLO: 01/2022

	Programa en lenguaje c que muestra el uso de:
		* Declaracion de variables 
		* Variables del tipo char, int  
		* Uso de FILE*f
		* Uso de fopen()
		* Uso de fgets(f)
		* fclose(f)
		* Uso de condiciones
		* Uso de milibreria.h para validacion de datos
		* Ciclo while
		* printf para monstrar los valroes de las variables

	Objetivo:
	Mostrar el uso de variables char y int, condiciones, uso de la libreria milibreria.h, ciclo while, uso de FILE*(f), 
	fopen(), fgets(), fclose(f) realizar operaciones aritmeticas e imprimirla.

	Breve descripcion:
	El programa  pide como 1 variable del tipo char(Nombre del archivo),
	El programa pide el nombre de un archivo e imprime su contenido en pantalla Imprimiendo caracter por caracter
	*/
	
#include<stdio.h>//libreria para el cuerpo de c
#include "milibreria.h"//libreria que se creo para valdiar datos

int main(){
	char nombre[50], c;//variable de cadenas de 50 caracteres
	FILE *f;//variable para archivos
	int n=0, lineas=0;//variables de enteros 
	leers("Nombre del archivo: ",nombre,50);//Validacion de caracteres maximo 50 caracteres
	//Abrir el archivo en modo lectura 
	f=fopen(nombre,"r");//abre el archivo segun el nombre insertado
	//r==read(modo lectura)
	//verificar si se abrio correctamente el archivo
	if(f==NULL){//condicion que si f es igual a null
		printf("Error al tratar de abrir el archivo\n");//imprime mensaje
	}
	else{//de lo contrario...
		//Proceso
		while(1){//ciclo infinito con while
			c=fgetc(f);//leer el archivo
			printf("%c",c);//imprime caracter por caracter 
			n++;//cuenta todos los caracteres 
			if(c==EOF){//condicion, si c es igual a EOF
				//EOF caracter final del archivo
				break;//Es para que termine la iteraccion en ejecucucion y volver al principio, para realizar otra iteraccion
			}
			else if(c==10){//y si c es igual a 10  
				lineas++;//cuenta las lineas 
			}
		}
		//Cerrar
		fclose(f);//cierra el archivo
		printf("\n-------->El archivo tiene %d caracteres\n",n);//imprime el total de caracteres
		printf("\n-------->El archivo tiene %d lineas\n",lineas);//imprime el total de lineas
	}
	
	return 0;
}
