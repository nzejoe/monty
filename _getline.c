#include "monty.h"
/**
 * _getline - this is a custom getline function
 * @line: line buffer
 * @len: length of buffer
 * @stream: file stream to read from
 * Return: number of characters read or -1 if fail
 */
ssize_t _getline(char **line, size_t *len, FILE *stream)
{
	char *getline;
	ssize_t read;

	if (*line == NULL || *len == 0)
	{
		*len = 1024;
		*line = malloc(*len);
		if (*line == NULL)
		{
			return (-1);
		}
	}

	getline = fgets(*line, *len, stream);

	if (getline != NULL)
	{
		read = get_strlen(*line);

		if (read > 0 && (*line)[read - 1] == '\n')
		{
			(*line)[read - 1] = '\0';
			read--;
		}
		return (read);
	}
	else
	{
		return (-1);
	}
}

