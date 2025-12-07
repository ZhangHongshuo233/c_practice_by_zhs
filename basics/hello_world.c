/*
 * 文件名: hello_world.c
 * 功  能: 输出 "Hello, World!" 到屏幕，并演示一个最基本的 C 程序结构
 */

#include <stdio.h>  // 引入标准输入输出头文件，里面声明了 printf、scanf 等函数

/*
 * 函数名: main
 * 参  数: 无（void）
 * 返回值: int 类型，约定：
 *         - 返回 0 表示程序正常结束
 *         - 非 0 一般表示出现错误（初学阶段可以统一返回 0）
 *
 * 说明:
 *   - main 函数是 C 程序的入口函数（程序从这里开始执行）
 *   - 一个 C 程序必须且只能有一个 main 函数
 */
int main(void)
{
    // printf 是 "print formatted" 的缩写，用于在屏幕上输出内容
    // \n 表示换行（newline）
    printf("Hello, World!\n");

    /*
     * 习惯上在 main 函数末尾返回 0，表示程序正常结束。
     * return 会结束当前函数并把后面的值返回给调用者。
     * 对于 main 来说，返回值会交给操作系统。
     */
    return 0;
}
