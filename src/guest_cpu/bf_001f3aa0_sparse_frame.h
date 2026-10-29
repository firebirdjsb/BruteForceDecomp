/* 0x001F3B4A..0x001F3B62 from authenticated original Xbox Brute Force.
 * Observed: LEA EAX,[ESP+0xB0]; ECX=0x100; MOV [EAX],0;
 * ADD EAX,0x20; DEC ECX; JNE. This is *not* memset.
 * The actual ESP must be the live guest ESP at original 0x001F3B4A,
 * after preceding calls; do not substitute function-entry ESP.
 */
#ifndef BF_001F3AA0_SPARSE_FRAME_H
#define BF_001F3AA0_SPARSE_FRAME_H
#include "bf_002ebea0_guest_chkstk.h"

typedef struct bf_001f3aa0_sparse_result {
    bf_002ebea0_status status;
    uint32_t written;
    uint32_t fault_address;
    uint32_t final_eax;
} bf_001f3aa0_sparse_result;

static inline bf_001f3aa0_sparse_result bf_001f3aa0_write_sparse_frame(
    const bf_002ebea0_guest_mem *mem, uint32_t live_guest_esp)
{
    bf_001f3aa0_sparse_result r={BF_002EBEA0_INVALID_IO,0,0,0};
    if(!mem || !mem->write_dword) return r;
    uint32_t address=live_guest_esp+UINT32_C(0xb0);
    for(uint32_t ecx=UINT32_C(0x100);ecx!=0u;--ecx){
        if(!mem->write_dword(mem->context,address,0u)){
            r.status=BF_002EBEA0_WRITE_FAULT;
            r.fault_address=address;
            r.final_eax=address;
            return r;
        }
        ++r.written;
        address+=UINT32_C(0x20);
    }
    r.final_eax=address;
    r.status=BF_002EBEA0_OK;
    return r;
}
#endif
