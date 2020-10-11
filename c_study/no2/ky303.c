/* ky303.c */

/* インクルード */
#include <stdio.h>

/* 関数宣言 */
void main(void);

/* メイン関数 */
void main(void)
{
	/* 変数の初期化 */
	int n1;

	datain:
	/* 数値を入力 */
	printf("0-9を入力:");
	scanf("%d", &n1);
	if (n1 < 0 || n1 > 9)
		goto datain;

	printf("入力された値=%d", n1);
}
