# include <stdio.h>
 
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */ 
int main (void)
{
int w;
/* faire l’affichage avec write (2) ici */
w = write (STDOUT_FILENO, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 10); 
if (w < 0)
perror ("Writing error: ");
return(1);
}
