/* ky101.c */

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
	struct SEITO ststudent[2] = 
		{{1, "�֓� ��", 80, 65, 20, 33, 100},
		 {2, "���� �j", 75, 65, 80, 60, 90}};
	double fave[2];

	/* �l�ʂɕ��ϓ_���v�Z */
	fave[0] = (ststudent[0].nKokugo+ststudent[0].nSugaku+ststudent[0].nEigo+ststudent[0].nSyakai+ststudent[0].nRika)/5.0;
	fave[1] = (ststudent[1].nKokugo+ststudent[1].nSugaku+ststudent[1].nEigo+ststudent[1].nSyakai+ststudent[1].nRika)/5.0;

	/* �e���ϒl��\�� */
	printf("%s����̕��ϓ_�́A%3.1f�_�ł�\n", ststudent[0].sName, fave[0]);
	printf("%s����̕��ϓ_�́A%3.1f�_�ł�\n", ststudent[1].sName, fave[1]);

}
