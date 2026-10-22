/* Brute Force original Xbox: construct a tagged byte record.
 * Entry: 0x00349366
 * Input x86 body SHA-256: 327EB0E73F75FB3D50A148A1166C6C1CADCB731A12A3DD5FA96CA70E2C63764C
 * Observed incoming ECX + 6 stack words; ret 24. C11 model, not
 * established original source / complete runtime-equivalent implementation.
 */
#include "bf_xnet_record_x86.h"
/* Original Xbox x86 little-endian DWORD copies, in forward granularity.
 * A single bulk memcpy could change the behavior if source/dest overlap. */
static uint32_t get_le32(const uint8_t *p)
{
    return (uint32_t)p[0] | ((uint32_t)p[1] << 8) |
           ((uint32_t)p[2] << 16) | ((uint32_t)p[3] << 24);
}
static void put_le32(uint8_t *p,uint32_t v)
{
    p[0]=(uint8_t)v;p[1]=(uint8_t)(v>>8);
    p[2]=(uint8_t)(v>>16);p[3]=(uint8_t)(v>>24);
}
static void put_le16(uint8_t *p,uint16_t v)
{
    p[0]=(uint8_t)v;p[1]=(uint8_t)(v>>8);
}
static void copy_x86_forward(uint8_t *dst,const uint8_t *src,uint32_t len)
{
    uint32_t words=len>>2;
    uint32_t tail=len & UINT32_C(3);
    while (words-- != 0) {
        const uint32_t value=get_le32(src);
        put_le32(dst,value);
        src+=4;dst+=4;
    }
    while (tail-- != 0) *dst++=*src++;
}
/* The descriptive names below reflect observed byte movements/arguments,
 * NOT a recovered XNET wire protocol or source-level class layout. */
void BF_X86_CONTEXTCALL FUN_00349366(
    void *incoming_ecx_context,
    const void *first_stack_arg,
    uint16_t header_tag,
    const void *first_bytes,
    uint32_t first_byte_count,
    const void *second_bytes,
    uint32_t second_byte_count)
{
    const uint32_t total=first_byte_count+second_byte_count+UINT32_C(4);
    const uintptr_t handle=FUN_0034cb5a(
        UINT32_C(0x7654454e),UINT32_C(0x40004),total,0,0,0);
    if (handle==0) return;
    const uint32_t field=get_le32((const uint8_t *)first_stack_arg+4);
    FUN_00347fe3(incoming_ecx_context,handle,field,0);
    uint8_t *data=(uint8_t *)FUN_0034c932(handle);
    put_le16(data,header_tag);
    put_le16(data+2,(uint16_t)total);
    if (first_byte_count!=0)
        copy_x86_forward(data+4,(const uint8_t *)first_bytes,first_byte_count);
    if (second_byte_count!=0)
        copy_x86_forward(data+4+first_byte_count,
                         (const uint8_t *)second_bytes,second_byte_count);
    FUN_00348e95(incoming_ecx_context,handle,first_stack_arg,0);
}
