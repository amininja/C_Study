/* ky404.c */

/* インクルード */
#include <stdio.h>

/* 関数宣言 */
void main(void);

/* メイン関数 */
void main(void)
{
	/* 変数の定義 */
	char sz1[] = "ABCDEF";
	char sz2[] = "UVWXYZ";
	char *p1[2];
    int n1;

    p1[0] = sz1;
    p1[1] = sz2;

	/* 何番目の配列がみたいか */
	printf("0か1を入力:");
 	scanf("%d", &n1);

    printf("%s\n", p1[n1]);
}
