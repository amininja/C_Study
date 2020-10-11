/* ky402.c */

/* インクルード */
#include <stdio.h>

/* 関数宣言 */
void main(void);

/* メイン関数 */
void main(void)
{
	/* 変数の定義 */
	int n1;
	int n2;
	int *p1;

	/* n1変数に代入する数値の入力 */
	printf("数値を入力:");
	scanf("%d", &n1);

	/* p1にn1のアドレスを代入 */
	p1 = &n1;

	/* p1が示すデータをn2に代入 */
	n2 = *p1;

	/* それぞれの変数の内容を表示 */
	printf("入力した数値=%d\n", n1);
	printf("ポインタのアドレス=%x\n", p1);
	printf("代入された数値=%d\n", n2);
}
