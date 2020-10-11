/* ky101.c */

/* インクルード */
#include <stdio.h>

/* 関数宣言 	*/
void main(void);

/* メイン関数 */
void main(void)
{
	/* 変数の定義	*/
	struct SEITO{
		int nNo;		/* 生徒番号 */
		char sName[20];	/* 生徒名 */
		int nKokugo;	/* 国語の点数 */
		int nSugaku;	/* 数学の点数 */
		int nEigo;		/* 英語の点数 */
		int nSyakai;	/* 社会の点数 */
		int nRika;		/* 理科の点数 */
	};
	struct SEITO ststudent[2] = 
		{{1, "斎藤 明", 80, 65, 20, 33, 100},
		 {2, "阿部 亘", 75, 65, 80, 60, 90}};
	double fave[2];

	/* 個人別に平均点を計算 */
	fave[0] = (ststudent[0].nKokugo+ststudent[0].nSugaku+ststudent[0].nEigo+ststudent[0].nSyakai+ststudent[0].nRika)/5.0;
	fave[1] = (ststudent[1].nKokugo+ststudent[1].nSugaku+ststudent[1].nEigo+ststudent[1].nSyakai+ststudent[1].nRika)/5.0;

	/* 各平均値を表示 */
	printf("%sさんの平均点は、%3.1f点です\n", ststudent[0].sName, fave[0]);
	printf("%sさんの平均点は、%3.1f点です\n", ststudent[1].sName, fave[1]);

}
