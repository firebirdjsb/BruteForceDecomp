/* One original-XBE-verified virtual chain. No universal object/method claim.
 * 0x0022D3A3: MOV [ESI+0x48],0x0039ADEC
 * [0x0039ADEC+0x14]=0x00059A50 (verified XBE data word)
 * 0x00059A50: MOV EAX,[ECX]; JMP DWORD PTR [EAX+4]
 * [0x0039ADEC+4]=0x0010F890 (verified XBE data word)
 * 0x0010F890: LEA EAX,[ECX-0x48]; RET
 * Primary table words at the returned base are written by these original
 * constructor/destructor paths: 22D39D=394340,149F50/14A026=39B508,
 * 162ECE=39A8E0. These are layout guards, NOT matrix-data validation.
 * 621C0 subsequently reads raw DWORDs at returned base+00..2C, including
 * that primary-table word. Never overwrite it with a synthetic float 1.
 * All addresses are guest32. Other valid object tables are unresolved.
 */
#ifndef BF_00155840_CONCRETE_VIRTUAL_H
#define BF_00155840_CONCRETE_VIRTUAL_H
#include "bf_00155840_virtual_621c0.h"
#define BF_00155840_KNOWN_SUBOBJECT_TABLE UINT32_C(0x0039adec)
#define BF_00155840_KNOWN_METHOD_ENTRY UINT32_C(0x00059a50)
#define BF_00155840_KNOWN_METHOD_IMPL UINT32_C(0x0010f890)
#define BF_00155840_PRIMARY_22D330 UINT32_C(0x00394340)
#define BF_00155840_PRIMARY_149F10 UINT32_C(0x0039b508)
#define BF_00155840_PRIMARY_162E90 UINT32_C(0x0039a8e0)
static inline bool bf_00155840_known_matrix_virtual(void *ctx,
    uint32_t target_va, uint32_t receiver_ecx, uint32_t *eax_after_call)
{
    const bf_621c0_guest_words *const mem = ctx;
    uint32_t table, next, primary;
    if (!mem || !mem->read_u32 || !eax_after_call ||
        target_va != BF_00155840_KNOWN_METHOD_ENTRY)
        return false;
    if (!mem->read_u32(mem->ctx,receiver_ecx,&table) ||
        table != BF_00155840_KNOWN_SUBOBJECT_TABLE)
        return false;
    if (!mem->read_u32(mem->ctx,table + UINT32_C(4),&next) ||
        next != BF_00155840_KNOWN_METHOD_IMPL)
        return false;
    /* Guard the supported primary-table layouts before advertising the
     * recovered base. This compatibility check is stricter than the original
     * dispatch and does not establish provenance/initialization of its data. */
    if (!mem->read_u32(mem->ctx,receiver_ecx-UINT32_C(0x48),&primary) ||
        (primary != BF_00155840_PRIMARY_22D330 &&
         primary != BF_00155840_PRIMARY_149F10 &&
         primary != BF_00155840_PRIMARY_162E90))
        return false;
    *eax_after_call = receiver_ecx - UINT32_C(0x48);
    return true;
}
#endif
