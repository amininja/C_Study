/* ky403.c */

#define TEST

/* インクルード */
#include <stdio.h>

/* 関数宣言 */
void main(void);

/* メイン関数 */
void main(void)
{
    char sztext[80];

#ifdef TEST
	sprintf(sztext, "DEBUG");
#else
	sprintf(sztext, "RELEASE");
#endif

	printf(sztext);

}
