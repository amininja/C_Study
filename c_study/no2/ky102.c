/* ky102.c */

/* �C���N���[�h */
#include <stdio.h>

/* �֐��錾 	*/
void main(void);

/* ���C���֐� */
void main(void)
{
	/* �ϐ��̒�`	*/
	struct SEITO{
		int nNo;		/* ���k�ԍ� */
		char sName[20];	/* ���k�� */
		int nKokugo;	/* ����̓_�� */
		int nSugaku;	/* ���w�̓_�� */
		int nEigo;		/* �p��̓_�� */
		int nSyakai;	/* �Љ�̓_�� */
		int nRika;		/* ���Ȃ̓_�� */
	};
	struct GAKUNEN{
		int nNen;		/* �w�N */
		int nKumi;		/* �g */
		int nCount;		/* ���k�� */
		struct SEITO ststudent[2];
	} stgakunen[1];
	double fave[2];

	/* �ϐ��̏����l���Z�b�g */
	stgakunen[0].nNen = 1;
	stgakunen[0].nKumi = 1;
	stgakunen[0].nCount = 2;
	stgakunen[0].ststudent[0].nNo = 1;
	sprintf(stgakunen[0].ststudent[0].sName, "�֓� ��");
	stgakunen[0].ststudent[0].nKokugo = 80;
	stgakunen[0].ststudent[0].nSugaku = 65;
	stgakunen[0].ststudent[0].nEigo = 20;
	stgakunen[0].ststudent[0].nSyakai = 33;
	stgakunen[0].ststudent[0].nRika = 100;
	stgakunen[0].ststudent[1].nNo = 2;
	sprintf(stgakunen[0].ststudent[1].sName, "���� �j");
	stgakunen[0].ststudent[1].nKokugo = 75;
	stgakunen[0].ststudent[1].nSugaku = 65;
	stgakunen[0].ststudent[1].nEigo = 80;
	stgakunen[0].ststudent[1].nSyakai = 60;
	stgakunen[0].ststudent[1].nRika = 90;

	/* �l�ʂɕ��ϓ_���v�Z */
	fave[0] = (stgakunen[0].ststudent[0].nKokugo+stgakunen[0].ststudent[0].nSugaku+stgakunen[0].ststudent[0].nEigo+stgakunen[0].ststudent[0].nSyakai+stgakunen[0].ststudent[0].nRika)/5.0;
	fave[1] = (stgakunen[0].ststudent[1].nKokugo+stgakunen[0].ststudent[1].nSugaku+stgakunen[0].ststudent[1].nEigo+stgakunen[0].ststudent[1].nSyakai+stgakunen[0].ststudent[1].nRika)/5.0;

	/* �e���ϒl��\�� */
	printf("%d�N%d�g��%s����̕��ϓ_�́A%3.1f�_�ł�\n",
		stgakunen[0].nNen, stgakunen[0].nKumi, stgakunen[0].ststudent[0].sName, fave[0]);
	printf("%d�N%d�g��%s����̕��ϓ_�́A%3.1f�_�ł�\n",
		stgakunen[0].nNen, stgakunen[0].nKumi, stgakunen[0].ststudent[1].sName, fave[1]);
}
