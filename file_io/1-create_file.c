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
int fd, lenght = 0;
ssize_t write_bytes;
if (filename == NULL)
return (-1);
fd = open(filename, O_CREAT | O_TRUNC | O_WRONLY, 0600);
if (fd == -1)
return (-1);
if (text_content == NULL)
lenght = strlen(text_content);
else
text_content = "";
write_bytes = write(fd, text_content, lenght);
if (write_bytes < 0)
close(fd);
{
return (-1);
}
close(fd);
return (1);
}
