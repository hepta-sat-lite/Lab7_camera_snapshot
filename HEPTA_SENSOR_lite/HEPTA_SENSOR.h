#ifndef MBED_HEPTASENSOR_H
#define MBED_HEPTASENSOR_H
//#include "HeptaCamera_GPS.h"
#include "Hepta6axis.h"
#include "HeptaTemp.h"
#include "HeptaCamera_GPS.h"

class HEPTA_SENSOR : public Hepta6axis, public HeptaTemp, public HeptaCamera_GPS
{
public:
    HEPTA_SENSOR(
        /*PinName tx,PinName rx,PinName sw1,PinName sw2,
        PinName sda,PinName scl,int aaddr,int agaddr,
        PinName adcon*/
        PinName adcon,
        PinName sda,PinName scl,int aaddr,
        PinName tx,PinName rx,PinName AN_SW
        //PinName tx,PinName rx,PinName sw1,PinName sw2
    );

private:
};

#endif