#include <stdio.h>

void func(int a[11], int m) {
    int i, j, k;
    for (i = 0; i < m - 1; i++) {
        for (j = i + 1; j < m; j++) {
            if (a[i] > a[j]) {
                k = a[i];
                a[i] = a[j];
                a[j] = k;
            }
        }
    }
}

int main() {
    int ar1[20] = { 1, 5, 7, 9, 4, 12, 5, 689, 7, 0 };  // 初始化全部20个元素
    int i, j, k;
    func(ar1, 11);  // 只对前9个元素进行排序

    printf("请输入一个整数：");
    scanf_s("%d", &k);  // 使用标准的scanf函数

    // 找到插入位置
    for (j = 9; j >= 0; j--) {
        if (ar1[j] > k) {
            // 移动元素
            for (i = j; i < 11; i++) {
                ar1[i + 1] = ar1[i];
            }
            // 插入元素
            ar1[j + 1] = k;
            break;
        }
    }

    if (j == -1) {
        // 如果插入位置在数组末尾，直接追加到末尾
        ar1[9] = k;
    }

    // 打印数组
    for (i = 0; i < 10; i++) {
        printf("%d  ", ar1[i]);
    }
    printf("\n");  // 打印换行符
    return 0;
}