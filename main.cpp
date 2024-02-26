#include "HEPTA_SENSOR.h"
#include "mbed.h"
#include "HEPTA_CDH.h"
#include "HEPTA_EPS.h"
#include "HEPTA_SENSOR.h"

HEPTA_CDH cdh(PB_5, PB_4, PB_3, PA_8, "sd");
RawSerial pc(USBTX,USBRX,9600);
HEPTA_EPS eps(PA_0,PA_4);
HEPTA_SENSOR sensor(PA_7,PB_7,PB_6,0xD0,PA_9,PA_10,PA_3);

int main()
{
    //eps.turn_on_regulator();
    pc.printf("Camera Snapshot Mode\r\n");
    pc.printf("Hit Any Key To Take Picture\r\n");
    //while(!pc.readable()) {}
    sensor.Sync();
    sensor.initialize(HeptaCamera_GPS::Baud115200, HeptaCamera_GPS::JpegResolution320x240);
    sensor.test_jpeg_snapshot_picture("/sd/202401.jpg");
}
