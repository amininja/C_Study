/* ky201.c */

/* �C���N���[�h */
#include <stdio.h>

/* GLOBAL�ϐ� */
FILE *Fp1;


/* �֐��錾 */
void main(void);
void disp_list(void);
void change_data(int, char);

/* ���C���֐� */
void main(void)
{
	char szfname1[] = "ky201.dat";
	char c_change;
	int ni;

	Fp1 = fopen(szfname1, "r+b");
	if (Fp1 == NULL){
		printf("�t�@�C���P�̃I�[�v���Ɏ��s���܂���");
		return;
	}

	/* �ꗗ�\�� */
	disp_list();

	/* ���[�U�[�ɒu�������ʒu�ƕ������w�肳���� */
	printf("���Ԗڂ̃f�[�^��u�������܂����H");
	scanf("%d%*[^\n]", &ni);
	scanf("%*c");

	printf("�u�������镶���́H");
	scanf("%c%*[^\n]", &c_change);
	scanf("%*c");

	printf("%d�Ԗڂ̕�����%c�ɒu�������܂�\n", ni, c_change);

	/* �f�[�^�ύX */
	change_data(ni, c_change);

	/* �ꗗ�\�� */
	printf("\n�u�����������ʂł�\n");
	disp_list();

	fclose(Fp1);
}

/* �ꗗ�\�� */
void disp_list(void)
{
	char szdata[81];

	fseek(Fp1, 0L, SEEK_SET);

	fgets(szdata, 80, Fp1);
	printf("�t�@�C���̓��e->%s\n", szdata);
}

/* �w��ꏊ�̕�����ύX */
void change_data(int npos, char cdata)
{
	fseek(Fp1, (long)npos-1, SEEK_SET);

	fputc(cdata, Fp1);
}

