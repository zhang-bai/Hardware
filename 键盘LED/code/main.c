#include <reg51.h>
sbit led = P0^0;
void main()
{
    led = 0;
	P1 = 0xA1;
}
