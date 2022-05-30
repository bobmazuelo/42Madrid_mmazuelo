//gcc -pthread -D NTHREADS=10 -o threads threads.c

#include <pthread.h>
#include <stdio.h>
#include <stdlib.h>

void	*println(void *arg)
{
	printf("this is thread number %d\n", *(int*)arg);
	return NULL;
}

int	main()
{
	int	children[NTHREADS];

	for (int i = 0; i < NTHREADS; i++)
	{
		pthread_t t[NTHREADS];
		children[i] = pthread_create(&t[i], NULL, &println, &i);
	}
	for (int i = 0; i < NTHREADS; i++)
		pthread_join(children[i], NULL);

	return (0);
}
