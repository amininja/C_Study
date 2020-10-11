/* ky302.c */

/* インクルード */
#include <stdio.h>

/* 関数宣言 */
void main(void);

/* メイン関数 */
void main(void)
{
	/* 変数の初期化 */
	int n1;

	/* 数値を入力 */
	printf("0-9を入力:");
	scanf("%d", &n1);

	/* switchによる分岐・表示 */
	switch(n1){
	case 0:
		printf("0を入力");
		break;
	case 1:
		printf("1を入力");
		break;
	case 2:
		printf("2を入力");
		break;
	default:
		printf("0,1,2以外を入力");
		break;
	}
}
