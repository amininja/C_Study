/* ky302.c */

/* インクルード */
#include <stdio.h>

/* 関数宣言 */
void main(void);

/* メイン関数 */
void main(void)
{
	/* 変数の定義 */
	char sz1[50] = {'H', 'e', 'l', 'l', 'o', '\0'};

	/* sz1の内容を表示*/
	printf("%s\n", sz1);

	/* sz1の4番目以降の内容を表示*/
	printf("%s\n", &sz1[3]);
}
