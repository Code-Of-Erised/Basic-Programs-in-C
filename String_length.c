#include <stdio.h>
int string_len(char name[])
{
	int i = 0;
	while (name[i] != '\0')
		i++;
	return i;
}
int main()
{
	char name[] = "SUYASH";
	int string_length = string_len(name);
	printf("%d\n",string_length );


	return 0;
}
