/* ky208.c */

/* �C���N���[�h */
#include <stdio.h>

/* �֐��錾 	*/
void main(void);

/* ���C���֐� */
void main(void)
{
	/* �ϐ��̒�`	*/
	char c1, c2;

	/* �ϐ��ɐ��l���� */
	c1 = 0x15;
	c2 = 0xF1;

	/* �e�_�����Z���ʂ�\�� */
	printf("0x15 AND 0xF1=%02x\n", (char)(c1&c2));
	printf("0x15 OR 0xF1=%02x\n", (char)(c1|c2));
	printf("NOT 0x15=%02x\n", (char)(~c1));
	printf("0x15 XOR 0xF1=%02x\n", (char)(c1^c2));
	printf("0x15 NAND 0xF1=%02x\n", (char)(~(c1&c2)));
	printf("0x15 NOR 0xF1=%02x\n", (char)(~(c1|c2)));
}
