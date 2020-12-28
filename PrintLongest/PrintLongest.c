#include <stdio.h>
#define MAXLINE 1000 //���������е���󳤶�


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
	int len;   //��ǰ�еĳ���
	int max;   //ĿǰΪֹ���ֵ���еĳ���
	char line[MAXLINE]; //��ǰ��������
	char longest[MAXLINE];  //���ڱ��泤�������

	max = 0;
	while ((len = getline(line, MAXLINE)) > 0)
	{
		if (len > max)
		{
			max = len;
			copy(longest, line);   //����ǰ�и��Ƹ����ڱ�������е�������
		}
		if (max > 0)
		{
			printf("%s", longest);    //��������������У��ͽ���������д�ӡ����
		}

	}
	
	return 0;

}