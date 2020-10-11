/* ky201.c */

/* インクルード */
#include <stdio.h>

/* 関数宣言 */
void main(void);

/* メイン関数 */
void main(void)
{
	/* 変数の定義 */
	int ni8, ni10, ni16;
	float fe,f;

	/* 定数を変数にセット*/
	ni8 = 012;
	ni10 = 12;
	ni16 = 0x12;
	fe=12e3;
	f=1.23F; /* Fは数値をfloat型と明示するための接尾辞(サフィックス) */

	/* 変数の10,16,8進数で表示 */
	printf("8進=%d\n", ni8);
	printf("10進=%d\n", ni10);
	printf("16進=%d\n", ni16);
	printf("指数=%f\n", fe);
	printf("小数点=%f\n", f);
}
