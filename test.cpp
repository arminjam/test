#include<stdio.h>
#include<stdlib.h>
int main()
{
FILE *a,*b,*c;
char ch,name1[100],name2[100],name3[100];
printf("ʹ��˵����\n������ļ���Ҫ����·���磨D:\\\\360Downloads\\\\Software��\n");
printf("��������Ҫ�ϳɵ��ļ�����\n");
scanf("%s%s",name1,name2);
printf("������ϳɺ���ļ�����\n");
scanf("%s",name3);
a=fopen(name1,"rb");
b=fopen(name2,"rb");
c=fopen(name3,"wb+");
if(a==NULL)
{printf("Error of %s!\n",name1);
exit(0);
}
if(b==NULL)
{printf("Error of %s!\n",name2);
exit(0);
}
if(c==NULL)
{printf("Error of %s!\n",name3);
exit(0);
}
while(!feof(a))
{
ch=fgetc(a);
fputc(ch,c);
}
fclose(a);
while(!feof(b))
{
 ch=fgetc(b);
fputc(ch,c);

}

fclose(b);
fclose(c);
system("pause");
return 0;
}