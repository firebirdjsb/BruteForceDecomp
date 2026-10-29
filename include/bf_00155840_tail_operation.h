/* Original 0x00155C1C..0x00155D35, within body SHA-256
 * F7B7FFD8D854213AFA2EF6FFE9CE142C332CD7EC3A27B05BCCE526F83A1A78C6.
 * Explicit instruction backend: no host float formulas or invented FPU state.
 * Guest arithmetic addresses wrap at 32 bits. No caller integration is implied.
 */
#ifndef BF_00155840_TAIL_OPERATION_H
#define BF_00155840_TAIL_OPERATION_H
#include "bf_00155840_x87_call_bridge.h"

typedef struct bf_00155840_tail_x87 {
    bf_621c0_x87_operations base;
    bool (*fdiv_m32fp)(void *, uint32_t);
    bool (*fsubp_st1_st0)(void *);
    bool (*fst_m32fp)(void *, uint32_t *); /* round copy, retain ST0 */
    bool (*fld_st)(void *, unsigned);     /* duplicate indexed pre-push ST */
    bool (*fmul_st)(void *, unsigned);    /* ST0 *= ST(i), no pop */
    bool (*fxch_st)(void *, unsigned);
    bool (*discard_st0)(void *);         /* FSTP ST(0), no memory access */
} bf_00155840_tail_x87;

typedef struct bf_00155840_tail_external {
    void *ctx;
    /* Execute original 0001FC40 with these guest EAX/ECX; EAX is preserved.
     * Callback owns original CALL/RET/scratch/FPU effects; no host ABI inferred. */
    bool (*getter_0001fc40)(void *, uint32_t, uint32_t);
    /* Actual low-lane RSQRTSS approximation/environment, not 1/sqrtf. */
    bool (*rsqrtss_low)(void *, uint32_t, uint32_t *);
    bool (*read_u8)(void *, uint32_t, uint8_t *);
} bf_00155840_tail_external;

typedef enum bf_00155840_tail_status {
    BF_00155840_TAIL_OK, BF_00155840_TAIL_INVALID_INTERFACE,
    BF_00155840_TAIL_READ_FAILED, BF_00155840_TAIL_WRITE_FAILED,
    BF_00155840_TAIL_X87_FAILED, BF_00155840_TAIL_GETTER_FAILED,
    BF_00155840_TAIL_SSE_FAILED
} bf_00155840_tail_status;
typedef struct bf_00155840_tail_result {
    bf_00155840_tail_status status;
    uint32_t instruction_va, fault_guest_addr;
    bool test_al_10_nonzero; /* TEST at 155CEA; consumed by JNE 155D36 */
} bf_00155840_tail_result;

/* Executes the whole bounded operation in original instruction/memory order.
 * Backend retains x87 precision, preexisting stack and floating environment.
 * Stops on first reported failure without rollback. Failure reporting is a
 * diagnostic boundary, not emulation of original exceptions/restart semantics.
 * XMM0 upper lanes and other general registers remain outside this operation.
 */
static inline bf_00155840_tail_result bf_00155840_execute_tail(
    const bf_621c0_guest_words *m, const bf_00155840_tail_x87 *f,
    const bf_00155840_tail_external *e, uint32_t ebp, uint32_t esi)
{
    bf_00155840_tail_result r = {BF_00155840_TAIL_INVALID_INTERFACE,0,0,false};
    uint32_t w, a, ecx_bits, eax_bits, getter_eax = ebp - 0x38u;
    uint8_t al;
    if (!m || !m->read_u32 || !m->write_u32 || !f || !e ||
        !f->base.fld_m32fp || !f->base.fmul_m32fp ||
        !f->base.fadd_m32fp || !f->base.faddp_st1_st0 ||
        !f->base.fstp_m32fp || !f->fdiv_m32fp || !f->fsubp_st1_st0 ||
        !f->fst_m32fp || !f->fld_st || !f->fmul_st || !f->fxch_st ||
        !f->discard_st0 || !e->getter_0001fc40 || !e->rsqrtss_low || !e->read_u8)
        return r;
#define BF_T_PC(pc) (r.instruction_va = UINT32_C(0x##pc))
#define BF_T_FAIL(s) do { r.status = (s); return r; } while (0)
#define BF_T_READ(pc,addr,dst) do { BF_T_PC(pc); a=(addr); \
    if (!m->read_u32(m->ctx,a,&(dst))) { r.fault_guest_addr=a; \
    BF_T_FAIL(BF_00155840_TAIL_READ_FAILED); } } while (0)
