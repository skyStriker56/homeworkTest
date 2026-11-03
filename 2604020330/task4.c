/*
 * 学号：2604020330
 * 姓名：李凌云
 * 题目：Homework2 - 题目4
 */

/*
 * ===== 修改记录（便于核对，提交前可整段删除）=====
 * 1. 保存编码改为 UTF-8（带 BOM），修复 MSVC 下中文乱码
 * 2. 注释头中的姓名由模板占位符「张三」改为「李凌云」，与其他题目保持一致
 * 3. 修正 if (score < 0 || score > 100) 一行缺失的 4 空格缩进
 * 4. 代码逻辑未做改动
 * ===============================================
 */

#include <stdio.h>

int main(void)
{
    int score;
    printf("请输入分数：");
    scanf_s("%d", &score);
    if (score < 0 || score > 100)        // [修改] 补齐缩进
    {
        printf("输入错误，分数应在 0~100 之间。\n");
    }
    else if (score >= 90)
    {
        printf("分数 %d，等级：A\n", score);
    }
    else if (score >= 80)
    {
        printf("分数 %d，等级：B\n", score);
    }
    else if (score >= 70)
    {
        printf("分数 %d，等级：C\n", score);
    }
    else if (score >= 60)
    {
        printf("分数 %d，等级：D\n", score);
    }
    else
    {
        printf("分数 %d，等级：E\n", score);
    }
    return 0;
}