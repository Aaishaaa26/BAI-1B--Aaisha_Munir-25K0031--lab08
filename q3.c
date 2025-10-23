#include <stdio.h>
int main(){
	char seating[5][5]={
	                {'x','o','x','o','x'},
	                {'o','x','o','x','o'}, 
					{'x','o','x','o','x'},  
					{'o','x','o','x','o'},  
					{'x','o','x','o','x'}};
	int i,j,empty=0,filled=0,total=0;
	printf("Classroom seating chart:\n========================\n( x = student, o = empty)\n");
	for(i=0;i<5;i++){
		printf("Row %d ",i);
		for(j=0;j<5;j++){
			printf(" %c ", seating[i][j]);
			if(seating[i][j]=='x'){
				filled = filled +1;
			}
			else if(seating[i][j] == 'o'){
				empty = empty +1;
			}
			total = total +1;
		}
			printf("\n");
	}
	printf("\nSummary\nStudents seated: %d\nEmpty Desks: %d\nTotal Desks: %d", filled,empty,total);	
}
	
	
					
