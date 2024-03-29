#ifndef ZGLX_ZK_FROM_XK_H
#define ZGLX_ZK_FROM_XK_H

#include "zglx.h"
#include <stdint.h>
#include <X11/Xlib.h>
#include "../zigil_input.h"

extern void init_LK_from_XK(void);
extern zgl_LongKeyCode LK_from_XK(uint32_t XK);
extern zgl_KeyCode ZK_from_XK(uint32_t XK);
extern void shut_LK_from_XK(void);
    
#endif /* ZGLX_ZK_FROM_XK_H */
