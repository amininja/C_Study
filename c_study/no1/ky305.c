/* ky305.c */

/* インクルード */
#include <stdio.h>

/* 関数宣言 */
void main(void);

/* メイン関数 */
void main(void)
{
	/* 変数の定義 */
	char sz1[50] = {'H', 'e', 'l', 'l', 'o', '1', '\0'};
	char *p1 = "Hello2";

	/* ポインタsz1の内容を表示*/
	printf("%s\n", sz1);
	/* ポインタp1の内容を表示*/
	printf("%s\n", p1);
}
