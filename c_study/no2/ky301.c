/* ky301.c */

/* インクルード */
#include <stdio.h>

/* 関数宣言 */
void main(void);

/* メイン関数 */
void main(void)
{
	/* 変数の初期化 */
	int n1;

	/* 数値を入力 */
	printf("数値を入力:");
	scanf("%d", &n1);

	/* 偶数か奇数か判断し表示 */
	if (n1%2 == 0)
		printf("%dは偶数です", n1);
	else
		printf("%dは奇数です", n1);
}
