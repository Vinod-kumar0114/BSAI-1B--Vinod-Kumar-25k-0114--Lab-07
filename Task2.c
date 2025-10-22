#include <stdio.h>
int main()
{
	int i, num=1; 
	int a[10];
	for (i=0 ; i<=9 ; i++){
		printf("Enter num%d: ", num);
		scanf("%d", &a[i]);
		num++;
	}
	printf("\nThe numbers are: ");
	for (i=0 ; i<10 ; i++) {
		printf("%d ", a[i]);
	}
	
	int x, count=0;
	printf("\n\nEnter the number you want to search: ");
	scanf("%d", &x);
	
	for (i=0 ; i<10 ; i++) {
		if(x==a[i]) {
			count++;
		}
	}
	
	if (count!=0) 
		printf("\nThe number %d has occurred %d times", x, count);
	else
		printf("\nNumber not found");
		
	return 0;
}

