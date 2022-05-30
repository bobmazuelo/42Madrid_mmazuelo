#include <pthread.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define NTHREADS 8

char	**ft_split(char const *s, char c);

void	*println(void *arg)
{
	char	*s;
	int	nb;
	
	nb = 0;
	s = *(char**)arg;
	for (int i = 0; i < strlen(s); i++)
		nb += s[i] & 0xf;
	printf("%s: %d\n", s, nb);
	return NULL;
}

int	main()
{
	int	children[NTHREADS];
	char	*data;
	char	**chunk_data;

	data = "86967897737416471853297327050364959\
		11861322575564723963297542624962850\
		70856234701860851907960690014725639\
		38397966707106094172783238747669219\
		52380795257888236525459303330302837\
		58495327135744041048897885734297812\
		69920216438980873548808413720956532\
		16278424637452589860345374828574668";

	chunk_data = ft_split(data, '\t');
	for (int i = 0; i < sizeof(chunk_data)/sizeof(char); i++)
		printf("data segment %d is \"%s\"\n", i, chunk_data[i]);

	for (int i = 0; i < NTHREADS; i++)
	{
		pthread_t t[NTHREADS];
		children[i] = pthread_create(&t[i], NULL, &println, &chunk_data[i]);
	}
	for (int i = 0; i < NTHREADS; i++)
		pthread_join(children[i], NULL);

	return (0);
}