#define BF_T_WRITE(pc,addr,src) do { BF_T_PC(pc); a=(addr); \
    if (!m->write_u32(m->ctx,a,(src))) { r.fault_guest_addr=a; \
    BF_T_FAIL(BF_00155840_TAIL_WRITE_FAILED); } } while (0)
#define BF_T_MEM(pc,op,addr) do { BF_T_READ(pc,addr,w); \
    if (!f->base.op(f->base.ctx,w)) BF_T_FAIL(BF_00155840_TAIL_X87_FAILED); } while (0)
#define BF_T_EXT(pc,op,...) do { BF_T_PC(pc); \
    if (!f->op(f->base.ctx,__VA_ARGS__)) BF_T_FAIL(BF_00155840_TAIL_X87_FAILED); } while (0)
#define BF_T_POP(pc,addr) do { BF_T_PC(pc); \
    if (!f->base.fstp_m32fp(f->base.ctx,&w)) BF_T_FAIL(BF_00155840_TAIL_X87_FAILED); \
    BF_T_WRITE(pc,addr,w); } while (0)
#define BF_T_SUBP(pc) do { BF_T_PC(pc); \
    if (!f->fsubp_st1_st0(f->base.ctx)) BF_T_FAIL(BF_00155840_TAIL_X87_FAILED); } while (0)
#define BF_T_ADDP(pc) do { BF_T_PC(pc); \
    if (!f->base.faddp_st1_st0(f->base.ctx)) BF_T_FAIL(BF_00155840_TAIL_X87_FAILED); } while (0)
