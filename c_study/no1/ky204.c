/* ky204.c */

/* インクルード	*/
#include <stdio.h>

/* 関数宣言	*/
void main(void);

/* メイン関数 */
void main(void)
{
	/* 変数の定義 */
	float fi1, fi2;

	/* 入力を促す1 */
	printf("小数点数値を入力1=");
	scanf("%f", &fi1);


	/* 入力を促す2 */
	printf("小数点数値を入力2=");
	scanf("%f", &fi2);

	/* 足し算をして表示	*/
	printf("%.10f+%.10f=%.10f\n", fi1, fi2, fi1+fi2);
}
