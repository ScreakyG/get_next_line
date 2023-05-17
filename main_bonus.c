#include "get_next_line.h"
#include "get_next_line_bonus.h"
#include <stdio.h>

int	main(int argc, char **argv)
{
	char	*line;
	int		file1;
	int		file2;

	file1 = open(argv[1], O_RDONLY);
	file2 = open(argv[2], O_RDONLY);
	if (file1 < 0 || file2 < 0)
		return (0);
	(void)argc;
	line = get_next_line(file1);
	printf("%s" ,line);
	free(line);
	line = get_next_line(file2);
	printf("%s" ,line);
	free(line);
	line = get_next_line(file1);
	printf("%s" ,line);
	free(line);
	line = get_next_line(file2);
	printf("%s" ,line);
	free(line);
	close(file1);
	close(file2);
}
