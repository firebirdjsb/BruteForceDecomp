/* Original 001F3AA0 conditional branch router:
 * 001F35B0 early guest exits, 002B8C60 direct/virtual dispatch,
 * 002EA018->67BF0->[3BC654] heap free, without host guest-VA casts.
 * Deeper constructor/2B89F0/virtual/heap-manager calls remain callbacks.
 */
#ifndef BF_001F3AA0_CONCRETE_ROUTER_H
#define BF_001F3AA0_CONCRETE_ROUTER_H
#include "bf_001f3aa0_guest_tail.h"
#include "bf_001f35b0_entry_gate.h"
#include "bf_002b8c60_guest_dispatch.h"
#include "bf_heap_wrapper_guest.h"
typedef struct bf_001f3aa0_concrete_router {
    void *guest;
    bool (*read32)(void*,uint32_t,uint32_t*);
    bool (*read8)(void*,uint32_t,uint8_t*);
    bool (*write32)(void*,uint32_t,uint32_t);
    bool (*call_heap_inner)(void*,uint32_t,uint32_t,uint32_t*,uint32_t*,uint32_t*);
    bool (*call_deep)(void*,uint32_t,uint32_t,uint32_t,uint32_t,uint32_t,
                      uint32_t*,uint32_t*);
    uint32_t guest_ebx,guest_edi;
} bf_001f3aa0_concrete_router;
static inline bool bf_001f3aa0_router_read32(void*ctx,uint32_t a,uint32_t*out){
    bf_001f3aa0_concrete_router*r=ctx;
    return r->read32(r->guest,a,out);
}
static inline bool bf_001f3aa0_router_read8(void*ctx,uint32_t a,uint8_t*out){
    bf_001f3aa0_concrete_router*r=ctx;
    return r->read8(r->guest,a,out);
}
static inline bool bf_001f3aa0_router_write32(void*ctx,uint32_t a,uint32_t w){
    bf_001f3aa0_concrete_router*r=ctx;
    return r->write32(r->guest,a,w);
}
static inline bool bf_001f3aa0_router_inner(void*ctx,uint32_t target,
    uint32_t esp,uint32_t*eax,uint32_t*eip,uint32_t*after){
    bf_001f3aa0_concrete_router*r=ctx;
    return r->call_heap_inner &&
        r->call_heap_inner(r->guest,target,esp,eax,eip,after);
}
static inline bool bf_001f3aa0_router_deep(void*ctx,uint32_t target,
    uint32_t esp,uint32_t esi,uint32_t eax,uint32_t ecx,
    uint32_t*eip,uint32_t*after){
    bf_001f3aa0_concrete_router*r=ctx;
    return r->call_deep &&
        r->call_deep(r->guest,target,esp,esi,eax,ecx,eip,after);
}
static inline bool bf_001f3aa0_route_branch(void*ctx,uint32_t target,
    uint32_t esp,uint32_t esi,uint32_t eax,uint32_t*eip,uint32_t*after)
{
    bf_001f3aa0_concrete_router*r=ctx;
    if(!r||!r->read32||!r->write32||!r->read8)return false;
    if(target==UINT32_C(0x001f35b0)){
        const bf_001f35b0_mem m={r,bf_001f3aa0_router_read32,
                                   bf_001f3aa0_router_write32};
        const bf_001f35b0_entry in={esp,esi,r->guest_ebx,r->guest_edi};
        const bf_001f35b0_result v=bf_001f35b0_execute_entry(&m,in);
        /* Original constructor path is still not fully verified.
         * Do not claim a completed CALL if it reaches 1F35E4. */
        if(v.status!=BF_001F35B0_RETURNED)return false;
        *eip=v.next_eip;*after=v.esp;return true;
    }
    if(target==UINT32_C(0x002b8c60)){
        const bf_002b8c60_io m={
            r,bf_001f3aa0_router_read32,bf_001f3aa0_router_read8,
            bf_001f3aa0_router_write32,bf_001f3aa0_router_deep
        };
        const bf_002b8c60_entry in={esp,eax,esi,r->guest_ebx};
        const bf_002b8c60_result v=bf_002b8c60_execute(&m,in);
        if(v.status!=BF_002B8C60_OK)return false;
        *eip=v.next_eip;*after=v.final_esp;return true;
    }
    return false;
}
static inline bool bf_001f3aa0_route_free(void*ctx,uint32_t target,
    uint32_t ptr,uint32_t esp,uint32_t*eip,uint32_t*after)
{
    bf_001f3aa0_concrete_router*r=ctx;
    if(!r||!r->read32||!r->write32||!r->call_heap_inner)return false;
    uint32_t arg;
    if(!r->read32(r->guest,esp+4u,&arg)||arg!=ptr)return false;
    /* 002EA018 JMP 67BF0 JMP [3BC654]; direct free uses same table. */
    if(target!=UINT32_C(0x002ea018)&&target!=UINT32_C(0x00237ec0))
        return false;
    const bf_heap_guest_io heap={
        r,bf_001f3aa0_router_read32,bf_001f3aa0_router_write32,
        bf_001f3aa0_router_inner
    };
    const bf_heap_result v=bf_heap_execute_default_wrapper(
        &heap,BF_HEAP_FREE,esp);
    if(v.status!=BF_HEAP_GUEST_OK)return false;
    *eip=v.next_eip;*after=v.final_esp;return true;
}
static inline bf_001f3aa0_tail_io bf_001f3aa0_concrete_tail_io(
    bf_001f3aa0_concrete_router*r)
{
    const bf_001f3aa0_tail_io io={
        {r,bf_001f3aa0_router_read32,bf_001f3aa0_router_write32,
           bf_001f3aa0_route_free},
        bf_001f3aa0_route_branch
    };
    return io;
}
#endif
