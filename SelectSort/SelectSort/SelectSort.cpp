// SelectSort.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
#include <vector>
//1.选择排序
void SelectSort(std::vector<int> num) {
	int len = num.size();
	int minIndex, temp;
	for (int i = 0; i < len; i++) {
		minIndex = i;
		for (int j = i + 1; j < len; j++) {
			if (num[j] < num[minIndex])
				minIndex = j;
		}
		temp = num[i];
		num[i] = num[minIndex];
		num[minIndex] = temp;
	}

	std::cout << "SelectSort" << std::endl;
	for (int k = 0; k < len; k++) {
		std::cout << num[k] << "  ";
	}
}

//2.插入排序
void InsertSort(std::vector<int> num) {
	int len = num.size();
	int preIndex, current;
	for (int i = 1; i < len; i++) {
		preIndex = i - 1;
		current = num[i];
		while (preIndex >= 0 && num[preIndex] > current) {
			num[preIndex + 1] = num[preIndex];
			preIndex--;
		}
		num[preIndex + 1] = current;
	}

	std::cout << "InsertSort" << std::endl;
	for (int k = 0; k < len; k++) {
		std::cout << num[k] << "  ";
	}

}

//3.希尔排序
void ShellSort(std::vector<int> num) {

}

//4.快速排序
void QuickSort(std::vector<int> num) {

}

//5.冒泡排序
void BubbleSort(std::vector<int> num) {
	int len = num.size();
	for (int i = 0; i < len - 1; i++) {
		for (int j = 0; j < len - 1 - i; j++) {
			if (num[j] > num[j + 1]) {
				int temp = num[j + 1];
				num[j] = num[j + 1];
				num[j + 1] = temp;
			}
		}
	}
	std::cout << "BubbleSort" << std::endl;
	for (int k = 0; k < len; k++) {
		std::cout << num[k] << "  ";
	}
}

//6.归并排序
void MergeSort(std::vector<int> num) {

}

//7.堆排序
void HeapSort(std::vector<int> num) {

}

int main()
{
	std::vector<int> num = { 3,15,48,44,2,6,35,46,50,17,29 };
	SelectSort(num);
	InsertSort(num);
	ShellSort(num);
	QuickSort(num);
	BubbleSort(num);
	MergeSort(num);
	HeapSort(num);
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
