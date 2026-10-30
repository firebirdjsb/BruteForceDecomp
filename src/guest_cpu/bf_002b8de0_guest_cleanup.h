/* Brute Force original Xbox guest cleanup 0x002B8DE0..0x002B8E4A.
 * XBE b6ea5d4dd6500ae86c3f5e3e4618bc9b1e3facddcb483170dfee7a787087c721.
 * Body [0x2b8de0,0x2b8e4b) sha256
 * 3c4f05dfa1620b34b71f2d0b2509ecf872c03d2f5ea10c6ad9afc4faaf6838cb.
 * This is a guest-memory operation bridge, not a native heap replacement.
 */
#ifndef BF_002B8DE0_GUEST_CLEANUP_H
#define BF_002B8DE0_GUEST_CLEANUP_H
#include <stdint.h>
#include <stdbool.h>

typedef struct bf_002b8de0_memory {
    void *context;
    bool (*read32)(void *,uint32_t,uint32_t *);
    bool (*write32)(void *,uint32_t,uint32_t);
    /* target, argument, guest CALL-entry ESP, returned EIP, returned ESP.
     * The concrete Xbox free implementations remain unresolved. */
    bool (*call_free)(void *,uint32_t,uint32_t,uint32_t,
                      uint32_t *,uint32_t *);
} bf_002b8de0_memory;

typedef enum bf_002b8de0_status {
    BF_002B8DE0_OK=0,BF_002B8DE0_INVALID,BF_002B8DE0_READ_FAULT,
    BF_002B8DE0_WRITE_FAULT,BF_002B8DE0_CALL_UNRESOLVED,
    BF_002B8DE0_BUDGET_EXHAUSTED,BF_002B8DE0_RETURN_MISMATCH
} bf_002b8de0_status;

typedef struct bf_002b8de0_result {
    bf_002b8de0_status status;
    uint32_t pc,fault_address,final_esp,next_eip,final_ebx,final_esi;
    uint32_t buckets_visited,nodes_freed,arrays_freed;
} bf_002b8de0_result;

typedef struct bf_002b8de0_entry {
    uint32_t esp,edi,ebx,esi;
    /* Safety limits, NOT part of original Xbox semantics. Only finite
     * bounded traversals before exhaustion are behaviorally modeled. */
    uint32_t max_buckets,max_nodes;
} bf_002b8de0_entry;

static inline bf_002b8de0_result bf_002b8de0_execute(
    const bf_002b8de0_memory*m,bf_002b8de0_entry in)
{
    bf_002b8de0_result r={0};r.status=BF_002B8DE0_INVALID;
    if(!m||!m->read32||!m->write32||!m->call_free)return r;
    uint32_t esp=in.esp,object_count,head,node,next,array,free_target;
    uint32_t return_ip,return_esp;
#define RD(a,v,at) do{const uint32_t addr=(a);r.pc=(at); \
    if(!m->read32(m->context,addr,&(v))){r.status=BF_002B8DE0_READ_FAULT; \
       r.fault_address=addr;return r;}}while(0)
