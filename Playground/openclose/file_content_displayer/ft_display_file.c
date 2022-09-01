#include <fcntl.h>

void	ft_putstr(char *str);

void	ft_display_file(char *filename)
{
	int		fd;
	int		readbytes;
	char	buffer[4096 + 1];

	fd = open(filename, O_RDONLY);

	readbytes = read(fd, buffer, 4096);
	buffer[readbytes] = '\0';

	ft_putstr(buffer);

	close(fd);
}

int	main(int argc, char **argv)
{
	if (argc < 2)
	{
		ft_putstr("File is missing, man.");
		return (1);
	}
	if (argc > 2)
	{
		ft_putstr("Too many files, man.");
		return (1);
	}
	ft_display_file(argv[1]);
	return (0);

}
