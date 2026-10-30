/* Brute Force original Xbox 0x001F35B0 early-return guest paths.
 * Stops at 0x001F35E4 if nested constructor/allocator behavior begins.
 * Original instructions do not use a host ESP or native malloc.
 */
#ifndef BF_001F35B0_ENTRY_GATE_H
#define BF_001F35B0_ENTRY_GATE_H
#include <stdint.h>
#include <stdbool.h>
typedef struct bf_001f35b0_mem {
    void *ctx;
    bool (*read32)(void*,uint32_t,uint32_t*);
    bool (*write32)(void*,uint32_t,uint32_t);
} bf_001f35b0_mem;
typedef struct bf_001f35b0_entry {
    uint32_t esp,esi,ebx,edi;
} bf_001f35b0_entry;
typedef enum bf_001f35b0_status {
    BF_001F35B0_RETURNED=0,
    BF_001F35B0_NEEDS_ALLOCATOR,
    BF_001F35B0_INVALID,
    BF_001F35B0_READ_FAULT,
    BF_001F35B0_WRITE_FAULT
} bf_001f35b0_status;
typedef struct bf_001f35b0_result {
    bf_001f35b0_status status;
    uint32_t pc,fault_va,next_eip,esp,ebx,edi;
    uint32_t intermediate,child_ptr,initial_owner_ptr;
    bool cleared_owner_14;
} bf_001f35b0_result;
static inline bf_001f35b0_result bf_001f35b0_execute_entry(
    const bf_001f35b0_mem*mem,bf_001f35b0_entry in)
{
    bf_001f35b0_result r={0};r.status=BF_001F35B0_INVALID;
    if(!mem||!mem->read32||!mem->write32)return r;
#define READ(a,x,at) do{const uint32_t addr=(a);r.pc=(at);\
    if(!mem->read32(mem->ctx,addr,&(x))){r.status=BF_001F35B0_READ_FAULT;\
    r.fault_va=addr;return r;}}while(0)
#define WRITE(a,x,at) do{const uint32_t addr=(a);r.pc=(at);\
    if(!mem->write32(mem->ctx,addr,(x))){r.status=BF_001F35B0_WRITE_FAULT;\
    r.fault_va=addr;return r;}}while(0)
    READ(in.esi+8u,r.initial_owner_ptr,UINT32_C(0x1f35b0));
    /* SUB ESP,60; PUSH EBX; PUSH EDI, even on the early return path. */
    const uint32_t frame=in.esp-UINT32_C(0x68);
    WRITE(frame+4u,in.ebx,UINT32_C(0x1f35b8));
    WRITE(frame,in.edi,UINT32_C(0x1f35b9));
    if(r.initial_owner_ptr==0u){
        uint32_t owner_data;
        READ(in.esi+0x38u,owner_data,UINT32_C(0x1f35c0));
        READ(owner_data+0x110u,r.intermediate,UINT32_C(0x1f35c3));
        WRITE(frame+0x14u,0u,UINT32_C(0x1f35cb));
        if(r.intermediate!=0u){
            READ(r.intermediate+8u,r.child_ptr,UINT32_C(0x1f35d9));
            if(r.child_ptr!=0u){
                r.pc=UINT32_C(0x1f35e4);
                r.esp=frame;r.status=BF_001F35B0_NEEDS_ALLOCATOR;
                return r;
            }
        }
        WRITE(in.esi+0x14u,0u,UINT32_C(0x1f36f8));
        r.cleared_owner_14=true;
    }
    READ(frame,r.edi,UINT32_C(0x1f36ff));
    READ(frame+4u,r.ebx,UINT32_C(0x1f3700));
    READ(in.esp,r.next_eip,UINT32_C(0x1f3704));
    r.esp=in.esp+8u; /* original RET 4 */
    r.pc=UINT32_C(0x1f3704);r.status=BF_001F35B0_RETURNED;
#undef READ
#undef WRITE
    return r;
}
#endif
