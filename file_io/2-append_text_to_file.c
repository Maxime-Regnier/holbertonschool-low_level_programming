#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <fcntl.h>
/**
 * 
 * 
 * 
 */
int append_text_to_file(const char *filename, char *text_content)
{
int nb;
size_t length;
ssize_t write_bytes;
if (filename == NULL)
return (-1);
nb = open(filename, O_WRONLY | O_APPEND, 0600);
if (nb < 0)
return (-1);
if (text_content == NULL)
length = 0;
else
length = strlen(text_content);
write_bytes = 0;
if (length > 0)
write_bytes = write(nb, text_content, length);
if (write_bytes < 0)
{
close(nb);
return (-1);
}
close(nb);
return (1);
}
