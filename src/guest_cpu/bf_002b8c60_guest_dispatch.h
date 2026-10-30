/* Original Xbox Brute Force 0x002B8C60..0x002B8CA9.
 * Guest-memory condition/type dispatch. Callee bodies are explicitly
 * delegated; guest VAs are never reinterpreted as host pointers.
 */
#ifndef BF_002B8C60_GUEST_DISPATCH_H
#define BF_002B8C60_GUEST_DISPATCH_H
#include <stdbool.h>
#include <stdint.h>

typedef struct bf_002b8c60_io {
    void *ctx;
    bool (*read32)(void*,uint32_t,uint32_t*);
    bool (*read8)(void*,uint32_t,uint8_t*);
    bool (*write32)(void*,uint32_t,uint32_t);
    /* target, CALL ESP, ESI, EAX, ECX -> next EIP and ESP. */
    bool (*dispatch)(void*,uint32_t,uint32_t,uint32_t,uint32_t,
                     uint32_t,uint32_t*,uint32_t*);
} bf_002b8c60_io;
typedef struct bf_002b8c60_entry {uint32_t esp,eax,esi,ebx;} bf_002b8c60_entry;
typedef enum bf_002b8c60_status {
    BF_002B8C60_OK=0,BF_002B8C60_INVALID,BF_002B8C60_READ_FAULT,
    BF_002B8C60_WRITE_FAULT,BF_002B8C60_CALLEE_UNKNOWN,
    BF_002B8C60_BAD_RETURN
} bf_002b8c60_status;
typedef struct bf_002b8c60_result {
    bf_002b8c60_status status;
    uint32_t pc,fault_address,next_eip,final_esp,final_ebx;
    uint32_t concrete_target,call_count,guard_mask,dispatch_kind;
} bf_002b8c60_result;
static inline bf_002b8c60_result bf_002b8c60_execute(
    const bf_002b8c60_io*io,bf_002b8c60_entry in)
{
    bf_002b8c60_result r={0};r.status=BF_002B8C60_INVALID;
    if(!io||!io->read32||!io->read8||!io->write32||!io->dispatch)return r;
    uint32_t value,type,receiver,vtable,target,next_esp,next_eip;
    uint8_t flags;
#define RD(va,out,at) do{const uint32_t a=(va);r.pc=(at);\
    if(!io->read32(io->ctx,a,&(out))){r.status=BF_002B8C60_READ_FAULT;\
    r.fault_address=a;return r;}}while(0)
#define RB(va,out,at) do{const uint32_t a=(va);r.pc=(at);\
    if(!io->read8(io->ctx,a,&(out))){r.status=BF_002B8C60_READ_FAULT;\
    r.fault_address=a;return r;}}while(0)
#define WR(va,w,at) do{const uint32_t a=(va);r.pc=(at);\
    if(!io->write32(io->ctx,a,(w))){r.status=BF_002B8C60_WRITE_FAULT;\
    r.fault_address=a;return r;}}while(0)
    /* EAX==0 jumps to [EAX+4], not directly to RET. This can fault. */
    WR(in.esp-4u,in.ebx,UINT32_C(0x2b8c62));
    if(in.eax!=0u){
        RD(in.esi+8u,r.guard_mask,UINT32_C(0x2b8c65));
        if(r.guard_mask&1u){
            RD(in.eax+0x18u,value,UINT32_C(0x2b8c6d));
            if(value!=0u)goto exit_dispatch;
        }
        if(r.guard_mask&2u){
            RB(in.eax+0x70u,flags,UINT32_C(0x2b8c7b));
            if((flags&0x10u)==0u)goto exit_dispatch;
        }
        if(r.guard_mask&4u){
            RB(in.eax+0x70u,flags,UINT32_C(0x2b8c85));
            if(flags&0x10u)goto exit_dispatch;
        }
    }
    RD(in.eax+4u,type,UINT32_C(0x2b8c8a));
    if(type!=2u&&type!=3u)goto exit_dispatch;
    if(type==3u){
        target=UINT32_C(0x2b89f0);r.dispatch_kind=3u;
    }else{
        RD(in.eax+0x7cu,receiver,UINT32_C(0x2b8c9e));
        RD(receiver,vtable,UINT32_C(0x2b8ca1));
        RD(vtable+0x18u,target,UINT32_C(0x2b8ca5));
        r.dispatch_kind=2u;
    }
    /* PUSH EAX, PUSH ESI and CALL; callee must consume two stack args
     * (RET 8). Runtime vtable target remains a guest callback. */
    WR(in.esp-8u,in.eax,type==3u?UINT32_C(0x2b8c95):UINT32_C(0x2b8ca3));
    WR(in.esp-12u,in.esi,type==3u?UINT32_C(0x2b8c96):UINT32_C(0x2b8ca4));
    const uint32_t continuation=type==3u?UINT32_C(0x2b8c9c):UINT32_C(0x2b8ca8);
    WR(in.esp-16u,continuation,type==3u?UINT32_C(0x2b8c97):UINT32_C(0x2b8ca5));
    r.pc=type==3u?UINT32_C(0x2b8c97):UINT32_C(0x2b8ca5);
    r.concrete_target=target;
    if(!io->dispatch(io->ctx,target,in.esp-16u,in.esi,in.eax,
                     type==2u?receiver:0u,&next_eip,&next_esp)){
        r.status=BF_002B8C60_CALLEE_UNKNOWN;return r;
    }
    ++r.call_count;
    if(next_eip!=continuation||next_esp!=in.esp-4u){
        r.status=BF_002B8C60_BAD_RETURN;return r;
    }
exit_dispatch:
    RD(in.esp-4u,r.final_ebx,UINT32_C(0x2b8ca8));
    RD(in.esp,r.next_eip,UINT32_C(0x2b8ca9));
    r.final_esp=in.esp+4u;r.pc=UINT32_C(0x2b8ca9);
    r.status=BF_002B8C60_OK;
#undef RD
#undef RB
#undef WR
    return r;
}
#endif
