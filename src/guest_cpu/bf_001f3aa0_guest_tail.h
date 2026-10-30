/* Brute Force Xbox guest tail 0x001F3B62..0x001F3BCA.
 * Original SHA256 b6ea5d4dd6500ae86c3f5e3e4618bc9b1e3facddcb483170dfee7a787087c721.
 * Read-only guest instruction reconstruction: conditional original
 * callees and XDK heap frees remain explicit guest-CPU callbacks.
 */
#ifndef BF_001F3AA0_GUEST_TAIL_H
#define BF_001F3AA0_GUEST_TAIL_H
#include "bf_002b8de0_guest_cleanup.h"

typedef struct bf_001f3aa0_tail_io {
    bf_002b8de0_memory memory;
    /* Authentic target, call-entry ESP, ESI, EAX and returned EIP/ESP.
     * The original conditional callees require full guest CPU semantics. */
    bool (*call_branch)(void *,uint32_t,uint32_t,uint32_t,uint32_t,
                        uint32_t *,uint32_t *);
} bf_001f3aa0_tail_io;

typedef struct bf_001f3aa0_tail_x87 {
    void *context;
    bool (*fld32)(void *,uint32_t);
    bool (*fadd32)(void *,uint32_t);
    bool (*fsub32)(void *,uint32_t);
    bool (*fstp32)(void *,uint32_t *);
} bf_001f3aa0_tail_x87;

typedef enum bf_001f3aa0_tail_status {
    BF_001F3AA0_TAIL_OK=0,BF_001F3AA0_TAIL_INVALID,
    BF_001F3AA0_TAIL_READ_FAULT,BF_001F3AA0_TAIL_WRITE_FAULT,
    BF_001F3AA0_TAIL_X87_FAULT,BF_001F3AA0_TAIL_BRANCH_UNRESOLVED,
    BF_001F3AA0_TAIL_BRANCH_RETURN_MISMATCH,
    BF_001F3AA0_TAIL_CLEANUP_FAILED,BF_001F3AA0_TAIL_CLEANUP_RETURN_MISMATCH
} bf_001f3aa0_tail_status;

typedef struct bf_001f3aa0_tail_entry {
    uint32_t live_esp,guest_ebp,edi_owner,ebx,esi;
    uint32_t max_buckets,max_nodes;
} bf_001f3aa0_tail_entry;

typedef struct bf_001f3aa0_tail_result {
    bf_001f3aa0_tail_status status;
    uint32_t pc,fault_address,final_esp,return_eip;
    uint32_t final_ebp,final_esi,final_edi;
    uint32_t branch_1f35b0_calls,branch_2b8c60_calls;
    uint32_t result_float_writes,loaded_final_float_bits;
    bf_002b8de0_result cleanup;
} bf_001f3aa0_tail_result;

static inline bf_001f3aa0_tail_result bf_001f3aa0_execute_tail(
    const bf_001f3aa0_tail_io *io,const bf_001f3aa0_tail_x87 *fp,
    bf_001f3aa0_tail_entry in)
{
    bf_001f3aa0_tail_result r={0};r.status=BF_001F3AA0_TAIL_INVALID;
    if(!io||!io->memory.read32||!io->memory.write32||
       !io->memory.call_free||!io->call_branch||!fp||!fp->fld32||
       !fp->fadd32||!fp->fsub32||!fp->fstp32||
       in.live_esp!=((in.guest_ebp&~UINT32_C(15))-UINT32_C(0x20b0)))
        return r;
    const uint32_t L=in.live_esp;
    uint32_t word,object,other,owner_data,return_esp,return_ip;
    uint32_t active_esi=in.esi;
#define RD(addr,out,site) do{const uint32_t va=(addr);r.pc=(site); \
    if(!io->memory.read32(io->memory.context,va,&(out))){ \
       r.status=BF_001F3AA0_TAIL_READ_FAULT;r.fault_address=va;return r;} \
    }while(0)
#define WR(addr,value,site) do{const uint32_t va=(addr);r.pc=(site); \
    if(!io->memory.write32(io->memory.context,va,(value))){ \
       r.status=BF_001F3AA0_TAIL_WRITE_FAULT;r.fault_address=va;return r;} \
    }while(0)
