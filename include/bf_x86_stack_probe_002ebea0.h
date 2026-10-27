/* Explicit-state ISO C11 model of original Xbox entry 0x002EBEA0.
 * Original 65-byte body SHA-256:
 * B77AD187F6F3DB2A5AE4F8E214B023D7C62CE25A38CE769A993D2A8C81643760
 * See docs/evidence/002ebea0-stack-effect.md for provenance and boundaries.
 * This does not change host ESP or provide guest exception delivery. */
#ifndef BF_X86_STACK_PROBE_002EBEA0_H
#define BF_X86_STACK_PROBE_002EBEA0_H

#include <stdbool.h>
#include <stdint.h>

typedef struct bf_stack_probe_002ebea0_state {
    uint32_t eax, ecx, esp, eip, eflags, eflags_defined;
} bf_stack_probe_002ebea0_state;

typedef struct bf_stack_probe_002ebea0_memory {
    void *user;
    bool (*read32)(void *, uint32_t, uint32_t *);
    bool (*write32)(void *, uint32_t, uint32_t);
} bf_stack_probe_002ebea0_memory;

typedef enum bf_stack_probe_002ebea0_status {
    BF_STACK_PROBE_OK = 0,
    BF_STACK_PROBE_READ_FAULT,
    BF_STACK_PROBE_WRITE_FAULT
} bf_stack_probe_002ebea0_status;

typedef struct bf_stack_probe_002ebea0_result {
    bf_stack_probe_002ebea0_state state;
    bf_stack_probe_002ebea0_status status;
    uint32_t fault_address;
} bf_stack_probe_002ebea0_result;

enum {
    BF_SP_002EBEA0_CF = 0x001,
    BF_SP_002EBEA0_PF = 0x004,
    BF_SP_002EBEA0_AF = 0x010,
    BF_SP_002EBEA0_ZF = 0x040,
    BF_SP_002EBEA0_SF = 0x080,
    BF_SP_002EBEA0_OF = 0x800,
    BF_SP_002EBEA0_ARITH = 0x8d5
};

static inline uint32_t bf_sp_002ebea0_szp(uint32_t value)
{
    /* PF is even parity of the low eight result bits, not all 32 bits. */
    uint32_t parity = value & UINT32_C(0xff);
    parity ^= parity >> 4;
    parity ^= parity >> 2;
    parity ^= parity >> 1;
    return ((parity & 1u) == 0 ? BF_SP_002EBEA0_PF : 0u) |
           (value == 0 ? BF_SP_002EBEA0_ZF : 0u) |
           ((value & UINT32_C(0x80000000)) != 0 ? BF_SP_002EBEA0_SF : 0u);
}

static inline void bf_sp_002ebea0_logic(bf_stack_probe_002ebea0_state *s,
                                       uint32_t value)
{
    /* TEST defines CF=OF=0 and SZP. AF is undefined: retain its old value
     * for storage only and explicitly clear its definedness bit. */
    const uint32_t defined = BF_SP_002EBEA0_ARITH & ~BF_SP_002EBEA0_AF;
    s->eflags = (s->eflags & ~defined) | bf_sp_002ebea0_szp(value);
    s->eflags_defined = (s->eflags_defined | defined) & ~BF_SP_002EBEA0_AF;
}

static inline uint32_t bf_sp_002ebea0_add(bf_stack_probe_002ebea0_state *s,
                                        uint32_t left, uint32_t right)
{
    const uint32_t value = left + right; /* x86 DWORD wrap */
    const uint32_t flags = bf_sp_002ebea0_szp(value) |
        (value < left ? BF_SP_002EBEA0_CF : 0u) |
        (((left ^ right ^ value) & 0x10u) != 0 ? BF_SP_002EBEA0_AF : 0u) |
        ((~(left ^ right) & (left ^ value) & UINT32_C(0x80000000)) != 0
             ? BF_SP_002EBEA0_OF : 0u);
    s->eflags = (s->eflags & ~BF_SP_002EBEA0_ARITH) | flags;
    s->eflags_defined |= BF_SP_002EBEA0_ARITH;
    return value;
}

static inline uint32_t bf_sp_002ebea0_sub(bf_stack_probe_002ebea0_state *s,
                                        uint32_t left, uint32_t right)
{
    const uint32_t value = left - right; /* x86 DWORD wrap */
    const uint32_t flags = bf_sp_002ebea0_szp(value) |
        (left < right ? BF_SP_002EBEA0_CF : 0u) |
        (((left ^ right ^ value) & 0x10u) != 0 ? BF_SP_002EBEA0_AF : 0u) |
        (((left ^ right) & (left ^ value) & UINT32_C(0x80000000)) != 0
             ? BF_SP_002EBEA0_OF : 0u);
    s->eflags = (s->eflags & ~BF_SP_002EBEA0_ARITH) | flags;
    s->eflags_defined |= BF_SP_002EBEA0_ARITH;
    return value;
}

/* Preconditions: input.eip==0x002EBEA0; mem and both callbacks are valid.
 * Each callback performs one original four-byte memory access. Failure stops
 * the model at that instruction with earlier effects retained. The backend
 * owns access-width faults and any partial write behavior; only the starting
 * DWORD address wraps here. PUSH commits ESP only after a successful write. */
