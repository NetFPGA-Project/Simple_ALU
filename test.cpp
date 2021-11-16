#include <ap_int.h>
#include <stdio.h>

ap_uint<20> simpleALU(ap_uint<20> ina, ap_uint<20> inb, ap_uint<1> op);


int main()
{

	ap_uint<20> ina= 10;
	ap_uint<20> inb= 9;

	printf("Reference\n");
	printf("SUM inb + ina = %d \n", (unsigned int)ina  + (unsigned int)inb);
	printf("SUB ina - inb = %d \n", (unsigned int)ina - (unsigned int)inb);

	ap_uint<20> result1 = simpleALU(ina,inb,1);
	ap_uint<20> result2 = simpleALU(ina,inb,0);

	printf("From simpleALU\n");
	printf("SUM inb + ina = %d \n", (unsigned int)result1);
    printf("SUB ina - inb = %d \n", (unsigned int)result2);





}
