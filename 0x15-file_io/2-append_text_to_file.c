#include "main.h"
#include <stddef.h>
/**
 * append_text_to_file - appends text to a file
 * @filename: name of the file
 * @text_content: content to append to file
 * Return: 1 successs and 0 if failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int appendd;/*no of bytes to actually append*/
	int f = 0;/*counter, counts the text_content*/
	int fp; /*file descriptor*/

	if (filename == NULL)
	{
		return (-1);
	}
	fp = open(filename, O_WRONLY | O_APPEND);

	if (fp == -1)
	{
		return (-1);
	}
	if (text_content)
	{
		while (text_content[f])
			f++;
		appendd = write(fp, text_content, f);
		if (appendd != f)
		{
			return (-1);
		}
	}
	close(fp);
	return (1);
}
