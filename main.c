#include "get_next_line.h"
#include "get_next_line_bonus.h"
#include <stdio.h>

int	main(int argc, char **argv)
{
	char	*line;
	int		file1;

	file1 = open(argv[1], O_RDONLY);
	if (file1 < 0)
		return (0);
	(void)argc;
	line = get_next_line(file1);
	while (line)
	{
		printf("%s" ,line);
		free(line);
		line = get_next_line(file1);
	}
	close(file1);
}
