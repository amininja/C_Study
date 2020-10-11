/* ky210.c */

/* インクルード */
#include <stdio.h>

/* 関数宣言 */
void main(void);

/* メイン関数 */
void main(void)
{
	/* 変数の定義	 */
	char c1;
	long l1;
	float f1;

	/* char から long へ */
	c1 = 100;
	l1 = c1;

	/* 結果表示*/
	printf("%d(char)から%ld(long)\n", c1, l1);

	/* long から char へ */
	l1 = 256;
	c1 = (char)l1;
	printf("%ld(long)から%d(char)\n", l1, c1);

	/* float から long へ */
	f1 = 123.456F; /* Fは数値をfloat型と明示するための接尾辞(サフィックス) */
	l1 = (long)f1;
 	printf("%f1(float)から%ld(long)\n", f1, l1);
}
