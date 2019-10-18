#include <stdio.h>
#include <stdlib.h>
#include "numberParser.h"
int main() {
	const char* str={"102e3,0b10101111,0555,2.4e10"};
	int pos=0;
	int len=0;
	printf("val:%f\n",numberParserParseDouble(str,&len));
	pos+=len+1; //skip ','
	printf("val:%li\n",numberParserParseInt(str+pos,&len));
	pos+=len+1; //skip ','
	printf("val:%li\n",numberParserParseInt(str+pos,&len));
	pos+=len+1;//skip ','
	printf("val:%f\n",numberParserParseDouble(str+pos,&len));
	return EXIT_SUCCESS;
}