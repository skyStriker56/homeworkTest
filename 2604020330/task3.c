// 姓名：李凌云 学号：2604020330
// 题目：Homework2 - 题目3
/*
 * ===== 修改记录（便于核对，提交前可整段删除）=====
 * 1. 保存编码改为 UTF-8（带 BOM），修复 MSVC 下中文乱码
 * 2. 删除文件开头多余的空行（原文件第 1 行为空行）
 * 3. 代码逻辑未做改动（scanf_s 为原写法，无需调整）
 * ===============================================
 */
#include <stdio.h>

int main(void)
{
    // 第一小问：判断奇偶
    int n;
    printf("请输入一个整数：");
    scanf_s("%d", &n);
    if (n % 2 == 0)
    {
        printf("%d 是偶数。\n", n);
    }
    else
    {
        printf("%d 是奇数。\n", n);
    }

    // 第二小问：比较大小
    int x, y;
    printf("请输入两个整数：");
    scanf_s("%d%d", &x, &y);
    if (x > y)
    {
        printf("较大的数是：%d\n", x);
    }
    else if (y > x)
    {
        printf("较大的数是：%d\n", y);
    }
    else
    {
        printf("两个数相等。\n");
    }

    return 0;
}