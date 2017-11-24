#include <stdio.h>
#include <libgen.h>

int main(int argc, char* argv[])
{
	char filename[] = "/mnt/hub/aaa.txt";

	printf("filename=[%s]\n", filename);
	printf("basename=[%s]\n", basename(filename));	
	printf("filename=[%s]\n", filename);
	printf("basename=[%s]\n", basename(filename));	
	printf("filename=[%s]\n", filename);
	printf("dirname =[%s]\n", dirname(filename));	
	printf("filename=[%s]\n", filename);
	printf("dirname =[%s]\n", dirname(filename));	
	printf("filename=[%s]\n", filename);
	printf("basename=[%s]\n", basename(filename));	

	return 0;
}
