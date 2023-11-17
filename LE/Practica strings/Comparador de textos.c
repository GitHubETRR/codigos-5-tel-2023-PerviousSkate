#include <stdio.h>
#define CANT_MAX 60 

void ingreso_txt1(char []);
void ingreso_txt2(char []);
int comparacion(char [],char []);


int main (void){
    char txt1[CANT_MAX];
    char txt2[CANT_MAX];
    ingreso_txt1(txt1);
    ingreso_txt2(txt2);
    if(comparacion(txt1,txt2)){
        printf("Textos coinciden");
    }
    else{
        printf("Textos no coinciden");
    }
}

void ingreso_txt1(char txt1[]){
    printf("Por favor ingrese el primer texto :");
    gets(txt1);
}

void ingreso_txt2(char txt2[]){
    printf("Por favor ingrese el segundo texto :");
    gets(txt2);
}

int comparacion(char txt1[], char txt2[]){
    for(int i=0; !(txt1[i]=='\0' && txt2[i]=='\0');i++){
        if(txt1[i]!=txt2[i]){
            return 0;
        }
    }
    return 1;
}