#define WR(a,v,at) do{const uint32_t addr=(a);r.pc=(at); \
    if(!m->write32(m->context,addr,(v))){r.status=BF_002B8DE0_WRITE_FAULT; \
       r.fault_address=addr;return r;}}while(0)
    /* Original MOV EAX,[EDI]; PUSH EBX; XOR EBX,EBX. */
    RD(in.edi,object_count,UINT32_C(0x2b8de0));
    WR(esp-4u,in.ebx,UINT32_C(0x2b8de2));esp-=4u;
    if(object_count!=0u){
        WR(esp-4u,in.esi,UINT32_C(0x2b8de9));esp-=4u;
        uint32_t ebx=0u;
        for(;;){
            if(r.buckets_visited>=in.max_buckets){
                r.status=BF_002B8DE0_BUDGET_EXHAUSTED;
                r.pc=UINT32_C(0x2b8df0);return r;
            }
            RD(in.edi+12u,array,UINT32_C(0x2b8df0));
            RD(array+(ebx<<2),head,UINT32_C(0x2b8df3));
            node=head;
            while(node!=0u){
                if(r.nodes_freed>=in.max_nodes){
                    r.status=BF_002B8DE0_BUDGET_EXHAUSTED;
                    r.pc=UINT32_C(0x2b8e00);return r;
                }
                RD(node,next,UINT32_C(0x2b8e00));
                WR(esp-4u,node,UINT32_C(0x2b8e02));
                WR(esp-8u,UINT32_C(0x002b8e08),UINT32_C(0x2b8e03));
                r.pc=UINT32_C(0x2b8e03);
                if(!m->call_free(m->context,UINT32_C(0x002ea018),node,esp-8u,
                                 &return_ip,&return_esp)){
                    r.status=BF_002B8DE0_CALL_UNRESOLVED;return r;
                }
                if(return_ip!=UINT32_C(0x002b8e08)||return_esp!=esp-4u){
                    r.status=BF_002B8DE0_RETURN_MISMATCH;return r;
                }
                ++r.nodes_freed;
                /* Original reads next before free, then reloads EAX
                 * from the saved ESI rather than the freed guest node. */
                node=next;
            }
            ++r.buckets_visited;
            RD(in.edi,object_count,UINT32_C(0x2b8e11));
            ++ebx; /* original INC EBX; unsigned CMP/JB */
            if(ebx>=object_count)break;
        }
        RD(esp,r.final_esi,UINT32_C(0x2b8e18));esp+=4u;
    }else r.final_esi=in.esi;
    RD(in.edi+12u,array,UINT32_C(0x2b8e19));
    RD(esp,r.final_ebx,UINT32_C(0x2b8e1e));esp+=4u;
    if(array!=0u){
        WR(esp-4u,array,UINT32_C(0x2b8e21));
        RD(UINT32_C(0x003bc654),free_target,UINT32_C(0x2b8e22));
        WR(esp-8u,UINT32_C(0x002b8e28),UINT32_C(0x2b8e22));
        r.pc=UINT32_C(0x2b8e22);
        if(!m->call_free(m->context,free_target,array,esp-8u,
                         &return_ip,&return_esp)){
            r.status=BF_002B8DE0_CALL_UNRESOLVED;return r;
        }
        if(return_ip!=UINT32_C(0x002b8e28)||return_esp!=esp-4u){
            r.status=BF_002B8DE0_RETURN_MISMATCH;return r;
        }
        WR(in.edi+12u,0u,UINT32_C(0x2b8e2b));
        ++r.arrays_freed;
    }
    RD(in.edi+4u,array,UINT32_C(0x2b8e32));
    if(array!=0u){
        WR(esp-4u,array,UINT32_C(0x2b8e39));
        RD(UINT32_C(0x003bc654),free_target,UINT32_C(0x2b8e3a));
        WR(esp-8u,UINT32_C(0x002b8e40),UINT32_C(0x2b8e3a));
        r.pc=UINT32_C(0x2b8e3a);
        if(!m->call_free(m->context,free_target,array,esp-8u,
                         &return_ip,&return_esp)){
            r.status=BF_002B8DE0_CALL_UNRESOLVED;return r;
        }
        if(return_ip!=UINT32_C(0x002b8e40)||return_esp!=esp-4u){
            r.status=BF_002B8DE0_RETURN_MISMATCH;return r;
        }
        WR(in.edi+4u,0u,UINT32_C(0x2b8e43));
        ++r.arrays_freed;
    }
    RD(esp,r.next_eip,UINT32_C(0x2b8e4a));
    r.final_esp=esp+4u;
    r.pc=UINT32_C(0x2b8e4a);r.status=BF_002B8DE0_OK;
#undef RD
#undef WR
    return r;
}
#endif
