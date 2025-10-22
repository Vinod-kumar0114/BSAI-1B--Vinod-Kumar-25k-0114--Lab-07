#include <stdio.h>
 int main() {
    char str[100];
	int i=0,j;
	
    printf("Enter a string:");
    scanf("%[^\n]", str);
    
    while(str[i]!= '\0'){
    	
    	if(str[i]>'A' && str[i]<'Z'){
    		str[i]=str[i] + 32;
    	}
    	else if(str[i]>'a' && str[i]<'z'){
    		str[i]=str[i] - 32;
    	}
	    i++;
	}
	for (j=0 ; j<i ; j++) {
		printf("%c",str[j]);
	}

  return 0;
}

