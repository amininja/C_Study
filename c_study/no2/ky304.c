/* ky304.c */

/* インクルード */
#include <stdio.h>

/* 関数宣言 */
void main(void);
int Data_in(void);

/* メイン関数 */
void main(void)
{
	int n1;

	/* 数値を入力 */
	n1 = Data_in();

	printf("入力された値=%d", n1);
}

int Data_in(void)
{
	int n1;

	/* 数値を入力 */
	printf("0-9を入力:");
	scanf("%d", &n1);
	if (n1 < 0 || n1 > 9)
		return -1;

	return n1;
}

