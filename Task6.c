#include <stdio.h>
int main(){
	int vowels=0, consonants=0,i=0;
	char str[30];
	
	printf("Enter the word: ");
	scanf("%s", &str);
	
	while(str[i]!= '\0'){  
		if(str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u' || str[i]=='A' || str[i]=='E' || str[i]=='I'|| str[i]=='O'|| str[i]=='U'){
			vowels++;
		}
		else{
			consonants++;
		}
		++i;
	}
	printf("Number of vowels thr word contains are %d\n", vowels);
	printf("Number of consonants the word contains are %d", consonants);
	return 0;
}



