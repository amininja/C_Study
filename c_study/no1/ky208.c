/* ky208.c */

/* インクルード */
#include <stdio.h>

/* 関数宣言 	*/
void main(void);

/* メイン関数 */
void main(void)
{
	/* 変数の定義	*/
	char c1, c2;

	/* 変数に数値を代入 */
	c1 = 0x15;
	c2 = 0xF1;

	/* 各論理演算結果を表示 */
	printf("0x15 AND 0xF1=%02x\n", (char)(c1&c2));
	printf("0x15 OR 0xF1=%02x\n", (char)(c1|c2));
	printf("NOT 0x15=%02x\n", (char)(~c1));
	printf("0x15 XOR 0xF1=%02x\n", (char)(c1^c2));
	printf("0x15 NAND 0xF1=%02x\n", (char)(~(c1&c2)));
	printf("0x15 NOR 0xF1=%02x\n", (char)(~(c1|c2)));
}
