/* ky204.c */

/* �C���N���[�h */
#include <stdio.h>

/* �O���[�o���ϐ� */
FILE *Fp1;

/* �֐��錾 */
void main(void);
void test_rewind(void);
void test_clearerr(void);

/* ���C���֐� */
void main(void)
{
	char szfname1[] = "ky204.c";

	Fp1 = fopen(szfname1, "rb");
	if (Fp1 == NULL){
		printf("�t�@�C���̃I�[�v���Ɏ��s���܂���");
		return;
	}

	test_rewind();
	test_clearerr();

	fclose(Fp1);
}

void test_rewind(void)
{
	char szdata[81];

	while(1){
		fgets(szdata, 80, Fp1);
		if (feof(Fp1)){
			printf("�Ō�܂ŕ\�����܂���\n");
			break;
		}
	}

	rewind(Fp1);

	printf("rewind:���݂̃t�@�C���|�W�V����%ld\n", ftell(Fp1));
}

void test_clearerr(void)
{
	char szdata[81];

	while(1){
		fgets(szdata, 80, Fp1);
		if (feof(Fp1)){
			printf("�Ō�܂ŕ\�����܂���\n");
			break;
		}
	}

	clearerr(Fp1);

	printf("clearerr:���݂̃t�@�C���|�W�V����%ld", ftell(Fp1));
}

