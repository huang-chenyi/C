#include<stdio.h>
int main() {
	int nums1[5] = { 1, 3, 6, 7, 8 };
	int nums2[4] = { 2, 4, 7, 8 };
	int temp[9] = { 0 };
	int m = 5, n = 4;
	int i = 0, j = 0, k = 0;
	while(k < 9)
	{  //合并有序数组
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
//    int temp[9] = { 0 }; // 初始化一个足够大的数组来存储合并后的结果
//    int m = 5, n = 4;
//    int i = 0, j = 0, k = 0;
//    while (k < 9) {
//        // 如果nums1的元素用完了，直接将nums2的剩余元素放入temp
//        if (i >= m) {
//            temp[k++] = nums2[j++];
//        }
//        // 如果nums2的元素用完了，直接将nums1的剩余元素放入temp
//        else if (j >= n) {
//            temp[k++] = nums1[i++];
//        }
//        // 比较两个数组的当前元素，将较小的放入temp
//        else if (nums1[i] <= nums2[j]) {
//            temp[k++] = nums1[i++];
//        }
//        else {
//            temp[k++] = nums2[j++];
//        }
//    }
//    // 输出合并后的数组
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