static inline bf_stack_probe_002ebea0_result bf_stack_probe_002ebea0(
    bf_stack_probe_002ebea0_state input,
    const bf_stack_probe_002ebea0_memory *mem)
{
    bf_stack_probe_002ebea0_result out = {input, BF_STACK_PROBE_OK, 0};
    bf_stack_probe_002ebea0_state *s = &out.state;
    uint32_t value, address;

    s->eip = UINT32_C(0x002ebea0); /* TEST EAX,EAX */
    bf_sp_002ebea0_logic(s, s->eax);
    s->eip = UINT32_C(0x002ebea2); /* JE 0x002EBEB8 */
    if ((s->eflags & BF_SP_002EBEA0_ZF) != 0)
        goto original_ret;
    s->eip = UINT32_C(0x002ebea4); /* CMP EAX,4096 */
    (void)bf_sp_002ebea0_sub(s, s->eax, 4096u);
    s->eip = UINT32_C(0x002ebea9); /* JAE 0x002EBEB9 */
    if ((s->eflags & BF_SP_002EBEA0_CF) == 0)
        goto page_path;

    s->eip = UINT32_C(0x002ebeab); /* NEG EAX */
    s->eax = bf_sp_002ebea0_sub(s, 0, s->eax);
    s->eip = UINT32_C(0x002ebead); /* ADD EAX,ESP */
    s->eax = bf_sp_002ebea0_add(s, s->eax, s->esp);
    s->eip = UINT32_C(0x002ebeaf); /* ADD EAX,4 */
    s->eax = bf_sp_002ebea0_add(s, s->eax, 4u);
    s->eip = UINT32_C(0x002ebeb2); /* TEST DWORD PTR [EAX],EAX */
    address = s->eax;
    if (!mem->read32(mem->user, address, &value)) goto read_fault;
    bf_sp_002ebea0_logic(s, value & s->eax);
    s->eip = UINT32_C(0x002ebeb4); /* XCHG ESP,EAX; no flags */
    value = s->eax;
    s->eax = s->esp;
    s->esp = value;
    s->eip = UINT32_C(0x002ebeb5); /* MOV EAX,DWORD PTR [EAX] */
    address = s->eax;
    if (!mem->read32(mem->user, address, &value)) goto read_fault;
    s->eax = value;
    s->eip = UINT32_C(0x002ebeb7); /* PUSH EAX */
    address = s->esp - 4u;
    if (!mem->write32(mem->user, address, s->eax)) goto write_fault;
    s->esp = address;
original_ret:
    s->eip = UINT32_C(0x002ebeb8); /* RET reads return DWORD */
    address = s->esp;
    if (!mem->read32(mem->user, address, &value)) goto read_fault;
    s->esp += 4u;
    s->eip = value;
    return out;

page_path:
    s->eip = UINT32_C(0x002ebeb9); /* PUSH ECX */
    address = s->esp - 4u;
    if (!mem->write32(mem->user, address, s->ecx)) goto write_fault;
    s->esp = address;
    s->eip = UINT32_C(0x002ebeba); /* LEA ECX,[ESP+8]; no flags */
    s->ecx = s->esp + 8u;
page_loop:
    s->eip = UINT32_C(0x002ebebe); /* SUB ECX,4096 */
    s->ecx = bf_sp_002ebea0_sub(s, s->ecx, 4096u);
    s->eip = UINT32_C(0x002ebec4); /* SUB EAX,4096 */
    s->eax = bf_sp_002ebea0_sub(s, s->eax, 4096u);
    s->eip = UINT32_C(0x002ebec9); /* TEST DWORD PTR [ECX],EAX */
    address = s->ecx;
    if (!mem->read32(mem->user, address, &value)) goto read_fault;
    bf_sp_002ebea0_logic(s, value & s->eax);
    s->eip = UINT32_C(0x002ebecb); /* CMP EAX,4096 */
    (void)bf_sp_002ebea0_sub(s, s->eax, 4096u);
    s->eip = UINT32_C(0x002ebed0); /* JAE 0x002EBEBE */
    if ((s->eflags & BF_SP_002EBEA0_CF) == 0) goto page_loop;
    s->eip = UINT32_C(0x002ebed2); /* SUB ECX,EAX */
    s->ecx = bf_sp_002ebea0_sub(s, s->ecx, s->eax);
    s->eip = UINT32_C(0x002ebed4); /* MOV EAX,ESP */
    s->eax = s->esp;
    s->eip = UINT32_C(0x002ebed6); /* TEST DWORD PTR [ECX],EAX */
    address = s->ecx;
    if (!mem->read32(mem->user, address, &value)) goto read_fault;
    bf_sp_002ebea0_logic(s, value & s->eax);
    s->eip = UINT32_C(0x002ebed8); /* MOV ESP,ECX */
    s->esp = s->ecx;
    s->eip = UINT32_C(0x002ebeda); /* MOV ECX,DWORD PTR [EAX] */
    address = s->eax;
    if (!mem->read32(mem->user, address, &value)) goto read_fault;
    s->ecx = value;
    s->eip = UINT32_C(0x002ebedc); /* MOV EAX,DWORD PTR [EAX+4] */
    address = s->eax + 4u;
    if (!mem->read32(mem->user, address, &value)) goto read_fault;
    s->eax = value;
    s->eip = UINT32_C(0x002ebedf); /* PUSH EAX */
    address = s->esp - 4u;
    if (!mem->write32(mem->user, address, s->eax)) goto write_fault;
    s->esp = address;
    s->eip = UINT32_C(0x002ebee0); /* RET */
    address = s->esp;
    if (!mem->read32(mem->user, address, &value)) goto read_fault;
    s->esp += 4u;
    s->eip = value;
    return out;

read_fault:
    out.status = BF_STACK_PROBE_READ_FAULT;
    out.fault_address = address;
    return out;
write_fault:
    out.status = BF_STACK_PROBE_WRITE_FAULT;
    out.fault_address = address;
    return out;
}

#endif
