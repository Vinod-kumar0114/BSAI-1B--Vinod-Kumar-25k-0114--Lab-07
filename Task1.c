#include <stdio.h>
int main()
{
	int a[5];
	int i, num=1;
	for(i=0 ; i<5 ; i++) {
		printf("Enter num%d: ", num);
		scanf("%d", &a[i]);
		num++;	
	}
	
	printf("\nInput: ");
	for(i=0 ; i<5 ; i++) {
		printf("%d ", a[i]);
	}
	
	int temp = a[4];
	for (i=4 ; i>0 ; i--) {
		a[i]=a[i-1];
	}
	
	printf("\nOutput: ");
	a[0]=temp;
	for(i=0 ; i<5 ; i++) {
		printf("%d ", a[i]);
	}
	return 0;
}
