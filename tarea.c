#include <stdio.h>
#include <string.h>
int main(void)
{
	unsigned char nombre1[10] ="julian  ";
	unsigned char nombre2[10];
	unsigned char nombre4[10];
	unsigned char nombre5[10];
	printf(" el primer nombre es: %s\n",nombre1);
	nombre2[0]=nombre1[0] | 0b01100011;
	nombre2[0]=nombre2[0] & 0b01100011;// (j)01101010 or 01100011 => 01101011 and 01100011 = 01100011(c)
	nombre2[1]=nombre1[1] | 0b01110010; 
	nombre2[1]=nombre2[1] & 0b01110010;// (u)01110101 or 01110010 => 01110110 and 01110010 = 01110010(r)
	nombre2[2]=nombre1[2] | 0b00000001;
	nombre2[2]=nombre2[2] & 0b01101001;// (l)01101100 or 00000001 => 01101101 and 01101001 = 01101001(i)
	nombre2[3]=nombre1[3] | 0b00010010;
	nombre2[3]=nombre2[3] & 0b01110011;// (i)01101001 or 00010010 => 01111011 and 01110011 = 01110011(s)
	nombre2[4]=nombre1[4] | 0b00010100; 
	nombre2[4]=nombre2[4] & 0b01110100;// (a)01100001 or 00010100 => 01110101 and 01110100 = 01110100(t)
	nombre2[5]=nombre1[5] | 0b00010001;
	nombre2[5]=nombre2[5] & 0b01101001;// (n)01101110 or 00010001 => 01111111 and 01101001 = 01101001(i)
	nombre2[6]=nombre1[6] | 0b01100001;// ( )00100000 or 01100001 = 01100001(a)
	nombre2[7]=nombre1[7] | 0b01101110;// ( )00100000 or 01101110 = 01101110(n)
	//nombre4[0]=nombre1[0] >> 1;
	//nombre5[0]=nombre1[0] << 1;
	printf ("la nueva palabra es %c",nombre2[0]);
	printf ("%c",nombre2[1]);
	printf ("%c",nombre2[2]);
	printf ("%c",nombre2[3]);
	printf ("%c",nombre2[4]);
	printf ("%c",nombre2[5]);
	printf ("%c",nombre2[6]);
	printf ("%c\n",nombre2[7]);
	//printf ("en corrida es %c\n",nombre4[0]);
	//printf ("en corrida es %c\n",nombre5[0]);
	
	
	
}