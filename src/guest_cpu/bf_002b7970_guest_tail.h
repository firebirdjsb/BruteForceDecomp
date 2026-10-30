/* Brute Force Xbox 0x002B7A2D..0x002B7AF0: guest x87/SSE tail.
 * XBE SHA256 B6EA5D4DD6500AE86C3F5E3E4618BC9B1E3FACDDCB483170DFEE7A787087C721.
 * The executing guest CPU owns original x87 status/control/exception and MXCSR.
 * This bridge does not reinterpret a guest VA as a host pointer.
 */
#ifndef BF_002B7970_GUEST_TAIL_H
#define BF_002B7970_GUEST_TAIL_H
#include "bf_002b7970_guest_base.h"

typedef struct bf_002b7970_tail_io {
    bf_002b7970_mem words;
    bool (*read64)(void *,uint32_t,uint64_t *);
    bool (*write64)(void *,uint32_t,uint64_t);
} bf_002b7970_tail_io;
typedef struct bf_002b7970_tail_ops {
    void *ctx;
    bool (*fld32)(void *,uint32_t);
    bool (*fmul32)(void *,uint32_t);
    bool (*fstp32)(void *,uint32_t *);
    /* Four raw binary32 lanes. Must perform original packed SSE operations
     * and respect MXCSR without promoting intermediates to host double. */
    bool (*mulps)(void *,const uint32_t [4],const uint32_t [4],uint32_t [4]);
    bool (*addps)(void *,const uint32_t [4],const uint32_t [4],uint32_t [4]);
} bf_002b7970_tail_ops;
typedef struct bf_002b7970_xmm {
    uint32_t xmm1[4],xmm2[4],xmm3[4];
} bf_002b7970_xmm;
typedef enum bf_002b7970_tail_status {
    BF_002B7970_TAIL_OK=0,BF_002B7970_TAIL_INVALID,
    BF_002B7970_TAIL_READ_FAULT,BF_002B7970_TAIL_WRITE_FAULT,
    BF_002B7970_TAIL_BACKEND_FAULT
} bf_002b7970_tail_status;
typedef struct bf_002b7970_tail_result {
    bf_002b7970_tail_status status;
    uint32_t pc,fault_va,return_eip,final_esp,final_eax;
    unsigned x87_multiplies,sse_mulps,sse_addps;
} bf_002b7970_tail_result;
/* A 64-bit MOVHPS memory operand is a single guest memory access; its
 * SSE input/output must not be split into independent host accesses.
 * The original MOVSS leaves XMM lane 1 unchanged, MOVHPS sets lanes 2,3.
 * Therefore both MULPS and ADDPS process lane 1, even though only lanes
 * 0,2,3 are ultimately stored in this original function. */
static inline bf_002b7970_tail_result bf_002b7970_execute_tail(
    const bf_002b7970_tail_io *m,const bf_002b7970_tail_ops *f,
    uint32_t entry_esp,bf_002b7970_xmm *x)
{
    bf_002b7970_tail_result r={0};r.status=BF_002B7970_TAIL_INVALID;
    if(!m||!m->words.read32||!m->words.write32||!m->read64||!m->write64||
       !f||!f->fld32||!f->fmul32||!f->fstp32||!f->mulps||!f->addps||!x)
        return r;
    const uint32_t S=entry_esp-UINT32_C(0x10);
    uint32_t out,word,vector_ptr,source_ptr,target_ptr;
    uint64_t qword;
#define RD(a,d,site) do{const uint32_t addr=(a);r.pc=(site);\
    if(!m->words.read32(m->words.ctx,addr,&(d))){\
       r.status=BF_002B7970_TAIL_READ_FAULT;r.fault_va=addr;return r;}}while(0)
#define WR(a,v,site) do{const uint32_t addr=(a);r.pc=(site);\
    if(!m->words.write32(m->words.ctx,addr,(v))){\
       r.status=BF_002B7970_TAIL_WRITE_FAULT;r.fault_va=addr;return r;}}while(0)
#define RQ(a,site) do{const uint32_t addr=(a);r.pc=(site);\
    if(!m->read64(m->words.ctx,addr,&qword)){\
       r.status=BF_002B7970_TAIL_READ_FAULT;r.fault_va=addr;return r;}}while(0)
#define WQ(a,v,site) do{const uint32_t addr=(a);r.pc=(site);\
    if(!m->write64(m->words.ctx,addr,(v))){\
       r.status=BF_002B7970_TAIL_WRITE_FAULT;r.fault_va=addr;return r;}}while(0)
#define FP(op,val,site) do{r.pc=(site);if(!f->op(f->ctx,(val))){\
       r.status=BF_002B7970_TAIL_BACKEND_FAULT;return r;}}while(0)
