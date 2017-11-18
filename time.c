#include <stdio.h>
#include <time.h>

int main(int argc, char* argv[])
{
	time_t now;
	struct tm tm1,tm2;

	time(&now);
	tm1 = *localtime(&now);
	printf("%d-%d-%d T %2.2d:%2.2d:%2.2d\n", 
										tm1.tm_year + 1900,
										tm1.tm_mon + 1,
										tm1.tm_mday,
										tm1.tm_hour,
										tm1.tm_min,
										tm1.tm_sec);

	now += 3600 * 5;

	tm2 = *localtime(&now);
	printf("%d-%d-%d T %2.2d:%2.2d:%2.2d\n", 
										tm2.tm_year + 1900,
										tm2.tm_mon + 1,
										tm2.tm_mday,
										tm2.tm_hour,
										tm2.tm_min,
										tm2.tm_sec);
	return 0;
}
