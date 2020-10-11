/* ky301.c */

/* インクルード */
#include <stdio.h>

/* 関数宣言 */
void main(void);

/* メイン関数 */
void main(void)
{
	/* 変数の定義 */
	char sz1[50] = {'H', 'e', 'l', 'l', 'o', '\0'};

	/* 現在のsz1の内容を表示*/
	printf("%s\n", sz1);

	/* 名前を入力 */
	printf("名前を入れて(MAX49バイト)：");
	scanf("%s", sz1);

	printf("あなたの名前は、%sさん ですね\n", sz1);
}
