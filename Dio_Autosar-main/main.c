



#include "DIO/DIO.h"
#include "Port/Port.h"




int main(void)
{

    Dio_Init();
    Dio_WriteChannel(15, HIGH);


    while(1)
    {


    }
}
