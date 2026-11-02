#include<stdio.h>
int main()
{
	printf("%6s %-12s %10s\n", "编号", "名称", "单价");
	printf("%6d %-12s %10.2f\n", 1,"铅笔",1.5);
	printf("%6d %-12s %10.2f\n", 2, "笔记本",5.80);
	printf("%6d %-12s %10.2f\n", 3, "橡皮", 0.75);
	printf("%6d %-12s %10.2f\n", 4, "圆规", 12.00);
	return 0;
}