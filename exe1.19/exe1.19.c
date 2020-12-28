#include <stdio.h>
#define MAXLINE 1000
//将输入行的字符颠倒输出顺序
int getline(char s[], int lim)
{
	int c, i;
	for (i = 0; (c = getchar()) != EOF && c != '\n'; i++)
	{
		s[i] = c;
	}
	if (c == '\n')
	{
		s[i] = c;
		++i;
		s[i] = '\0';
	}
	return i;
}

void reverse(char s[],int len)
{
	char temp;
	int i=0;
	int j = 2;
	{
	while(i<len-j)
		temp = s[i];
		s[i] = s[len - j];
		s[len - j] = temp;
		++i;
		++j;
	}


}
int main()
{
	int len;
	char line[MAXLINE];
	while ((len = getline(line, MAXLINE)) > 0)
	{
		reverse(line,len);
		printf("%s\n", line);
	}
	return 0;

}