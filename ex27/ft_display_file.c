#include <unistd.h>
#include <fcntl.h>	// For open and close

#define BUFFER_SIZE 4096

// Function to display a string on the standard error output
void	ft_puterror(char *str)
{
	while (*str)
		write(2, str++, 1);
}

// Function to display the content of a file
void	ft_display_file(char *filename)
{
	int		fd;
	int		bytes_read;
	char	buffer[BUFFER_SIZE];

	// Open the file in read-only mode
	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		ft_puterror("Cannot read file.\n");
		return ;
	}

	// Read from the file and write to the standard output
	while ((bytes_read = read(fd, buffer, BUFFER_SIZE)) > 0)
	{
		write(1, buffer, bytes_read);
	}

	// Close the file descriptor
	if (close(fd) == -1)
		ft_puterror("Cannot close file.\n");
}

int	main(int argc, char **argv)
{
	if (argc < 2)
		ft_puterror("File name missing.\n");
	else if (argc > 2)
		ft_puterror("Too many arguments.\n");
	else
		ft_display_file(argv[1]);

	return (0);
}
