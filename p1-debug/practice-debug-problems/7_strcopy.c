#include<stdio.h>

//copy the string from src to dst

void string_copy(char s[], char d[]){
	int i = 0;
	while(s[i] != '\0'){
		d[i] = s[i];
		i++;
	}
	d[i]='\0';
}

int main(){
	char src[80] = "red";
	char dst[80] = "orange";
	string_copy(src, dst);
	printf("%s", dst);
	return 0;
}
