#include "lwrb2rtt.h"

#include <rtthread.h>

void lwrb2rtt_example_minimal(void)
{
    /* Declare rb instance & raw data */
    lwrb_t buff;
    uint8_t buff_data[8];

    /* Application code ... */
    lwrb_init(&buff, buff_data, sizeof(buff_data)); /* Initialize buffer */

    /* Write 4 bytes of data */
    lwrb_write(&buff, "0123", 4);

    /* Print number of bytes in buffer */
    rt_kprintf("Bytes in buffer: %d\r\n", (int)lwrb_get_full(&buff));

    /* Will print "4" */
}
MSH_CMD_EXPORT(lwrb2rtt_example_minimal, lwrb minimal example);
