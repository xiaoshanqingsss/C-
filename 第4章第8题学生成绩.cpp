#include <stdio.h>
int main()
{
float score;
char grade;
printf("请输入学生成绩：");
scanf("%f",&score);
if(score>100||score<0)
{
printf("输入的成绩有误，请重新输入:");
scanf("%f",&score);
}
switch((int)(score/10)) 
{case 10:
case 9:grade='A';break;
case 8:grade='B';break;
case 7:grade='C';break;
case 6:grade='D';break;
case 5:
case 4:
case 3:
case 2:
case 1:
case 0:grade='E';
}
printf("该同学的成绩为%.1f,成绩等级为%c\n",score,grade);
}

