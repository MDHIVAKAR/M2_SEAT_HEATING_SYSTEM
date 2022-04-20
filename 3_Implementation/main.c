#include <avr/io.h>
#include <util/delay.h>
#include <string.h>
#include"./inc/led.h"
#include"./inc/user_utils.h"
#include"./inc/ADCREAD.h"
#include"./inc/pwmo.h"
#include"./inc/display.h"

void led();
int main(void)
{
    while(1)
    {
        pwmo();
    }
    return 0;
}
