/* ky403.c */

/* インクルード */
#include <stdio.h>

/* 関数宣言 */
void main(void);

/* メイン関数 */
void main(void)
{
	/* 変数の定義 */
	char sz1[] = "ABCDEF";
	char *p1;
	int n1;

	p1 = sz1;

	/* 何番目の配列がみたいか */
	printf("何番目の文字から表示？ (1-6):");
	scanf("%d", &n1);

	/* ポインタを移動し、そのポインタが示す文字列を表示 */
	p1+=n1-1;
	printf("(%d文字目から表示)%s\n", n1, p1);
}
