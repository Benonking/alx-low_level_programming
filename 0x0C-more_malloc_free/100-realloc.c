#include "main.h"
#include <stdlib.h>

/**
 * _reallcoc - reallocate mem block using malloc n free
 * @ptr: pointer to prev mem
 * @old_size: old men size
 * @new_size: new men size
 * Return: pointer to new allocated men
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	if (new_size == old_size)
		return (ptr);
	if (new_size > old_size)
		;
	if (ptr == NULL)

}
