#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
/**
 * 
 * 
 * 
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
int fd;
char *buffer;
ssize_t read_bytes;
ssize_t write_bytes;
if (filename == NULL)
{
return (0);
}
fd = open(filename, O_RDONLY);
if (fd < 0)
{
return (0);
}
buffer = malloc(letters * sizeof(char));
if (buffer == NULL)
{
close(fd);
return (0);
}
read_bytes = read(fd, buffer, letters);
if (read_bytes == -1)
{
free(buffer);
close(fd);
return (0);
}
write_bytes = write(1, buffer, read_bytes);
if (write_bytes < read_bytes)
{
free(buffer);
close(fd);
return (0);
}
free(buffer);
close(fd);
return (write_bytes);
}
