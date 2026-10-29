#ifndef BF_0012B250_BLEND_OPERATION_H
#define BF_0012B250_BLEND_OPERATION_H
#include <string.h>
/* FUN_00233B10 is the existing real C source SSE blend, not a mock.
 * Original 0x0012B250 copies its four output DWORDs through guest ECX
 * from a separate 16-byte result. This shared operation does not assert
 * an original cdecl prototype, guest-register ABI or full x87 parity. */
extern float *FUN_00233b10(float *,float *,float *,float);
static inline float *bf_0012b250_blend_operation(float *output,float *left,float *right,float ratio)
{
    float local_10[4];
    float *src=FUN_00233b10(local_10,left,right,ratio);
    unsigned char raw[16];
    memcpy(raw,src,sizeof raw);
    memcpy(output,raw,sizeof raw);
    return output;
}
#endif
