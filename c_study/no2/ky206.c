/* ky206.c */

/* インクルード */
#include <stdio.h>

/* 関数宣言 */
void main(void);
void Function(void);

/* メイン関数 */
void main(void)
{
	/* 変数の初期化 */
	int n1;
	auto int n2;

	n1 = 10;
	n2 = 20;

	Function();

	/* 変数の内容を表示 */
	printf("n1=%d\n", n1);
	printf("n2=%d\n", n2);
}

void Function(void)
{
	/* 変数の初期化 */
	int n1;
	auto int n2;

	n1 = 30;
	n2 = 40;

	/* 変数の内容を表示 */
	printf("n1(F)=%d\n", n1);
	printf("n2(F)=%d\n", n2);
}