#define FP(op,arg,site) do{r.pc=(site);if(!fp->op(fp->context,(arg))){ \
       r.status=BF_001F3AA0_TAIL_X87_FAULT;return r;} \
    }while(0)
    /* TEST [EDI+8]. First conditional call has original RET 4. */
    RD(in.edi_owner+8u,object,UINT32_C(0x1f3b62));
    if(object==0u){
        WR(L-4u,UINT32_C(0x3f800000),UINT32_C(0x1f3b69));
        active_esi=in.edi_owner;
        WR(L-8u,UINT32_C(0x001f3b75),UINT32_C(0x1f3b70));
        r.pc=UINT32_C(0x1f3b70);
        if(!io->call_branch(io->memory.context,UINT32_C(0x001f35b0),
                             L-8u,active_esi,object,&return_ip,&return_esp)){
            r.status=BF_001F3AA0_TAIL_BRANCH_UNRESOLVED;return r;
        }
        ++r.branch_1f35b0_calls;
        if(return_ip!=UINT32_C(0x001f3b75)||return_esp!=L){
            r.status=BF_001F3AA0_TAIL_BRANCH_RETURN_MISMATCH;return r;
        }
    }
    /* Re-read after first call; BOTH conditional calls can execute. */
    RD(in.edi_owner+8u,object,UINT32_C(0x1f3b75));
    if(object!=0u){
        active_esi=L+UINT32_C(0x40);
        WR(L-4u,UINT32_C(0x001f3b85),UINT32_C(0x1f3b80));
        r.pc=UINT32_C(0x1f3b80);
        if(!io->call_branch(io->memory.context,UINT32_C(0x002b8c60),
                             L-4u,active_esi,object,&return_ip,&return_esp)){
            r.status=BF_001F3AA0_TAIL_BRANCH_UNRESOLVED;return r;
        }
        ++r.branch_2b8c60_calls;
        if(return_ip!=UINT32_C(0x001f3b85)||return_esp!=L){
            r.status=BF_001F3AA0_TAIL_BRANCH_RETURN_MISMATCH;return r;
        }
    }
    /* The two original pointer guards are separate guest reads. */
    RD(L+UINT32_C(0x94),object,UINT32_C(0x1f3b85));
    RD(object+4u,other,UINT32_C(0x1f3b8c));
    if(other!=0u){
        RD(other+12u,object,UINT32_C(0x1f3b93));
        if(object!=0u){
            RD(in.edi_owner+UINT32_C(0x38),owner_data,UINT32_C(0x1f3b9a));
            RD(owner_data+4u,word,UINT32_C(0x1f3b9d));
            FP(fld32,word,UINT32_C(0x1f3b9d));
            RD(UINT32_C(0x003a4f78),word,UINT32_C(0x1f3ba0));
            FP(fadd32,word,UINT32_C(0x1f3ba0));
            RD(object+UINT32_C(0x1c),word,UINT32_C(0x1f3ba6));
            FP(fsub32,word,UINT32_C(0x1f3ba6));
            FP(fstp32,&word,UINT32_C(0x1f3ba9));
            WR(L+UINT32_C(0x14),word,UINT32_C(0x1f3ba9));
            ++r.result_float_writes;
        }
    }
    /* 1F3BAD EDI=&allocated object, then 2B8DE0 cleanup. */
    const uint32_t cleanup_object=L+UINT32_C(0x90);
    WR(L+UINT32_C(0x40),UINT32_C(0x0039efc8),UINT32_C(0x1f3bb4));
    WR(L-4u,UINT32_C(0x001f3bc1),UINT32_C(0x1f3bbc));
    const bf_002b8de0_entry cleanup_entry={L-4u,cleanup_object,in.ebx,
                                            active_esi,in.max_buckets,in.max_nodes};
    r.cleanup=bf_002b8de0_execute(&io->memory,cleanup_entry);
    if(r.cleanup.status!=BF_002B8DE0_OK){
        r.status=BF_001F3AA0_TAIL_CLEANUP_FAILED;
        r.pc=r.cleanup.pc;r.fault_address=r.cleanup.fault_address;
        return r;
    }
    if(r.cleanup.next_eip!=UINT32_C(0x001f3bc1)||r.cleanup.final_esp!=L){
        r.status=BF_001F3AA0_TAIL_CLEANUP_RETURN_MISMATCH;return r;
    }
    /* Final x87 result is left in ST(0), NOT converted to float C ABI. */
    RD(L+UINT32_C(0x14),r.loaded_final_float_bits,UINT32_C(0x1f3bc1));
    FP(fld32,r.loaded_final_float_bits,UINT32_C(0x1f3bc1));
    RD(L,r.final_edi,UINT32_C(0x1f3bc5));
    RD(L+4u,r.final_esi,UINT32_C(0x1f3bc6));
    RD(in.guest_ebp,r.final_ebp,UINT32_C(0x1f3bc9));
    RD(in.guest_ebp+4u,r.return_eip,UINT32_C(0x1f3bca));
    r.final_esp=in.guest_ebp+UINT32_C(16);
    r.pc=UINT32_C(0x1f3bca);r.status=BF_001F3AA0_TAIL_OK;
#undef RD
#undef WR
#undef FP
    return r;
}
#endif
