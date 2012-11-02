#include <stdio.h>

int main(int varc,char *argv[])
{
	int bugs=100;
	double bug_rate=1.2;

	printf("You have %d bugs at imaginary rate of %f.\n",bugs,bug_rate);
 	unsigned long universe_of_defects = 1L * 1024L * 1024L * 1024L + 1024L * 1024L * 1024L;
	printf("The entire universe has %ld bugs.\n",universe_of_defects);
	double expected_bugs = bugs*bug_rate;
	printf("You are expected to have %f bugs.\n",expected_bugs);
	double parts_of_universe = expected_bugs / universe_of_defects;
	printf("That is only a %e portion of the universe.\n",
		parts_of_universe);

	// this make no sense , just a demo of somthing weird
	char nul_byte = '\0';
	int care_percentage=bugs*nul_byte;
	printf("This is the null char %c.\n",nul_byte);
	printf("Which means you should care %d%%.\n",
		care_percentage);
	return 0;

}
