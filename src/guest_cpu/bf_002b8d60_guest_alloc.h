/* Brute Force original Xbox 0x002B8D60..0x002B8DD9.
 * XBE SHA256 B6EA5D4DD6500AE86C3F5E3E4618BC9B1E3FACDDCB483170DFEE7A787087C721
 * Function SHA256 E10FF4F6C4D1B02768C5EA17A970B2C996D18356BC42C5FE5BB0756B77EBB76F
 * Isolated guest-CPU execution, NOT a host pointer/allocator replacement.
 */
#ifndef BF_002B8D60_GUEST_ALLOC_H
#define BF_002B8D60_GUEST_ALLOC_H
#include <stdbool.h>
#include <stdint.h>
typedef struct bf_002b8d60_guest_io {
    void *ctx;
    bool (*read32)(void *,uint32_t,uint32_t *);
    bool (*write32)(void *,uint32_t,uint32_t);
    /* Must recognize and execute the guest allocator target. Arguments
     * include original x86 CALL-entry ESP, pointing at return address. */
    bool (*call_allocator)(void *,uint32_t,uint32_t,uint32_t,uint32_t *);
} bf_002b8d60_guest_io;
typedef struct bf_002b8d60_regs {
    uint32_t entry_esp,eax,esi,ebx,edi;
    bool direction_flag;
} bf_002b8d60_regs;
typedef enum bf_002b8d60_status {
    BF_002B8D60_OK=0,BF_002B8D60_INVALID,
    BF_002B8D60_READ_FAULT,BF_002B8D60_WRITE_FAULT,
    BF_002B8D60_ALLOCATOR_UNRESOLVED,
    BF_002B8D60_CALLEE_CONTROL_TRANSFER
} bf_002b8d60_status;
typedef struct bf_002b8d60_result {
    bf_002b8d60_status status;
    uint32_t instruction_va,fault_guest_va,next_eip,final_esp;
    uint32_t final_eax,final_ebx,final_edi,final_esi;
    uint32_t first_buffer,second_buffer,first_bytes,second_bytes;
    uint32_t first_zeros,second_zeros,alloc_calls;
} bf_002b8d60_result;
static inline bf_002b8d60_result bf_002b8d60_execute(
    const bf_002b8d60_guest_io *mem,bf_002b8d60_regs in)
{
    bf_002b8d60_result r={0};
    r.status=BF_002B8D60_INVALID;
    if(!mem||!mem->read32||!mem->write32||!mem->call_allocator)return r;
    uint32_t esp=in.entry_esp,allocator_va,return_va,object_count;
    uint32_t size;
    const uint32_t delta=in.direction_flag?UINT32_C(0xfffffffc):4u;
#define RD(a,w,pc) do{const uint32_t va=(a);r.instruction_va=(pc); \
    if(!mem->read32(mem->ctx,va,&(w))){ \
        r.status=BF_002B8D60_READ_FAULT;r.fault_guest_va=va;return r;} \
    }while(0)
#define WR(a,w,pc) do{const uint32_t va=(a);r.instruction_va=(pc); \
    if(!mem->write32(mem->ctx,va,(w))){ \
        r.status=BF_002B8D60_WRITE_FAULT;r.fault_guest_va=va;return r;} \
    }while(0)
    /* 2B8D60 MOV [ESI],EAX. Intermediate ECX/EDX logarithm scan
     * is not used to guess an allocation size or native x86 flags. */
    WR(in.esi,in.eax,UINT32_C(0x2b8d60));
    WR(esp-4u,in.ebx,UINT32_C(0x2b8d75));esp-=4u;
    WR(esp-4u,in.edi,UINT32_C(0x2b8d76));esp-=4u;
    size=in.eax<<2; /* LEA EDI,[EAX*4], wraps in guest32 */
    r.first_bytes=size;
    WR(esp-4u,size,UINT32_C(0x2b8d7e));esp-=4u;
    RD(UINT32_C(0x003bc650),allocator_va,UINT32_C(0x2b8d7f));
    WR(esp-4u,UINT32_C(0x2b8d85),UINT32_C(0x2b8d7f));esp-=4u;
    r.instruction_va=UINT32_C(0x2b8d7f);
    if(!mem->call_allocator(mem->ctx,allocator_va,size,esp,&r.first_buffer)){
        r.status=BF_002B8D60_ALLOCATOR_UNRESOLVED;return r;
    }
    ++r.alloc_calls;
    RD(esp,return_va,UINT32_C(0x2b8d7f));
    if(return_va!=UINT32_C(0x2b8d85)){
        r.status=BF_002B8D60_CALLEE_CONTROL_TRANSFER;
        r.next_eip=return_va;return r;
    }
    esp+=4u;
    uint32_t count=size>>2,ptr=r.first_buffer;
    for(uint32_t i=0;i<count;i++){
        WR(ptr,0u,UINT32_C(0x2b8d92));ptr+=delta;++r.first_zeros;
    }
    /* Both original REP STOSB remainder counts are always zero: the
     * original requested byte sizes are multiples of four even on wrap. */
    RD(in.esi,object_count,UINT32_C(0x2b8d9b));
    size=object_count<<3;
    r.second_bytes=size;
    WR(esp-4u,size,UINT32_C(0x2b8da0));esp-=4u;
    WR(in.esi+12u,r.first_buffer,UINT32_C(0x2b8da1));
    RD(UINT32_C(0x003bc650),allocator_va,UINT32_C(0x2b8da4));
    WR(esp-4u,UINT32_C(0x2b8daa),UINT32_C(0x2b8da4));esp-=4u;
    r.instruction_va=UINT32_C(0x2b8da4);
    if(!mem->call_allocator(mem->ctx,allocator_va,size,esp,&r.second_buffer)){
        r.status=BF_002B8D60_ALLOCATOR_UNRESOLVED;return r;
    }
    ++r.alloc_calls;
    RD(esp,return_va,UINT32_C(0x2b8da4));
    if(return_va!=UINT32_C(0x2b8daa)){
        r.status=BF_002B8D60_CALLEE_CONTROL_TRANSFER;
        r.next_eip=return_va;return r;
    }
    esp+=4u;
    count=size>>2;ptr=r.second_buffer;
    for(uint32_t i=0;i<count;i++){
        WR(ptr,0u,UINT32_C(0x2b8db7));ptr+=delta;++r.second_zeros;
    }
    /* Original reload of [ESI] is after both zero-fills, so alias
     * with the first allocation may change the second size and end. */
    RD(in.esi,object_count,UINT32_C(0x2b8dc0));
    esp+=8u; /* original ADD ESP,8 cleans both allocator arguments */
    const uint32_t end_ptr=r.second_buffer+(object_count<<2);
    WR(in.esi+4u,r.second_buffer,UINT32_C(0x2b8dc9));
    WR(in.esi+8u,end_ptr,UINT32_C(0x2b8dcc));
    WR(in.esi+16u,0u,UINT32_C(0x2b8dcf));
    r.final_eax=in.esi;r.final_esi=in.esi;
    RD(esp,r.final_edi,UINT32_C(0x2b8dc8));esp+=4u;
    RD(esp,r.final_ebx,UINT32_C(0x2b8dd8));esp+=4u;
    RD(esp,r.next_eip,UINT32_C(0x2b8dd9));
    r.final_esp=esp+4u;r.status=BF_002B8D60_OK;
    r.instruction_va=UINT32_C(0x2b8dd9);
#undef RD
#undef WR
    return r;
}
#endif
