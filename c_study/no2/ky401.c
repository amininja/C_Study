/* ky401.c */

/* インクルード */
#include <stdio.h>

/* 関数宣言 */
void main(void);

/* メイン関数 */
void main(void)
{
	int n1, n2[5], nt;

	/* n2の初期設定 */
	for(n1 = 0;n1 < 5;n1++){
		/* 数値を入力 */
		printf("%d/5回目：0-100を入力:", n1+1);
		scanf("%d", &n2[n1]);
	}

	/* 合計を計算 */
	for(n1 = 0, nt = 0;n1 < 5;n1++)
		nt += n2[n1];

	/* 合計を表示 */
	printf("入力された値の合計=%d", nt);
}
