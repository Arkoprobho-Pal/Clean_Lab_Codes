#include<stdio.h>
#include<unistd.h>
#include <sys/time.h>


int main()
{
	struct timeval begin, end;
	double elapsed;
	if(fork()==0)
	{
		gettimeofday(&begin, NULL);
		for(i=1; i<= 10000; i++ );
		gettimeofday(&end, NULL);
		elapsed = (end.tv_sec - begin.tv_sec) + ((end.tv_usec - begin.tv_usec)/1000000.0);
		printf("\nTime elapsed for 10000 runs : %fs",elapsed);
	}
	

	return 0;
}
