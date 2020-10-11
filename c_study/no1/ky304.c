/* ky304.c */

/* インクルード */
#include <stdio.h>

/* 関数宣言 */
void main(void);

/* メイン関数 */
void main(void)
{
	/* 変数の定義 */
	char sz1[50] = {'H', 'e', 'l', 'l', 'o', '\0'};

	/* sz1の内容を表示 */
	printf("%s\n", sz1);

	/* sz1の1番目のアドレスを表示 */
	printf("%x\n", &sz1[0]);

	/* sz1のポインタを表示 */
	printf("%x\n", sz1);
}
