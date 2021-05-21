#include<stdio.h>
#include<cs50.h>

int main(void){
	int ch = get_int("Enter type of pattern (1 or 2) ");
	int row = get_int("Number of rows");
	if (ch == 1){
		for(int i=row;i>0;i--){
			for(int j=i;j>0;j--){
				printf("#");
			}
			printf("\n");
		}
	}
	if(ch == 2){
			for(int i=1;i<=row;i++){
				for(int k=i;k<row;k++){
					printf(" ");
				}
				for(j=0;j<i;j++){
					printf("#");
				}
				printf("\n");
			}
		}
	return 0;
}
