/* ky203.c */

/* インクルード */
#include <stdio.h>

/* 関数宣言 */
void main(void);
void Function1(void);

/* メイン関数 */
void main(void)
{
	int n1;

	/* 変数の初期化 */
	n1 = 1;

	/* 変数の内容を表示 */
	printf("main関数のn1=%d\n", n1);

	/* Function1をCALL */
	Function1();

	/* 変数の内容を表示 */
	printf("main関数のn1=%d", n1);
}

void Function1(void)
{
	int n1;

	/* 変数の初期化 */
	n1 = 9;

	/* 変数の内容を表示 */
	printf("Function1関数のn1=%d\n", n1);
}

