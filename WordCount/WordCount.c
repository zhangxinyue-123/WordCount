#include <stdio.h>

int main(int args, char *argv[])
{
	char ch[100];             //�ַ�����
	int i = 0;
	int n = 0;
	int word = 0;
	int j = 0;
	FILE *fp;//�ļ�ָ��
	fp = fopen("C:\\Users\\86173\\source\\repos\\WordCount\\Debug\\input.txt", "r");//���ļ���
	if (fp == NULL) //���ļ�����
	{
		printf("can't open file\n");
	}
	while ((ch[i] = fgetc(fp)) != EOF) //��ȡ���ݵ����飬ֱ���ļ���β
	{
		
		if (ch[i] == ' ' || ch[i] == ',' || ch[i] == '\n')
			n++;
		i++;
	}
	fclose(fp);//�ر��ļ�
	if (strcmp(argv[1], "-c") == 0)
	{
		printf("�ַ�����%d", i);
	}
	else if(strcmp(argv[1], "-w") == 0)
	{
		printf("������:%d\n", n+1);
	}
	return 0;
}
