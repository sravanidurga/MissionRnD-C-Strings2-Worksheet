/*

Problem : Return the Count of how many times the word occurred in given string in two ways
Way1: Not using Recursion
Way2:Using Recursion [Optional]

Input : "Hello HelloAgain HelloAGAINAGAIN commonItsHelloagain","Hello"
Output : 4

Note: Dont modify original str or word,Just return count ,Spaces can also be part of words like "ab cd" in "ab cd ab cd" returns 2
*/

#include <stdlib.h>
int length(char *str)
{
	int i = 0,count=0;
	for (i = 0; *(str + i); i++)
		count++;
	return count;
}
int compare(char *str1, char *str2)
{
	int i = 0, j = 0;
	while (*(str1 + i) && *(str1 + j))
	{
		if (*(str1 + i) != *(str2 + j))
			return 0;
		i++;
		j++;
	}
	if (*(str2 + j) != '\0')
		return 0;
	return 1;
}

int count_word_in_str_way_1(char *str, char *word){
	int i = 0,count=0,flag=0;
	for (i = 0; *(str + i); i++)
	{
		if ((*str + i) == *(word + 0))
		{
			count += compare((str + i), word);
		}
	}
	return count;
}

int count_word_int_str_way_2_recursion(char *str, char *word){
	return 0;
}

