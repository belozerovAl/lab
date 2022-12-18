#include <stdio.h>
#include <stdlib.h>
#include "funcs.h"

int main(){
    int n;
    printf("Введите число элементов массива: ");
    scanf("%d", &n);
  
    if (n>0){
       double*mass;
       mass=(double *)malloc(n * sizeof(double));
       printf("Заполните массив:  \n");
 
       for (int i=0; i<n; i++){
           scanf("%lf", &mass[i]);
       }
 
       _sortirovka(mass,n);
       printf("Отсортированный массив: \n");
       _vivod(mass,n);
    }
 
    else{
        printf("error \n");
    }

    return 0;
}

