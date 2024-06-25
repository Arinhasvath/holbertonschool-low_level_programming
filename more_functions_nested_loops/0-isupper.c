#include "main.h"
/**
* _isupper - Vérifie si un caractère est une lettre majuscule.
* @c: Le caractère à vérifier.
*
* Description: Cette fonction prend un seul caractère en entrée et
* renvoie 1 si le caractère est une lettre majuscule (A-Z), et 0 sinon.
*
* Return: 1 si le caractère est majuscule, 0 sinon.
*/
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
	return (1);
	}
	else
	{
	return (0);
	}
}
