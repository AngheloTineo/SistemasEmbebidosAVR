/* librerias */
#include <stdio.h>
#include <stdlib.h>

/* MACROS */
#define SALUDO "Bienvenidos al curso de sistemas embebidos \n"
#define COMPLEMENTO "Fiee Cas Uni"

/* Variables globales */

/* Declaraciones de funciones */

/* funcion principal */

int main(){
    //primera parte del programa 0
    //system("notepad"); 

    //segunda parte del programa 0
    system("type null > Saludo.txt");
    FILE *fp;
    fp = fopen("Saludo.txt","w+");
    fprintf(fp, SALUDO);
    fputs(COMPLEMENTO, fp);
    fclose(fp);
    system("code Saludo.txt");
    return 0;
}