/* ky402.c */

/* インクルード */
#include <stdio.h>

/* 関数宣言 */
void main(void);

/* メイン関数 */
void main(void)
{
	char c1[80];

	c1[0] = 0x00;

	/* 入力確認 */
	while (c1[0] != 'Y' && c1[0] != 'y'){
		printf("Y or yを入力:");
		scanf("%s", c1);
	}

	printf("%c が入力されました", c1[0]);
}
