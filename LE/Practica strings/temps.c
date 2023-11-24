#include <stdio.h>
#define CANT_MAX 10 
#define rango_min 10
#define rango_max 20

int ingreso_temp(int []);
int calculo_prom(int []);
int calculo_max(int []);
int calculo_min(int []);
int rango_temp(int []);
void respuesta(int,int,int,int);

int main (void){
    int temps[CANT_MAX];
    ingreso_temp(temps);
    int promedio=calculo_prom(temps);
    int max=calculo_max(temps);
    int min=calculo_min(temps);
    int rango=rango_temp(temps);
    respuesta(promedio,max,min,rango);
}

int ingreso_temp(int temps[]){
    for(int i=0; i<CANT_MAX; i++){
        printf("Ingrese la temperatura N°%d:",i+1);
        scanf("%d", &temps[i]);
    }
}

int calculo_prom(int temps[]){
    int promedio=0;
    for(int i=0; i<CANT_MAX; i++){
        promedio+=temps[i];
    }
    promedio/=CANT_MAX;
    return promedio;
}

int calculo_max(int temps[]){
    int max=temps[0];
    for(int i=0;i<CANT_MAX;i++){
        if(temps[i]>max){
            max=temps[i];
        }
    }
    return max;
}

int calculo_min(int temps[]){
    int min=temps[0];
    for(int i=0;i<CANT_MAX;i++){
        if(temps[i]<min){
            min=temps[i];
        }
    }
    return min;
}   

int rango_temp(int temps[]){
    int rango=0;
    for(int i=0;i<CANT_MAX;i++){
        if(temps[i]>=rango_min && temps[i]<=rango_max){
            rango++;
        }
    }
    return rango;
}

void respuesta(int promedio, int max, int min, int rango){
    printf("El promedio de temperatura fue de:%d\n",promedio);
    printf("El maximo de temperatura fue %d° mientras que el minimo fue %d°\n",max,min);
    printf("Las veces que estuvo en el rango de temperatura fueron %d",rango);
}
