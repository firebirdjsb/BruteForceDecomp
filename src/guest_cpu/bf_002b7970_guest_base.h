/* Xbox Brute Force 0x002B7970..0x002B7A2D, raw guest stores and
 * original x87 copy sequence BEFORE the SSE vector operations.
 * Original XBE SHA-256:
 * B6EA5D4DD6500AE86C3F5E3E4618BC9B1E3FACDDCB483170DFEE7A787087C721
 * Partial instruction window only. NOT a complete function or native ABI.
 */
#ifndef BF_002B7970_GUEST_BASE_H
#define BF_002B7970_GUEST_BASE_H
#include <stdbool.h>
#include <stdint.h>
typedef struct bf_002b7970_mem {
    void *ctx;
    bool (*read32)(void *,uint32_t,uint32_t *);
    bool (*write32)(void *,uint32_t);
} bf_002b7970_mem;
typedef struct bf_002b7970_x87 {
    void *ctx;
    bool (*fld32)(void *,uint32_t);
    bool (*fxch1)(void *);
    bool (*fstp32)(void *,uint32_t *);
} bf_002b7970_x87;
typedef enum bf_002b7970_status {
    BF_002B7970_OK=0,BF_002B7970_INVALID,
    BF_002B7970_READ_FAULT,BF_002B7970_WRITE_FAULT,
    BF_002B7970_X87_FAULT
} bf_002b7970_status;
typedef struct bf_002b7970_result {
    bf_002b7970_status status;
    uint32_t pc,fault_va,guest_esp,dest,src;
    unsigned x87_loads,x87_stores;
} bf_002b7970_result;
static inline bf_002b7970_result bf_002b7970_execute_base(
    const bf_002b7970_mem*m,const bf_002b7970_x87*f,
    uint32_t entry_esp)
{
    bf_002b7970_result r={0};
    r.status=BF_002B7970_INVALID;
    if(!m||!m->read32||!m->write32||!f||!f->fld32||
       !f->fxch1||!f->fstp32)return r;
    const uint32_t E=entry_esp;
    uint32_t out,src,word;
#define RD(addr,var,pc_) do {const uint32_t a=(addr);r.pc=(pc_);\
    if(!m->read32(m->ctx,a,&(var))){r.status=BF_002B7970_READ_FAULT;\
    r.fault_va=a;return r;}}while(0)
#define WR(addr,val,pc_) do {const uint32_t a=(addr);r.pc=(pc_);\
    if(!m->write32(m->ctx,a,(val))){r.status=BF_002B7970_WRITE_FAULT;\
    r.fault_va=a;return r;}}while(0)
#define FLD(addr,pc_) do {RD(addr,word,pc_);r.pc=(pc_);\
    if(!f->fld32(f->ctx,word)){r.status=BF_002B7970_X87_FAULT;return r;}\
    ++r.x87_loads;}while(0)
#define FSTP(addr,pc_) do {r.pc=(pc_);\
    if(!f->fstp32(f->ctx,&word)){r.status=BF_002B7970_X87_FAULT;return r;}\
    ++r.x87_stores;WR(addr,word,pc_);}while(0)
#define FXCH(pc_) do {r.pc=(pc_);\
    if(!f->fxch1(f->ctx)){r.status=BF_002B7970_X87_FAULT;return r;}\
    }while(0)
    RD(E+4u,out,UINT32_C(0x2b7973));
    WR(out,UINT32_C(0x0039efb8),UINT32_C(0x2b7977));
    RD(E+4u,out,UINT32_C(0x2b797d));
    WR(out,UINT32_C(0x0039efb8),UINT32_C(0x2b7981));
    RD(E+4u,out,UINT32_C(0x2b7987));
    WR(out+0x1cu,0u,UINT32_C(0x2b798d));
    RD(E+4u,out,UINT32_C(0x2b7990));
    WR(out+0x2cu,0u,UINT32_C(0x2b7994));
    RD(E+4u,out,UINT32_C(0x2b7997));
    WR(out+0x3cu,0u,UINT32_C(0x2b799b));
    RD(E+4u,out,UINT32_C(0x2b799e));
    WR(out+0x4cu,0u,UINT32_C(0x2b79a2));
    RD(E+8u,src,UINT32_C(0x2b79a5));
    FLD(src+0x14u,UINT32_C(0x2b79a9));
    RD(E+4u,out,UINT32_C(0x2b79ac));
    FLD(src+0x18u,UINT32_C(0x2b79b0));
    RD(src+0x10u,word,UINT32_C(0x2b79b3));
    WR(out+0x40u,word,UINT32_C(0x2b79b6));
    FXCH(UINT32_C(0x2b79b9));
    FSTP(out+0x44u,UINT32_C(0x2b79bb));
    FSTP(out+0x48u,UINT32_C(0x2b79c1));
    RD(E+4u,out,UINT32_C(0x2b79c4));
    WR(out+0x4cu,0u,UINT32_C(0x2b79c8));
    RD(E+8u,src,UINT32_C(0x2b79cb));
    FLD(src+4u,UINT32_C(0x2b79cf));
    RD(E+4u,out,UINT32_C(0x2b79d2));
    FLD(src+8u,UINT32_C(0x2b79d6));
    RD(src,word,UINT32_C(0x2b79d9));
    WR(out+0x10u,word,UINT32_C(0x2b79db));
    FXCH(UINT32_C(0x2b79de));
    FSTP(out+0x14u,UINT32_C(0x2b79e0));
    FSTP(out+0x18u,UINT32_C(0x2b79e6));
    RD(E+4u,out,UINT32_C(0x2b79e9));
    WR(out+0x1cu,0u,UINT32_C(0x2b79ed));
    RD(E+8u,src,UINT32_C(0x2b79f0));
    RD(src+0x20u,word,UINT32_C(0x2b79f4));
    RD(E+4u,out,UINT32_C(0x2b79f7));
    WR(out+4u,word,UINT32_C(0x2b79fb));
    RD(E+8u,src,UINT32_C(0x2b79fe));
    RD(src+0x24u,word,UINT32_C(0x2b7a02));
    RD(E+4u,out,UINT32_C(0x2b7a05));
    WR(out+8u,word,UINT32_C(0x2b7a09));
    RD(E+4u,out,UINT32_C(0x2b7a0c));
    FLD(out+0x14u,UINT32_C(0x2b7a10));
    FLD(out+0x18u,UINT32_C(0x2b7a16));
    RD(out+0x10u,word,UINT32_C(0x2b7a19));
    WR(out+0x30u,word,UINT32_C(0x2b7a1c));
    FXCH(UINT32_C(0x2b7a1e));
    FSTP(out+0x34u,UINT32_C(0x2b7a20));
    FSTP(out+0x38u,UINT32_C(0x2b7a23));
    RD(E+4u,out,UINT32_C(0x2b7a26));
    WR(out+0x3cu,0u,UINT32_C(0x2b7a2a));
    r.dest=out;r.src=src;
    r.guest_esp=E-UINT32_C(0x10);
    r.pc=UINT32_C(0x2b7a2d);
    r.status=BF_002B7970_OK;
#undef RD
#undef WR
#undef FLD
#undef FSTP
#undef FXCH
    return r;
}
#endif
