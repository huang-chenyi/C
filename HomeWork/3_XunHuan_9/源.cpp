
/*谁在说谎：一个侦探逮捕了5个嫌疑人。这5个人因为供出的作案地点各有出入，进一步审讯了他们之后，
  他们分别提出了如下的申明：然而只能释放说真话的人，请问，该释放哪几个人呢？

	A：“5个人当中有1个人说了谎”。
		若A说真话
	B：“5个人当中有2个人说了谎”。
		若B说真话
	C：“5个人当中有3个人说了谎”。
		若C说真话
	D：“5个人当中有4个人说了谎”。
		若D说真话，则其他人均需说谎，
	E：“5个人全说谎”。
		若E说真话，则不是5个全说谎（E=0）
*/


#include<stdio.h>
int main()
{
	int A, B, C, D, E, right;
	printf("该释放的人是：");
	for (A = 0; A < 2; A++)
	{
		for (B = 0; B < 2; B++)
		{
			for (C = 0; C < 2; C++)
			{
				for (D = 0; D < 2; D++)
				{
					for (E = 0; E < 2; E++)
					{
						right = A + B + C + D + E;
						if (right == 4 &&)
					}
				}
			}
		}
	}
	return 0;
}