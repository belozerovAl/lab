#include <stdio.h>
#include <stdlib.h>
#include "funcs.h"

void _sortirovka(double* mass, int n){
	int minPos=0;
	double tmp=0;
		
	for (int i=0; i<n; i++){
		minPos=i;
		for (int j=i+1; j<n; j++){
			if (mass[minPos] < mass[j]){
 				minPos=j;
			}
		}
		tmp=mass[minPos];
		mass[minPos]=mass[i];
		mass[i]=tmp;
	}
}

void _vivod(double* mass, int n){
	for (int i=0; i<n; i++){
		printf("%.2lf ", *(mass+i)); 
	}
	free(mass);
}
