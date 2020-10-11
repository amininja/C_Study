/* ky203.c */

/* インクルード */
#include <stdio.h>

/* 関数宣言 */
void main(void);

/* メイン関数 */
void main(void)
{
	/* 変数の定義 */
	int ni;

	/* 数字の入力を促す */
	printf("数値を入力=");
	scanf("%d", &ni) ;

	/* 10,16,8進数で表示 */
	printf("10進数=%d\n", ni);
	printf("16進数=%x\n", ni);
	printf(" 8進数=%o\n", ni);
}