#define BIN(op,l,rhs,site) do{uint32_t next[4];r.pc=(site);\
    if(!f->op(f->ctx,(l),(rhs),next)){r.status=BF_002B7970_TAIL_BACKEND_FAULT;return r;}\
    for(unsigned q=0;q<4u;q++)(l)[q]=next[q];}while(0)
    /* 0x2B7A2D..0x2B7A50: x87 half-scale, then scratch words.
     * These writes are observable if SSE later faults. */
    RD(entry_esp+4u,out,UINT32_C(0x2b7a2d));
    RD(out+4u,word,UINT32_C(0x2b7a31));
    FP(fld32,word,UINT32_C(0x2b7a31));
    RD(UINT32_C(0x003a4f74),word,UINT32_C(0x2b7a37));
    FP(fmul32,word,UINT32_C(0x2b7a37));++r.x87_multiplies;
    WR(S+8u,out+UINT32_C(0x40),UINT32_C(0x2b7a3d));
    WR(S+4u,out+UINT32_C(0x30),UINT32_C(0x2b7a44));
    r.pc=UINT32_C(0x2b7a48);
    if(!f->fstp32(f->ctx,&word)){r.status=BF_002B7970_TAIL_BACKEND_FAULT;return r;}
    WR(S+12u,word,UINT32_C(0x2b7a48));
    WR(S,out+UINT32_C(0x30),UINT32_C(0x2b7a4c));

    /* 0x2B7A50..0x2B7A84: first SSE vector. */
    RD(S+12u,x->xmm3[0],UINT32_C(0x2b7a50));
    RD(S+8u,vector_ptr,UINT32_C(0x2b7a56));
    RD(vector_ptr,x->xmm2[0],UINT32_C(0x2b7a5a));
    RQ(vector_ptr+4u,UINT32_C(0x2b7a5e));
    x->xmm2[2]=(uint32_t)qword;x->xmm2[3]=(uint32_t)(qword>>32);
    for(unsigned i=1u;i<4u;i++)x->xmm3[i]=x->xmm3[0]; /* SHUFPS 0 */
    RD(S+4u,source_ptr,UINT32_C(0x2b7a66));
    RD(source_ptr,x->xmm1[0],UINT32_C(0x2b7a6a));
    RQ(source_ptr+4u,UINT32_C(0x2b7a6e));
    x->xmm1[2]=(uint32_t)qword;x->xmm1[3]=(uint32_t)(qword>>32);
    BIN(mulps,x->xmm2,x->xmm3,UINT32_C(0x2b7a72));++r.sse_mulps;
    BIN(addps,x->xmm1,x->xmm2,UINT32_C(0x2b7a75));++r.sse_addps;
    RD(S,target_ptr,UINT32_C(0x2b7a78));
    WR(target_ptr,x->xmm1[0],UINT32_C(0x2b7a7c));
    WQ(target_ptr+4u,((uint64_t)x->xmm1[3]<<32)|x->xmm1[2],UINT32_C(0x2b7a80));

    /* 0x2B7A84..0x2B7AD8: second SSE sequence uses the same XMM
     * registers and therefore preserves lane 1 after first ADDPS. */
    RD(entry_esp+4u,out,UINT32_C(0x2b7a84));
    RD(out+4u,word,UINT32_C(0x2b7a88));
    WR(S,word,UINT32_C(0x2b7a8b));
    WR(S+4u,out+UINT32_C(0x40),UINT32_C(0x2b7a92));
    WR(S+8u,out+UINT32_C(0x10),UINT32_C(0x2b7a9c));
    WR(S+12u,out+UINT32_C(0x20),UINT32_C(0x2b7aa0));
    RD(S,x->xmm3[0],UINT32_C(0x2b7aa4));
    RD(S+4u,vector_ptr,UINT32_C(0x2b7aaa));
    RD(vector_ptr,x->xmm2[0],UINT32_C(0x2b7aae));
    RQ(vector_ptr+4u,UINT32_C(0x2b7ab2));
    x->xmm2[2]=(uint32_t)qword;x->xmm2[3]=(uint32_t)(qword>>32);
    for(unsigned i=1u;i<4u;i++)x->xmm3[i]=x->xmm3[0];
    RD(S+8u,source_ptr,UINT32_C(0x2b7aba));
    RD(source_ptr,x->xmm1[0],UINT32_C(0x2b7abe));
    RQ(source_ptr+4u,UINT32_C(0x2b7ac2));
    x->xmm1[2]=(uint32_t)qword;x->xmm1[3]=(uint32_t)(qword>>32);
    BIN(mulps,x->xmm2,x->xmm3,UINT32_C(0x2b7ac6));++r.sse_mulps;
    BIN(addps,x->xmm1,x->xmm2,UINT32_C(0x2b7ac9));++r.sse_addps;
    RD(S+12u,target_ptr,UINT32_C(0x2b7acc));
    WR(target_ptr,x->xmm1[0],UINT32_C(0x2b7ad0));
    WQ(target_ptr+4u,((uint64_t)x->xmm1[3]<<32)|x->xmm1[2],UINT32_C(0x2b7ad4));

    RD(entry_esp+4u,out,UINT32_C(0x2b7ad8));
    WR(out+UINT32_C(0x2c),0u,UINT32_C(0x2b7adc));
    RD(entry_esp+4u,out,UINT32_C(0x2b7adf));
    WR(out+UINT32_C(0xc),0u,UINT32_C(0x2b7ae3));
    RD(entry_esp+4u,out,UINT32_C(0x2b7ae6));
    RD(entry_esp,r.return_eip,UINT32_C(0x2b7aed));
    r.final_esp=entry_esp+UINT32_C(12);r.final_eax=out;
    r.status=BF_002B7970_TAIL_OK;r.pc=UINT32_C(0x2b7aed);
#undef RD
#undef WR
#undef RQ
#undef WQ
#undef FP
#undef BIN
    return r;
}
#endif
