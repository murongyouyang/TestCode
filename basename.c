#include <stdio.h>
#include <libgen.h>

int main(int argc, char * argv)
{
	char filename[] = "/mbnmnj/sklajsdlfje.txt";
	char * tmp = basename(filename);

	printf("basename = [%s]\n", tmp);
	

	return 0;
}
