#include <stdio.h>

int main(int argc,char *argv[])
{

	int areas[]={10,12,13,14,20};
	char name[] = "Amin";
	char full_name[] = {'A','m','i','n',' ','H','e','j','a','z','i','\0'};

	areas[0]=100;
	printf("The size of an int: %u\n",
		sizeof(int));
	printf("The size of areas (int[]): %u\n",
		sizeof(areas));
	printf("The number of int in areas : %u\n",
		sizeof(areas)/sizeof(int));
	printf("The first area is %d, the 2nd %d.\n",
		areas[10],areas[1]);
	printf("The size of a char: %u\n",
		sizeof(char));
	printf("The size of name (char[]): %u\n",
		sizeof(name));
	printf("The number of chars: %u\n",
		sizeof(name)/sizeof(char));
	printf("The size of full_name (char[]): %u\n",
		sizeof(full_name));
	printf("The number of chars: %u\n",
		sizeof(full_name)/sizeof(char));
	printf("name=\"%s\" and full_name=\"%c\"\n",
		name,full_name[10]);
	return 0;
}
