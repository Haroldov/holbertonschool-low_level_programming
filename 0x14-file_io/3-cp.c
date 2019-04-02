/*Libraries*/

/*open*/
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

/*read and write*/
#include <unistd.h>

/*malloc, free*/
#include <stdlib.h>

/*dprintf*/
#include <stdio.h>

/**
 *main - copies a file
 *@argc: number of arguments
 *@argv: arguments
 *Return: 0 on success
 */

int main(int argc, char *argv[])
{
	int fileDesc, numBytes, newFiledesc, endFile, endNewfile;
	char *filename, *buffer, *newFilename;

	/*Check if number of arguments is correct*/
	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	/*Allocate buffer of 1024 chars*/
	buffer = malloc(1024 * sizeof(char));
	if (buffer == NULL)
		return (-1);

	newFilename = *(argv + 2);
	filename = *(argv + 1);

	/*Open file to be copied*/
	fileDesc = open(filename, O_RDONLY);
	if (fileDesc == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", filename);
		free(buffer);
		exit(98);
	}


	/*Create new file or truncate it if it exists*/
	newFiledesc = open(newFilename, O_CREAT | O_TRUNC | O_WRONLY, 0664);
	if (newFiledesc == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", newFilename);
		close(fileDesc);
		free(buffer);
		exit(99);
	}

	do {
		/*Read the file to be copied*/
		numBytes = read(fileDesc, buffer, sizeof(char) * 1024);
		if (numBytes == -1)
		{
			free(buffer);
			close(newFiledesc);
			close(fileDesc);
			return (-1);
		}

		/*Write into the new file*/
		numBytes = write(newFiledesc, buffer, numBytes);
		if (numBytes == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", newFilename);
			free(buffer);
			close(newFiledesc);
			close(fileDesc);
			exit(99);
		}
	} while (numBytes != 0);
	free(buffer);
	endNewfile = close(newFiledesc);
	endFile = close(fileDesc);
	if (endNewfile == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %i\n", endNewfile);
		exit(100);
	}
	if (endFile == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %i\n", endFile);
		exit(100);
	}
	return (0);
}
