/*

Problem : Return the Last word in a string

Input : I will do this without using String Library
Output : Library

Note:Dont modify original string Neglect Spaces at the right end and at left end if required .
->Create a new string and return it , Use dynamic memory allocation .
*/
#include <stdlib.h>

char * get_last_word(char * str){
	int i = 0,r=0,p=0;
	char *str1;
	if (str == ""||str==NULL)
		return NULL;
	for (i = 0; *(str + i); i++)
	{
		if (*(str + i) == ' ' || *(str + i) == '\t')
		{
			p = i;
			r = i;
			while (*(str + p) == ' ' || *(str + p) == '\t' || *(str + p) == '\0')
				p++;
			if (*(str + p) == '\0')
			{
				str1 = (char *)malloc(sizeof(char)*(p - r + 1));
				p = 0;
				for (i = r; *(str + i); i++)
				{
					*(str1 + (p++)) = *(str + i);

				}
				*(str1 + p) = '\0';
				return str1;
			}
			i = p - 1;
		}
	}

}
