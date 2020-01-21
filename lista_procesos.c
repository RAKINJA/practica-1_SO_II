/*
  LISTA DE PROCESOS
  - Programa que lee una lista de procesos de un archivo de texto, y posteriormente
  la lista es enviada al despachador en un archivo llamado despachador.c

  Materia: Sistemas Operativos II
  Equipo:
     -
     -
     - Guillermo Contreras Castro
     - Víctor Hernádez Álvarez
 */

// Librerías
#include<stdio.h>
#include<stdlib.h>

// DEFINE
#define QUANTUM 5

// ESTRUCTURAS
struct proceso{
  int PDI, tiempo, prioridad, quantum;
}lista;

struct lista_procesos{
  proceso* proceso_cabeza;
};

// VARIABLES GLOBALES
lista lista;

// Prototipos
proceso* create_process(int PDI, int tiempo, int prioridad, int quantum);
void add_process(proceso* proceso);
void delete_process();

// FUNCION MAIN
int main(int argc, char** argv){

  // Variables de Archivo
  FILE *tabla_procesos;
  char datos_proceso[8];

  proceso* proceso_actual;
  
  tabla_procesos = fopen("procesos_prueba.txt","r");
  if( tabla_procesos == NULL ){ fputs("File Error",stderr); exit(1); }else{
     
     printf("\n\tIniciando Proceso de Carga...\n\n");
     // Lecutar del archivo por caracter

     while(!feof(tabla_procesos)){
     // while((dato_proceso = fgetc(tabla_procesos)) != EOF){
       fgets(datos_proceso,8,tabla_procesos);

       //proceso_actual = create_process((int)datos_proceso[0],(int)datos_proceso[2],(int)datos_proceso[4],);
       printf("\t0:");
       printf("%d",datos_proceso[0]);
       printf("\t1:");
       printf("%d",datos_proceso[1]);
       printf("\t2:");
       printf("%d",datos_proceso[2]);
       printf("\t3:");
       printf("%d",datos_proceso[3]);
       printf("\t4:");
       printf("%d",datos_proceso[4]);
       printf("\t5:");
       printf("%d",datos_proceso[5]);
       printf("\t6:");
       printf("%d",datos_proceso[6]);
       printf("\t7:");
       printf("%d\n",datos_proceso[7]);
     }
     //printf("\n\n%d",datos_proceso[0]);

     //system("PAUSE");
   
     if(fclose(tabla_procesos))
       perror("FClose Error");
  }
  return 0;
}

// Funciones
