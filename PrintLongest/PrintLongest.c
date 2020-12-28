#include <stdio.h>
#define MAXLINE 1000 //允许输入行的最大长度


int getline(char s[], int lim)
{
	int c, i;
	for (i = 0; i < lim - 1 && (c = getchar()) != EOF && c != '\n'; i++)
	{
		s[i] = c;
	}
	if (c == '\n')
	{
		s[i] = c;
		++i;
	}
	s[i] = '\0';

	return i;
}

void copy(char to[], char from[])
{
	int i;

	i = 0;
	while ((to[i] = from[i]) != '\0')
	{
		++i;
	}
}
int main()
{
	int len;   //当前行的长度
	int max;   //目前为止发现的最长行的长度
	char line[MAXLINE]; //当前的输入行
	char longest[MAXLINE];  //用于保存长度最长的行

	max = 0;
	while ((len = getline(line, MAXLINE)) > 0)
	{
		if (len > max)
		{
			max = len;
			copy(longest, line);   //将当前行复制给用于保存最长的行的数组中
		}
		if (max > 0)
		{
			printf("%s", longest);    //如果存在这样的行，就将保存最长的行打印出来
		}

	}
	
	return 0;

}