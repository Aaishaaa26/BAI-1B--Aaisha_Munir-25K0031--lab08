#include <stdio.h>
int main(){
	int matrix[3][3]=
	        {{12,45,32},
	        {2,13,45},
	        {56,72,41}}
	        ,i,j,max;
	        max=matrix[0][0];
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			if (max< matrix[i][j]){
				max= matrix[i][j];
			}
		}
	
	}	
	printf("The Maximum number is: %d",max);
}
