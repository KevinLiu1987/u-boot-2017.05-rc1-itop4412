#include <common.h>
#include <config.h>
#include <asm/io.h>

void s_init(void)
{
#if 0 
    writel(readl(0x1002330c) | 0x300, 0x1002330c);
    writel(0, 0x11000c08);
    
    /* led test */
    writel(0x10, 0x11000060);
    writel(0x2, 0x11000064);
    
    writel(0x1, 0x11000100);
    writel(0x1, 0x11000104);
#endif
}

#if 0
ENTRY(led_debug)
	ldr r0, =0x1002330c
	orr r0, r0, #0x300
	ldr r0, =0x11000c08
	ldr r1, =0x0
	str r1, [r0]
	
	ldr r0, =0x11000060
	ldr r1, =0x10
	str r1, [r0]
	ldr r0, =0x11000064
	ldr r1, =0x2
	str r1, [r0]
	
	ldr r0, =0x11000100
	ldr r1, =0x1
	str r1, [r0]
	ldr r0, =0x11000104
	ldr r1, =0x1
	str r1, [r0]
ENDPROC(led_debug)
#endif
