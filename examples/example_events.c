#include "lwrb2rtt.h"

#include <rtthread.h>

/**
 * \brief           Buffer event function
 */
void
my_buff_evt_fn(lwrb_t *buff, lwrb_evt_type_t type, size_t len)
{
    switch (type)
    {
    case LWRB_EVT_RESET:
        rt_kprintf("[EVT] Buffer reset event!\r\n");
        break;
    case LWRB_EVT_READ:
        rt_kprintf("[EVT] Buffer read event: %d byte(s)!\r\n", (int)len);
        break;
    case LWRB_EVT_WRITE:
        rt_kprintf("[EVT] Buffer write event: %d byte(s)!\r\n", (int)len);
        break;
    default:
        break;
    }
}

void lwrb2rtt_example_events(void)
{
    /* Later in the code... */
    lwrb_t buff;
    uint8_t buff_data[8];

    /* Init buffer and set event function */
    lwrb_init(&buff, buff_data, sizeof(buff_data));
    lwrb_set_evt_fn(&buff, my_buff_evt_fn);

    /* Write 4 bytes of data */
    lwrb_write(&buff, "0123", 4);

    /* Print number of bytes in buffer */
    rt_kprintf("Bytes in buffer: %d\r\n", (int)lwrb_get_full(&buff));

    /* Will print "4" */

    lwrb_write(&buff, "0123", 4);
    lwrb_reset(&buff);
}
MSH_CMD_EXPORT(lwrb2rtt_example_events, lwrb events example);


