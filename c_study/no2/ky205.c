/* ky205.c */

/* インクルード */
#include <stdio.h>

/* グローバル変数 */
int nG1;


/* 関数宣言 */
void main(void);
void Function1(void);

/* メイン関数 */
void main(void)
{
	/* 変数の初期化 */
	nG1 = 1;

	/* 変数の内容を表示 */
	printf("main関数のn1=%d\n", nG1);

	/* Function1をCALL */
	Function1();

	/* 変数の内容を表示 */
	printf("main関数のn1=%d", nG1);
}

void Function1(void)
{
	/* 変数に代入 */
	nG1 = 9;

	/* 変数の内容を表示 */
	printf("Function1関数のn1=%d\n", nG1);
}

