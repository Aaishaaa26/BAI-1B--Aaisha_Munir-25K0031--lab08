#include <stdio.h>
int main(){
	int num,i,j;
		printf("Multiplication table (1-5)\n");
	for(i=1;i<6;i++){
		printf("%d:\t",i);
		for(j=1;j<6;j++){
			printf("%d \t",i*j);
		}
		printf("\n");
	}
}