#define BF_T_RSQRT(pc,storepc,offset) do { BF_T_READ(pc,ebp-0x1cu,w); \
    if (!e->rsqrtss_low(e->ctx,w,&w)) BF_T_FAIL(BF_00155840_TAIL_SSE_FAILED); \
    BF_T_WRITE(storepc,ebp-(offset),w); } while (0)
    BF_T_MEM(155c1c,fld_m32fp,ebp-0x1cu);
    BF_T_MEM(155c1f,fadd_m32fp,ebp-4u);
    BF_T_READ(155c22,ebp-0x18u,w); BF_T_EXT(155c22,fdiv_m32fp,w);
    BF_T_POP(155c25,ebp-0x1cu);
    BF_T_RSQRT(155c28,155c2d,0x18u);
    BF_T_MEM(155c32,fld_m32fp,ebp-0x18u);
    BF_T_MEM(155c35,fmul_m32fp,ebp-4u);
    BF_T_WRITE(155c3d,ebp-0x4cu,0);
    BF_T_WRITE(155c44,ebp-0x3cu,0);
    BF_T_POP(155c4b,ebp-0xcu);
    BF_T_PC(155c4e);
    if (!e->getter_0001fc40(e->ctx,getter_eax,esi))
        BF_T_FAIL(BF_00155840_TAIL_GETTER_FAILED);
    BF_T_MEM(155c53,fld_m32fp,ebp-0x28u);
    BF_T_MEM(155c56,fmul_m32fp,getter_eax);
    BF_T_MEM(155c58,fld_m32fp,ebp-0x2cu);
    BF_T_MEM(155c5b,fmul_m32fp,getter_eax+4u);
    BF_T_SUBP(155c5e); BF_T_POP(155c60,ebp-0x18u);
    BF_T_MEM(155c63,fld_m32fp,ebp-0x2cu);
    BF_T_READ(155c66,ebp-0x18u,ecx_bits);
    BF_T_MEM(155c69,fmul_m32fp,getter_eax+8u);
    BF_T_MEM(155c6c,fld_m32fp,ebp-0x24u);
    BF_T_MEM(155c6f,fmul_m32fp,getter_eax);
    BF_T_SUBP(155c71); BF_T_POP(155c73,ebp-0x1cu);
    BF_T_MEM(155c76,fld_m32fp,ebp-0x24u);
    BF_T_MEM(155c79,fmul_m32fp,getter_eax+4u);
    BF_T_MEM(155c7c,fld_m32fp,ebp-0x28u);
    BF_T_MEM(155c7f,fmul_m32fp,getter_eax+8u);
    BF_T_READ(155c82,ebp-0x1cu,eax_bits);
    BF_T_WRITE(155c85,ebp-0x54u,eax_bits);
    BF_T_WRITE(155c88,ebp-0x50u,ecx_bits);
    BF_T_SUBP(155c8b);
    BF_T_EXT(155c8d,fst_m32fp,&w); BF_T_WRITE(155c8d,ebp-0x58u,w);
    BF_T_MEM(155c90,fld_m32fp,ebp-0x54u);
    BF_T_MEM(155c93,fmul_m32fp,ebp-0x54u);
    BF_T_MEM(155c96,fld_m32fp,ebp-0x50u);
    BF_T_MEM(155c99,fmul_m32fp,ebp-0x50u);
    BF_T_ADDP(155c9c); BF_T_EXT(155c9e,fld_st,1u);
    BF_T_EXT(155ca0,fmul_st,2u); BF_T_ADDP(155ca2);
    BF_T_POP(155ca4,ebp-0x1cu);
    BF_T_PC(155ca7);
    if (!f->discard_st0(f->base.ctx)) BF_T_FAIL(BF_00155840_TAIL_X87_FAILED);
    BF_T_RSQRT(155ca9,155cae,0x10u);
    BF_T_MEM(155cb3,fld_m32fp,ebp-0x58u); BF_T_MEM(155cb6,fmul_m32fp,ebp-0x10u);
    BF_T_MEM(155cb9,fld_m32fp,ebp-0x54u); BF_T_MEM(155cbc,fmul_m32fp,ebp-0x10u);
    BF_T_MEM(155cbf,fld_m32fp,ebp-0x50u); BF_T_MEM(155cc2,fmul_m32fp,ebp-0x10u);
    BF_T_POP(155cc5,ebp-0x50u);
    BF_T_MEM(155cc8,fld_m32fp,ebp-0x2cu); BF_T_EXT(155ccb,fmul_st,1u);
    BF_T_EXT(155ccd,fld_st,2u); BF_T_MEM(155ccf,fmul_m32fp,ebp-0x28u);
    BF_T_SUBP(155cd2); BF_T_POP(155cd4,ebp-0x18u);
    BF_T_EXT(155cd7,fld_st,1u); BF_T_READ(155cd9,ebp-0x18u,eax_bits);
    BF_T_MEM(155cdc,fmul_m32fp,ebp-0x24u); BF_T_WRITE(155cdf,ebp-0x40u,eax_bits);
    BF_T_MEM(155ce2,fld_m32fp,ebp-0x50u);
    BF_T_PC(155ce5);
    if (!e->read_u8(e->ctx,UINT32_C(0x0037bd48),&al)) {
        r.fault_guest_addr=UINT32_C(0x0037bd48); BF_T_FAIL(BF_00155840_TAIL_READ_FAILED);
    }
    r.test_al_10_nonzero=(al & 0x10u)!=0;
    BF_T_MEM(155cec,fmul_m32fp,ebp-0x2cu); BF_T_SUBP(155cef);
    BF_T_POP(155cf1,ebp-0x1cu);
    BF_T_MEM(155cf4,fld_m32fp,ebp-0x50u); BF_T_READ(155cf7,ebp-0x1cu,eax_bits);
    BF_T_MEM(155cfa,fmul_m32fp,ebp-0x28u); BF_T_WRITE(155cfd,ebp-0x44u,eax_bits);
    BF_T_EXT(155d00,fld_st,1u); BF_T_MEM(155d02,fmul_m32fp,ebp-0x24u);
    BF_T_SUBP(155d05); BF_T_MEM(155d07,fmul_m32fp,ebp-0xcu);
    BF_T_POP(155d0a,ebp-0x48u);
    BF_T_MEM(155d0d,fld_m32fp,ebp-0x44u); BF_T_MEM(155d10,fmul_m32fp,ebp-0xcu);
    BF_T_POP(155d13,ebp-0x44u);
    BF_T_MEM(155d16,fld_m32fp,ebp-0x40u); BF_T_MEM(155d19,fmul_m32fp,ebp-0xcu);
    BF_T_POP(155d1c,ebp-0x40u);
    BF_T_EXT(155d1f,fxch_st,1u); BF_T_MEM(155d21,fmul_m32fp,ebp-0xcu);
    BF_T_POP(155d24,ebp-0x58u);
    BF_T_MEM(155d27,fmul_m32fp,ebp-0xcu); BF_T_POP(155d2a,ebp-0x54u);
    BF_T_MEM(155d2d,fld_m32fp,ebp-0x50u); BF_T_MEM(155d30,fmul_m32fp,ebp-0xcu);
    BF_T_POP(155d33,ebp-0x50u);
    r.status=BF_00155840_TAIL_OK;
#undef BF_T_PC
#undef BF_T_FAIL
#undef BF_T_READ
#undef BF_T_WRITE
#undef BF_T_MEM
#undef BF_T_EXT
#undef BF_T_POP
#undef BF_T_SUBP
#undef BF_T_ADDP
#undef BF_T_RSQRT
    return r;
}
#endif
