/* ky205.c */
 
/* インクルード	*/
#include <stdio.h>

/* 関数宣言 */
void main(void);

/* メイン関数 */
void main(void)
{
	/* 変数の定義 */
	char c1;

	/* 入力を促す */
	printf("1文字入力=");
	scanf("%c", &c1);

	/* 入力文字と数値を表示	*/
	printf("%c(%x) = %d\n", c1, c1, c1);
}
