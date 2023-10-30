#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * read_textfile - lire le texte d'un fichier
 * @filename: nom du fichier
 * @letters: nombre de lettre afficher
 * Return: 0 ou letters
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	FILE *fichier;
	char *to_print;

	if (filename == NULL)
		return (0);
	to_print = malloc(sizeof(char) * (letters));
	if (to_print == NULL)
		return (0);
	fichier = fopen(filename, "r");
	if (fichier == NULL)
		return (0);

	printf("%s", fgets(to_print, letters, fichier));
	fclose(fichier);
	return (letters);
}
