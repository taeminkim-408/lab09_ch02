#include <stdio.h>

void main(){
	int starcount;
	printf("몇개의 별을 출력할까요?");
	scanf("%d",&starcount);

	for(int i=0; i<starcount; i++){
		for(int j=0; j<starcount; j++)
			printf("*");
	 	printf("\n");
	}
	return;
}
