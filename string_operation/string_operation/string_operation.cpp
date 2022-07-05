// string_operation.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>

//拼接字符串
char* strcatP(char* dst, const char* src) {
    char* ch = dst;
    while (*ch)
        ch++;
    while (*ch++ = *src++);
    return dst;
}

//copy字符串
char* strcpy(char* dst, const char* src) {
    if (dst == src)
        return dst;
    char* ch = dst;
    while (*ch++ = *src++);

    return dst;
}

//
//void* memset(void* a, int ch, size_t length) {
//
//}
//
//void* memcpy(void* dst, const void* src, size_t length){
//
//}

int main()
{
    const char* aa = "123456";
    char bb[] = "654321";
    char*result = strcat(bb, aa);
    std::cout << result << std::endl;
    std::cout << "Hello World!\n";
}

// 运行程序: Ctrl + F5 或调试 >“开始执行(不调试)”菜单
// 调试程序: F5 或调试 >“开始调试”菜单

// 入门使用技巧: 
//   1. 使用解决方案资源管理器窗口添加/管理文件
//   2. 使用团队资源管理器窗口连接到源代码管理
//   3. 使用输出窗口查看生成输出和其他消息
//   4. 使用错误列表窗口查看错误
//   5. 转到“项目”>“添加新项”以创建新的代码文件，或转到“项目”>“添加现有项”以将现有代码文件添加到项目
//   6. 将来，若要再次打开此项目，请转到“文件”>“打开”>“项目”并选择 .sln 文件
