/* ky103.c */

/* �C���N���[�h */
#include <stdio.h>

/* �֐��錾 	*/
void main(void);

/* ���C���֐� */
void main(void)
{
	/* �ϐ��̒�`	*/
	union TEST{
		char szCode[20];
		char szCode1[5];
		char szCode2[2];
	} unTest;

	/* �ϐ��̏����l���Z�b�g */
	sprintf(unTest.szCode, "1234567890ABCDEFGHI");

	/* �e�����o��\�� */
	printf("Code = <%.20s>\n", unTest.szCode);
	printf("Code1 = <%.5s>\n", unTest.szCode1);
	printf("Code2 = <%.2s>\n", unTest.szCode2);

	/* Code1[0]��'Z'�ɕς���Ƃǂ��Ȃ邩 */
	unTest.szCode1[0] = 'Z';

	/* �e�����o��\�� */
	printf("Code = <%.20s>\n", unTest.szCode);
	printf("Code1 = <%.5s>\n", unTest.szCode1);
	printf("Code2 = <%.2s>\n", unTest.szCode2);
}
