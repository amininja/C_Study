/* ky208.c */

/* インクルード */
#include <stdio.h>

/* グローバル変数 */
int nG1;

/* 関数宣言 */
void main(void);
void Function(void);

/* メイン関数 */
void main(void)
{
	/* グローバル変数を外部参照する */
	extern int nG2;

	nG1 = 10;
	nG2 = 20;

	/* 変数の内容を表示 */
	printf("nG1(F)=%d\n", nG1);
	printf("nG2(F)=%d\n", nG2);

	Function();

	/* 変数の内容を表示 */
	printf("nG1(F)=%d\n", nG1);
	printf("nG2(F)=%d\n", nG2);

}

/* グローバル変数 */
int nG2;

void Function(void)
{

	nG1 = 30;
	nG2 = 40;

	/* 変数の内容を表示 */
	printf("nG1(F)=%d\n", nG1);
	printf("nG2(F)=%d\n", nG2);

	nG1 = 50;
	nG2 = 60;
}
