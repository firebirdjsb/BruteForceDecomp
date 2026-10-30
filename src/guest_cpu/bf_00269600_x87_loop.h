/* Brute Force original Xbox 0x0026965F..0x002696AD x87 normalize loop.
 * XBE SHA-256: B6EA5D4DD6500AE86C3F5E3E4618BC9B1E3FACDDCB483170DFEE7A787087C721.
 * Scoped original-instruction execution bridge, not host C floating-point
 * substitution or a complete FUN_00269600 implementation.
 */
#ifndef BF_00269600_X87_LOOP_H
#define BF_00269600_X87_LOOP_H
#include "bf_002ebea0_guest_chkstk.h"

typedef struct bf_00269600_x87_memory {
    bf_002ebea0_guest_mem words;
    /* FCOMP m64fp must be a single guest 8-byte operand access;
     * splitting into two host float loads changes fault semantics. */
    bool (*read_qword)(void *,uint32_t,uint64_t *);
} bf_00269600_x87_memory;

typedef struct bf_00269600_x87 {
    void *context;
    bool (*fld_m32fp)(void *,uint32_t);
    bool (*fcomp_m64fp)(void *,uint64_t);
    bool (*fnstsw_ax)(void *,uint16_t *);
    bool (*fdiv_m32fp)(void *,uint32_t);
    bool (*fstp_m32fp)(void *,uint32_t *);
} bf_00269600_x87;

typedef enum bf_00269600_x87_status {
    BF_00269600_X87_OK=0,
    BF_00269600_X87_INVALID,
    BF_00269600_X87_READ_FAULT,
    BF_00269600_X87_WRITE_FAULT,
    BF_00269600_X87_BACKEND_FAILED
} bf_00269600_x87_status;

typedef struct bf_00269600_x87_result {
    bf_00269600_x87_status status;
    uint32_t fault_guest_va;
    uint32_t instruction_va;
    uint32_t iterations;
    uint32_t reciprocal_count;
    uint32_t final_ecx;
    uint16_t last_status_word;
} bf_00269600_x87_result;

/* 0x269680 TEST AH,0x05; 0x269683 JP 0x26968F.
 * JP is taken when the tested status bits have EVEN parity: AH
 * bits 0 and 2 both clear OR both set. The latter includes the
 * unordered x87 FCOMP outcome and must not be simplified to >=.
 */
static inline bool bf_00269600_jp_test_ah_5(uint16_t sw)
{
    uint32_t masked=(uint32_t)((sw>>8)&UINT16_C(5));
    return masked==0u || masked==5u;
}

/* live_esp is the actual guest ESP immediately after the original
 * CALL 0x269870 returns (before MOV EDX,[EBP+0x0C]).
 * EBX retains the object pointer. Owner supplies guest EBP and the
 * original x87 stack/control word, EFLAGS, and exception translation.
 * This replay stops at the branch to original 0x2696AD; in-flight
 * guest faults have diagnostic addresses, not Xbox SEH state.
 */
static inline bf_00269600_x87_result bf_00269600_execute_x87_loop(
    const bf_00269600_x87_memory *mem,
    const bf_00269600_x87 *fp,
    uint32_t guest_ebp,uint32_t receiver_ebx,uint32_t live_esp)
{
    bf_00269600_x87_result out={BF_00269600_X87_INVALID,0,0,0,0,0,0};
    uint32_t counter_va,count,source_bits,one_bits,old_count,write_bits;
    uint64_t reference_bits;
    if(!mem || !mem->words.read_dword || !mem->words.write_dword ||
       !mem->read_qword || !fp || !fp->fld_m32fp ||
       !fp->fcomp_m64fp || !fp->fnstsw_ax ||
       !fp->fdiv_m32fp || !fp->fstp_m32fp)
        return out;
#define BF_READ_DWORD(addr,dst,pc) do {                              \
    const uint32_t address=(addr);out.instruction_va=(pc);           \
    if(!mem->words.read_dword(mem->words.context,address,&(dst))) {  \
        out.status=BF_00269600_X87_READ_FAULT;                      \
        out.fault_guest_va=address;return out;                       \
    }                                                               \
} while(0)
#define BF_WRITE_DWORD(addr,value,pc) do {                           \
    const uint32_t address=(addr);out.instruction_va=(pc);           \
    if(!mem->words.write_dword(mem->words.context,address,(value))) {\
        out.status=BF_00269600_X87_WRITE_FAULT;                     \
        out.fault_guest_va=address;return out;                       \
    }                                                               \
} while(0)
#define BF_FP(op,arg,pc) do {                                       \
    out.instruction_va=(pc);                                       \
    if(!fp->op(fp->context,(arg))) {                                \
       out.status=BF_00269600_X87_BACKEND_FAILED;return out;      \
    }                                                              \
} while(0)
    BF_READ_DWORD(guest_ebp+UINT32_C(0xc),counter_va,UINT32_C(0x26965f));
    BF_WRITE_DWORD(counter_va,0u,UINT32_C(0x269662));
    BF_READ_DWORD(receiver_ebx+UINT32_C(0x514),count,UINT32_C(0x269668));
    out.final_ecx=0u;
    out.status=BF_00269600_X87_OK;
    if (count==0u) return out;
    uint32_t ecx=0u;
    for (;;) {
        const uint32_t source_va=live_esp+UINT32_C(0x10)+ecx*UINT32_C(4);
        BF_READ_DWORD(source_va,source_bits,UINT32_C(0x269674));
        BF_FP(fld_m32fp,source_bits,UINT32_C(0x269674));
        out.instruction_va=UINT32_C(0x269678);
        if(!mem->read_qword(mem->words.context,UINT32_C(0x003a5100),&reference_bits)){
            out.status=BF_00269600_X87_READ_FAULT;
            out.fault_guest_va=UINT32_C(0x003a5100);return out;
        }
        BF_FP(fcomp_m64fp,reference_bits,UINT32_C(0x269678));
        BF_FP(fnstsw_ax,&out.last_status_word,UINT32_C(0x26967e));
        if (!bf_00269600_jp_test_ah_5(out.last_status_word)) {
            BF_WRITE_DWORD(source_va,0u,UINT32_C(0x269685));
        } else {
            BF_READ_DWORD(UINT32_C(0x003a4f78),one_bits,UINT32_C(0x26968f));
            BF_FP(fld_m32fp,one_bits,UINT32_C(0x26968f));
            BF_READ_DWORD(counter_va,old_count,UINT32_C(0x269695));
            BF_READ_DWORD(source_va,source_bits,UINT32_C(0x269697));
            BF_FP(fdiv_m32fp,source_bits,UINT32_C(0x269697));
            BF_WRITE_DWORD(counter_va,old_count+UINT32_C(1),UINT32_C(0x26969c));
            BF_FP(fstp_m32fp,&write_bits,UINT32_C(0x26969e));
            BF_WRITE_DWORD(source_va,write_bits,UINT32_C(0x26969e));
            ++out.reciprocal_count;
        }
        ++out.iterations;
        BF_READ_DWORD(receiver_ebx+UINT32_C(0x514),count,UINT32_C(0x2696a2));
        ++ecx; /* original INC ECX at 0x2696A8 */
        out.final_ecx=ecx;
        if(ecx>=count) break; /* unsigned CMP ECX,EAX / JB */
    }
#undef BF_READ_DWORD
#undef BF_WRITE_DWORD
#undef BF_FP
    out.instruction_va=UINT32_C(0x2696ad);
    return out;
}
#endif
