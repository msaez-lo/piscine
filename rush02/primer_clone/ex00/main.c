#include <stdio.h>
#include <stdlib.h>


int	analyze_dict(char *file_name);

int	main(int argc, char **argv)
{
	analyze_dict(argv[1]);
	//printf("%s\n", get_file(argv[1]));
	//
	//system("leaks -atExit --./a.out");
	return (0);
}
