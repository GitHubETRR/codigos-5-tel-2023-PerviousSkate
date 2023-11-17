#include <stdio.h>
#include <stdint.h>

   int pescados_pescador1=0;
   int pescados_pescador2=0;
   int pescados_pescador3=0;
   int pescadosT=0;
   int largoT=0;
   int largoP1=0;
   int largoP2=0;
   int largoP3=0;
   int largoXL1=0;
   int largoXL2=0;
   int largoXL3=0;
   int largo_historico=54;
   int pescadoXXL;
int main()
{
    int pescadores;
    printf("Programa OFICIAL de la competencia de pesca de pejerreys\n");
    do{
        if(largoXL1>largoXL2){
        if(largoXL1>largoXL3){
            pescadoXXL=largoXL1;
        }else{
            pescadoXXL=largoXL3;
        }
    }else{
        if(largoXL2>largoXL3){
            pescadoXXL=largoXL2;
        }else{
            pescadoXXL=largoXL3;
        }
    }
    if(pescadoXXL>largo_historico){
        printf("WoW, tu pescado sobrepaso el record historico con un largo de %d, ahora este es el largo historico\n", pescadoXXL);
        largo_historico=pescadoXXL;
        // Esto sirve para poder verificar si se rompio el record historico del pejerrey mas grande pescado
    }
        printf("Quien fue el pescador que acaba de sacar un pejerrey\n");
        scanf("%d", &pescadores);
        switch(pescadores){
            case 1: 
            do{
            system("clear");
            pescados_pescador1++;
            printf("¿Que longitud?\n");
            scanf("%d", &largoP1);
            }while(largoP1<=0);
            if(largoP1>largoXL1);
            largoXL1=largoP1;
            // Funcion para que si el pescador uno saca un pescado mas grande reemplaze el valor del mas grande anterior
            break;
            case 2:
            do{
            system("clear");
            pescados_pescador2++;
            printf("¿Que longitud?\n");
            scanf("%d", &largoP2);
            }while(largoP2<=0);
            if(largoP2>largoXL2);
            largoXL2=largoP2;
            // Funcion para que si el pescador dos saca un pescado mas grande reemplaze el valor del mas grande anterior
            break;
            case 3:
            do{
            system("clear");
            pescados_pescador3++;
            printf("¿Que longitud?\n");
            scanf("%d", &largoP3);
            }while(largoP3<=0);
            if(largoP3>largoXL3);
            largoXL3=largoP3;
            // Funcion para que si el pescador tres saca un pescado mas grande reemplaze el valor del mas grande anterior
            break;
            case 0:
            system("clear");
            pescadosT=pescados_pescador1+pescados_pescador2+pescados_pescador3;
            printf("Finalizando programa\n");
            if(pescados_pescador1>pescados_pescador2){
                if(pescados_pescador1>pescados_pescador3){
                    printf("El pescador ganador es el numero 1 y saco %d \n",pescados_pescador1);
                }else{
                    printf("El pescador ganador es el numero 3 y saco %d \n",pescados_pescador3);
                }
            }else{
                if(pescados_pescador2>pescados_pescador3){
                    printf("El pescador ganador es el numero 2 y saco %d \n",pescados_pescador2);
                }else{
                    printf("El pescador ganador es el numero 3 y saco %d \n",pescados_pescador3); 
                }
                //Esta parte es para ver quien fue el ganador de la competencia principal de quien saco mas pejerreys
            }
            if(largoXL1>largoXL2){
                if(largoXL1>largoXL3){
                    printf("El pescador ganador del segundo premio es el numero 1 con un largo de: %d \n",largoXL1);
                }else{
                    printf("El pescador ganador del segundo premio es el numero 3 con un largo de: %d \n",largoXL3);
                }
            }else{
                if(largoXL2>largoXL3){
                    printf("El pescador ganador del segundo premio es el numero 2 con un largo de: %d \n",largoXL2);
                }else{
                    printf("El pescador ganador del segundo premio es el numero 3 con un largo de: %d \n",largoXL3); 
                }
            }
            printf("El total de pejerreys pescados fue de %d",pescadosT);
            //Esta parte es para ver quien fue el ganador de la segunda competencia de quien saco el pejerrey mas grande
        }
    }while(pescadores!=0);
    
}



