#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <string.h>
#include <unistd.h>
/**
 * create_file - creates a file and writes text to it
 * @filename: name of the file to create
 * @text_content: NULL-terminated string to write into the file
 *
 * Description: This function creates a file with permissions rw-------
 * If the file already exists, it truncates it.
 * If text_content is NULL, it creates an empty file.
 *
 * Return: 1 on success, -1 on failure (if filename is NULL, file cannot
 * be created, or write fails)
 * The file is always properly closed in all cases.
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
lenght = 0;
else
lenght = strlen(text_content);
write_bytes = write(fd, text_content, lenght);
if (write_bytes < 0)
{
close(fd);
return (-1);
}
close(fd);
return (1);
}
