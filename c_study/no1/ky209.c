/* ky209.c */

/* インクルード */
#include <stdio.h>

/* 関数宣言 */
void main(void);

/* メイン関数 */
void main(void)
{
	/* 変数の定義 */
	int n1, n2, n3;

	/* 1回目の入力 */
	printf("加算元の数字を入れてください");
	scanf("%d", &n1);
	/* 2回目の入力 */
	printf("加算する数字を入れてください");
	scanf("%d", &n2);

	/* 足し算をします */
	n3 = n1 + n2;

	/* 結果を表示 */
	printf("%d ＋ %d ＝ %d です\n", n1, n2, n3);
}
