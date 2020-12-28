#include <stdio.h>
#define MAXLINE 1000
int getline(char s[], int lim)
{
	int c,i;
	for (i = 0; (c = getchar()) != EOF && c != '\n'; i++)
	{
		if (i < lim - 2)
		{
			s[i] = c;
		}
	}
	if (c == '\n')
	{
		s[i] = c;
		++i;
		s[i] = '\0';

	}
	return i;
}

int main()
{
	int len;
	int max;
	char line[MAXLINE];
	char longest[MAXLINE];
	max = 0;
	while ((len = getline(line, MAXLINE)) > 0)
	{
		if (len >= 79)
		{
			printf("%s", line);
		}
		else
		{
			printf("nothing\n");
		}
	}
	return 0;

}