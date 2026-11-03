/*
 * 学号：2604020330
 * 姓名：李凌云
 * 题目：Homework2 - 题目1 个人信息录入
 */

/*
 * ===== 修改记录（便于核对，提交前可整段删除）=====
 * 1. 保存编码改为 UTF-8（带 BOM），修复 MSVC 下中文乱码
 * 2. 删除模板自带的空 main 骨架（原第 9-13 行，即只有「你的代码」占位、直接 return 0 的那个 main）
 *    原因：代码追加在其下方会导致同一文件出现两个 main，报 C2084
 * 3. scanf 全部改为 scanf_s（项目开启 SDL 检查，scanf 会触发 C4996 错误）
 * ===============================================
 */

#include <stdio.h>

int main(void)
{
    int age;
    double height;
    char blood;

    printf("请输入年龄：");
    scanf_s("%d", &age);                 // [修改] scanf -> scanf_s

    printf("请输入身高(米)：");
    scanf_s("%lf", &height);             // [修改] scanf -> scanf_s

    // [修改] scanf_s 读取 %c 时必须额外传缓冲区大小，故补上 1U
    printf("请输入血型：");
    scanf_s(" %c", &blood, 1U);          // [修改] scanf -> scanf_s，并补 1U

    printf("+----------------------+\n");
    printf("|      个人信息卡      |\n");
    printf("| 年龄：%d 岁          |\n", age);
    printf("| 身高：%.2f 米        |\n", height);
    printf("| 血型：%c 型           |\n", blood);
    printf("+----------------------+\n");

    return 0;
}
