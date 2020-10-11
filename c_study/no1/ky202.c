/* ky202.c */

/* インクルード */
#include <stdio.h>

/* 関数宣言 */
void main(void);

/* メイン関数 */
void main(void)
{
	/* 変数の定義 */
	char c1,c2,c3,c4;

	/* 定数を変数にセット*/
	c1 = 0x41;
	c2 = 'A';
	c3 = '\t';
	c4 = '\\';

	/* 変数を出力 */
	printf("0x41 = %c\n", c1);
	printf("A= %d\n", c2);
	printf("TABの動作=%c<TAB>\n", c3);
	printf("\\記号の表示=%c\n", c4);
}
