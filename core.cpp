#include <ap_int.h>

ap_uint<20> simpleALU(ap_uint<20> ina, ap_uint<20> inb, ap_uint<1> op)
{


#pragma HLS INTERFACE s_axilite port=return
#pragma HLS INTERFACE s_axilite port=ina
#pragma HLS INTERFACE s_axilite port=inb
#pragma HLS INTERFACE s_axilite port=op




	if(op == 1)
	{
		return ina + inb;
	}

	return ina - inb;
}
