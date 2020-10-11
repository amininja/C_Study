/* ky207.c */

/* インクルード */
#include <stdio.h>

/* 関数宣言 */
void main(void);
void Function(void);

/* メイン関数 */
void main(void)
{

	Function();
	Function();
	Function();

}

void Function(void)
{
	/* 変数の初期化 */
	static int n1 = 0;

	n1 += 10;

	/* 変数の内容を表示 */
	printf("n1=%d\n", n1);
}
