/* ky206.c */

/* インクルード */
#include <stdio.h>

/* 関数宣言 */
void main(void);

/* メイン関数 */
void main(void)
{
	/* 変数の定義 */
	char c1;
	int n1;

	/* 入力を促す */
	printf("1文字入力=");
	scanf("%c", &c1);

	/* 入力を促す */
	printf("加算する数字を入力=");
	scanf("%d", &n1);

	/* 文字に数値を加算して表示	*/
	printf("文字(%c)+数値(%d) = %c\n", c1, n1, c1+n1);
}
