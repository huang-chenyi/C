#include<stdio.h>
int main() {
	int nums1[5] = { 1, 3, 6, 7, 8 };
	int nums2[4] = { 2, 4, 7, 8 };
	int temp[9] = { 0 };
	int m = 5, n = 4;
	int i = 0, j = 0, k = 0;
	while(k < 9)
	{  //�ϲ���������
		if (i >= m)
			temp[k++] = nums2[j++];
		else if (j >= n)
			temp[k++] = nums1[i++];
		else if (nums1[i] >= nums2[j])
			temp[k++] = nums2[j++];
		else
			temp[k++] = nums1[i++];
	}
	for (int a = 0; a < 9; a++)
		printf("%d ", temp[a]);
	return 0;
}
//#include <stdio.h>
//int main() {
//    int nums1[5] = { 1, 3, 6, 7, 8 };
//    int nums2[4] = { 2, 4, 7, 8 };
//    int temp[9] = { 0 }; // ��ʼ��һ���㹻����������洢�ϲ���Ľ��
//    int m = 5, n = 4;
//    int i = 0, j = 0, k = 0;
//    while (k < 9) {
//        // ���nums1��Ԫ�������ˣ�ֱ�ӽ�nums2��ʣ��Ԫ�ط���temp
//        if (i >= m) {
//            temp[k++] = nums2[j++];
//        }
//        // ���nums2��Ԫ�������ˣ�ֱ�ӽ�nums1��ʣ��Ԫ�ط���temp
//        else if (j >= n) {
//            temp[k++] = nums1[i++];
//        }
//        // �Ƚ���������ĵ�ǰԪ�أ�����С�ķ���temp
//        else if (nums1[i] <= nums2[j]) {
//            temp[k++] = nums1[i++];
//        }
//        else {
//            temp[k++] = nums2[j++];
//        }
//    }
//    // ����ϲ��������
//    for (int a = 0; a < 9; a++) {
//        printf("%d ", temp[a]);
//    }
//    return 0;
//}


	//struct niubi {
	//	int a;
	//	int b;
	//	float d;
	//	char c;
	//	char sd[12];
	//}lizi[2];
	//lizi[1].a = 12;
	//printf("%d", lizi[1].a);

