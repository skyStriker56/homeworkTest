// 姓名：李凌云 学号：2604020330
// 题目：Homework2 - 题目2
/*
 * ===== 修改记录（便于核对，提交前可整段删除）=====
 * 1. 保存编码改为 UTF-8（带 BOM），修复 MSVC 下中文乱码并消除 C4819 警告
 * 2. scanf 改为 scanf_s（项目开启 SDL 检查，scanf 会触发 C4996 错误）
 * ===============================================
 */

#include <stdio.h>

int main(void)
{
    int a, b;
    printf("请输入两个整数：");
    scanf_s("%d%d", &a, &b);        // [修改] scanf -> scanf_s

    int sum = a + b;
    int sub = a - b;
    int mul = a * b;

    printf("和   = %d\n", sum);
    printf("差   = %d\n", sub);
    printf("积   = %d\n", mul);

    if (b == 0)
    {
        printf("除数不能为 0，无法计算商和余数。\n");
    }
    else
    {
        int div = a / b;
        int rem = a % b;
        printf("商   = %d\n", div);
        printf("余数 = %d\n", rem);
    }

    return 0;
}