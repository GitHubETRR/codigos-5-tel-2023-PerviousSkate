#include <stdio.h>
#define CANT_MAX 60 

void ingreso_txt1(char []);
void sustitucion(char []);


int main (void){
    char txt1[CANT_MAX];
    ingreso_txt1(txt1);
    sustitucion(txt1);
    printf("%s",txt1);
}

void ingreso_txt1(char txt1[]){
    printf("Por favor ingrese el texto :");
    gets(txt1);
}

void sustitucion(char txt1[]){
    for(int i=0; !(txt1[i]=='\0');i++){
        if(txt1[i]<123 && txt1[i]>96){
            txt1[i]-=32;
        }
    }

}


