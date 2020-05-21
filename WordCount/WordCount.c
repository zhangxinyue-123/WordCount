#include <stdio.h>

int main(int args, char *argv[])
{
	char ch[100];             //字符数组
	int i = 0;
	int n = 0;
	int word = 0;
	int j = 0;
	FILE *fp;//文件指针
	fp = fopen("C:\\Users\\86173\\source\\repos\\WordCount\\Debug\\input.txt", "r");//打开文件。
	if (fp == NULL) //打开文件出错。
	{
		printf("can't open file\n");
	}
	while ((ch[i] = fgetc(fp)) != EOF) //读取数据到数组，直到文件结尾
	{
		
		if (ch[i] == ' ' || ch[i] == ',' || ch[i] == '\n')
			n++;
		i++;
	}
	fclose(fp);//关闭文件
	if (strcmp(argv[1], "-c") == 0)
	{
		printf("字符数：%d", i);
	}
	else if(strcmp(argv[1], "-w") == 0)
	{
		printf("单词数:%d\n", n+1);
	}
	return 0;
}
