/* One original-XBE-verified virtual chain. No universal object/method claim.
 * 0x0022D3A3: MOV [ESI+0x48],0x0039ADEC
 * [0x0039ADEC+0x14]=0x00059A50 (verified XBE data word)
 * 0x00059A50: MOV EAX,[ECX]; JMP DWORD PTR [EAX+4]
 * [0x0039ADEC+4]=0x0010F890 (verified XBE data word)
 * 0x0010F890: LEA EAX,[ECX-0x48]; RET
 * All addresses are guest32. Other valid object tables are unresolved.
 */
#ifndef BF_00155840_CONCRETE_VIRTUAL_H
#define BF_00155840_CONCRETE_VIRTUAL_H
#include "bf_00155840_virtual_621c0.h"
#define BF_00155840_KNOWN_SUBOBJECT_TABLE UINT32_C(0x0039adec)
#define BF_00155840_KNOWN_METHOD_ENTRY UINT32_C(0x00059a50)
#define BF_00155840_KNOWN_METHOD_IMPL UINT32_C(0x0010f890)
static inline bool bf_00155840_known_matrix_virtual(void *ctx,
    uint32_t target_va, uint32_t receiver_ecx, uint32_t *eax_after_call)
{
    const bf_621c0_guest_words *const mem = (const bf_621c0_guest_words *)ctx;
    uint32_t table, next;
    if (!mem || !mem->read_u32 || !eax_after_call ||
        target_va != BF_00155840_KNOWN_METHOD_ENTRY)
        return false;
    if (!mem->read_u32(mem->ctx,receiver_ecx,&table) ||
        table != BF_00155840_KNOWN_SUBOBJECT_TABLE)
        return false;
    if (!mem->read_u32(mem->ctx,table + UINT32_C(4),&next) ||
        next != BF_00155840_KNOWN_METHOD_IMPL)
        return false;
    *eax_after_call = receiver_ecx - UINT32_C(0x48);
    return true;
}
#endif
