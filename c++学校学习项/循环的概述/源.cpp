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
    int ar1[20] = { 1, 5, 7, 9, 4, 12, 5, 689, 7, 0 };  // ��ʼ��ȫ��20��Ԫ��
    int i, j, k;
    func(ar1, 11);  // ֻ��ǰ9��Ԫ�ؽ�������

    printf("������һ��������");
    scanf_s("%d", &k);  // ʹ�ñ�׼��scanf����

    // �ҵ�����λ��
    for (j = 9; j >= 0; j--) {
        if (ar1[j] > k) {
            // �ƶ�Ԫ��
            for (i = j; i < 11; i++) {
                ar1[i + 1] = ar1[i];
            }
            // ����Ԫ��
            ar1[j + 1] = k;
            break;
        }
    }

    if (j == -1) {
        // �������λ��������ĩβ��ֱ��׷�ӵ�ĩβ
        ar1[9] = k;
    }

    // ��ӡ����
    for (i = 0; i < 10; i++) {
        printf("%d  ", ar1[i]);
    }
    printf("\n");  // ��ӡ���з�
    return 0;
}