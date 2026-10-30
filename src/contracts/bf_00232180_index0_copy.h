/* Index-zero memory writes from original 0x00232180 after its cache check.
 * Caller must first perform the observed refresh when object+0x225 bit 0
 * is clear. ESI/EDI identify two 12-byte destinations; EBX identifies the
 * object. This helper binds only the proven index-zero caller, not RET 4,
 * the refresh ABI, register entry state or guest-address translation.
 * Do not preload all six words: EDI may overlap later ESI source words.
 */
#ifndef BF_00232180_INDEX0_COPY_H
#define BF_00232180_INDEX0_COPY_H
#include <stdint.h>
#include <string.h>
static inline void bf_00232180_index0_copy(void *esi_output, void *edi_output,
                                         const void *ebx_object)
{
    const unsigned char *source = (const unsigned char *)ebx_object;
    unsigned char *esi = (unsigned char *)esi_output;
    unsigned char *edi = (unsigned char *)edi_output;
    uint32_t first, second, third;
    /* 0x232199..0x2321bd: read +234,+230,+22c; write +0,+8,+4. */
    memcpy(&third, source + 0x234, 4);
    memcpy(&second, source + 0x230, 4);
    memcpy(&first, source + 0x22c, 4);
    memcpy(edi, &first, 4);
    memcpy(edi + 8, &third, 4);
    memcpy(edi + 4, &second, 4);
    /* 0x2321c0..0x2321e9: read +260,+264,+25c; write +0,+4,+8. */
    memcpy(&second, source + 0x260, 4);
    memcpy(&third, source + 0x264, 4);
    memcpy(&first, source + 0x25c, 4);
    memcpy(esi, &first, 4);
    memcpy(esi + 4, &second, 4);
    memcpy(esi + 8, &third, 4);
}
#endif
