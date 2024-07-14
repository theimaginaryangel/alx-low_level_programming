#include "main.h"
/**
 * _isalpha - A function that checks for alphabetic character.
 * @alphaBet : This checks the alpahabetic character
 * Return: Always 0 (Success)
 */
int _isalpha(int alphaBet)
{
return ((alphaBet >= 97 && alphaBet <= 122) ||
(alphaBet >= 65 && alphaBet <= 90));
}
