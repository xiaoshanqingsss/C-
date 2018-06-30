#include <stdio.h>
struct student
{
	int num;
	char name[20];
	int score[3];
}stu[100];
int main()
{ 
	int n, i;
	printf("Ñ§ÉúÊı£º");
	scanf("%d", &n);
	for (i = 0; i < n; i++)
	{
		scanf("%d", &stu[i].num);
		scanf("%s", stu[i].name);
		getchar();
		scanf("%d%d%d", &stu[i].score[0], &stu[i].score[1], &stu[i].score[2]);
	}
	for (i = 0; i < n; i++)
	{
		printf("%d ", stu[i].num);
		printf("%s ", stu[i].name);
		printf("%d %d %d\n", stu[i].score[0], stu[i].score[1], stu[i].score[2]);
	}
	return 0;
}


