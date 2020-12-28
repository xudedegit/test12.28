#include <stdio.h>
#define MAXLINE 1000
//删除掉每个输入行末尾的空格和制表符，并删除完全是空格的行
int getline(char s[], int lim)
{
	int c, i,j;
	j = 0;
	for (i = 0; (c = getchar()) != EOF && c != '\n'; i++)
	{
		s[i] = c;
	}
	if (c == '\n')
	{
		
		s[i] = c;
		++i;
		s[i] = '\0';
		j = i - 2;
		while(s[j] == '\t' || s[j] == ' ')
		{
			s[j] = '\n';
			s[j + 1] = '\0';
			--j;
		}
		j+=2;
	}
	return j;
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
		if (len > 2)
		{
			printf("%d,%s", len, line);
		}
		else
		{
			printf("nothing\n");
		}
	
	}
	return 0;

}