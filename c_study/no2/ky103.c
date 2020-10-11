/* ky103.c */

/* インクルード */
#include <stdio.h>

/* 関数宣言 	*/
void main(void);

/* メイン関数 */
void main(void)
{
	/* 変数の定義	*/
	union TEST{
		char szCode[20];
		char szCode1[5];
		char szCode2[2];
	} unTest;

	/* 変数の初期値をセット */
	sprintf(unTest.szCode, "1234567890ABCDEFGHI");

	/* 各メンバを表示 */
	printf("Code = <%.20s>\n", unTest.szCode);
	printf("Code1 = <%.5s>\n", unTest.szCode1);
	printf("Code2 = <%.2s>\n", unTest.szCode2);

	/* Code1[0]を'Z'に変えるとどうなるか */
	unTest.szCode1[0] = 'Z';

	/* 各メンバを表示 */
	printf("Code = <%.20s>\n", unTest.szCode);
	printf("Code1 = <%.5s>\n", unTest.szCode1);
	printf("Code2 = <%.2s>\n", unTest.szCode2);
}
