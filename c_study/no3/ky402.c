/* ky402.c */

/* インクルード */
#include <stdio.h>

#define mul(x,y) ((x)*(y))
#define dispout(dt) printf("<%s>\nTEST", dt)

/* 関数宣言 */
void main(void);

/* メイン関数 */
void main(void)
{
	char szstr[] = "ABC";
	int ni, n1, n2;

	n1 = 10;
	n2 = 20;
	ni = mul(n1, n2);
	printf("%d*%d=%d\n", n1, n2, ni);

	dispout(szstr);
}
