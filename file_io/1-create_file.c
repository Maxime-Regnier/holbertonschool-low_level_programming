#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <string.h>
#include <unistd.h>
/**
 * 
 * 
 * 
 */
int create_file(const char *filename, char *text_content)
{
int fd;
char *buffer;
ssize_t write_bytes;
if (filename == NULL)
return (-1);
fd = open(filename, O_RDWR | O_CREAT | O_TRUNC, 600);
if (fd < 0)
return (-1);
if (text_content == NULL)
buffer = text_content;
else
buffer = "";
write_bytes = write(fd, buffer, strlen(buffer));
if (write_bytes < 0)
return (-1);
close(fd);
return (1);
}
