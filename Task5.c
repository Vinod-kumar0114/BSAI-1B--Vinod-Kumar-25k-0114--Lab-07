#include <stdio.h>
int main(){
	int a[10], max,min,i;
	for(i=0; i<10; i++){
		printf("Enter num%d: ", i+1);
		scanf("%d", &a[i]);
	}
	max = a[0];
	min = a[0];
	for (i=1 ; i<10 ; i++){
		if (max < a[i]){
			max= a[i];
		}
		if (min> a[i]){
			min= a[i];
		}
	}
	printf("\nThe difference between the max and min numbers is %d", max-min);
	return 0;
}
