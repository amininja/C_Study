/* ky102.c */

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
	struct GAKUNEN{
		int nNen;		/* 学年 */
		int nKumi;		/* 組 */
		int nCount;		/* 生徒数 */
		struct SEITO ststudent[2];
	} stgakunen[1];
	double fave[2];

	/* 変数の初期値をセット */
	stgakunen[0].nNen = 1;
	stgakunen[0].nKumi = 1;
	stgakunen[0].nCount = 2;
	stgakunen[0].ststudent[0].nNo = 1;
	sprintf(stgakunen[0].ststudent[0].sName, "斎藤 明");
	stgakunen[0].ststudent[0].nKokugo = 80;
	stgakunen[0].ststudent[0].nSugaku = 65;
	stgakunen[0].ststudent[0].nEigo = 20;
	stgakunen[0].ststudent[0].nSyakai = 33;
	stgakunen[0].ststudent[0].nRika = 100;
	stgakunen[0].ststudent[1].nNo = 2;
	sprintf(stgakunen[0].ststudent[1].sName, "阿部 亘");
	stgakunen[0].ststudent[1].nKokugo = 75;
	stgakunen[0].ststudent[1].nSugaku = 65;
	stgakunen[0].ststudent[1].nEigo = 80;
	stgakunen[0].ststudent[1].nSyakai = 60;
	stgakunen[0].ststudent[1].nRika = 90;

	/* 個人別に平均点を計算 */
	fave[0] = (stgakunen[0].ststudent[0].nKokugo+stgakunen[0].ststudent[0].nSugaku+stgakunen[0].ststudent[0].nEigo+stgakunen[0].ststudent[0].nSyakai+stgakunen[0].ststudent[0].nRika)/5.0;
	fave[1] = (stgakunen[0].ststudent[1].nKokugo+stgakunen[0].ststudent[1].nSugaku+stgakunen[0].ststudent[1].nEigo+stgakunen[0].ststudent[1].nSyakai+stgakunen[0].ststudent[1].nRika)/5.0;

	/* 各平均値を表示 */
	printf("%d年%d組の%sさんの平均点は、%3.1f点です\n",
		stgakunen[0].nNen, stgakunen[0].nKumi, stgakunen[0].ststudent[0].sName, fave[0]);
	printf("%d年%d組の%sさんの平均点は、%3.1f点です\n",
		stgakunen[0].nNen, stgakunen[0].nKumi, stgakunen[0].ststudent[1].sName, fave[1]);
}
