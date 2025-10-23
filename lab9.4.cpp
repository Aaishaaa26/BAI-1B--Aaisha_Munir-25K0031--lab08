#include <stdio.h>
int main(){
	int i,j,num,limit;
	printf("Enter multiplication requirement: ");
	scanf("%d",&num);
	printf("Enter display limit: ");
	scanf("%d",&limit);
		printf("Multiplication table \n");
	for(i=1;i<num;i++){
		printf("%d:",i);
		for(j=1;j<limit;j++){
			printf("%4d",i*j);
		}
		printf("\n");
	}
}
