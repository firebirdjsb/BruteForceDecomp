/* Xbox x86 0x002EBEA0 guest stack probe / allocation, verified by
 * original default(2).xbe bytes (SHA-256 below).
 * No host allocation or host ESP is modified. This is NOT a direct
 * C ABI replacement for the original bare-register FUN_002ebea0 entry.
 * XBE: B6EA5D4DD6500AE86C3F5E3E4618BC9B1E3FACDDCB483170DFEE7A787087C721
 * X86 body: 0x002EBEA0..0x002EBEE0 (65 bytes),
 * B77AD187F6F3DB2A5AE4F8E214B023D7C62CE25A38CE769A993D2A8C81643760
 */
#ifndef BF_002EBEA0_GUEST_CHKSTK_H
#define BF_002EBEA0_GUEST_CHKSTK_H
#include <stdbool.h>
#include <stdint.h>

typedef struct bf_002ebea0_guest_mem {
    void *context;
    bool (*read_dword)(void *, uint32_t, uint32_t *);
    bool (*write_dword)(void *, uint32_t, uint32_t);
} bf_002ebea0_guest_mem;

typedef struct bf_002ebea0_regs {
    uint32_t eax;             /* requested stack bytes, passed in EAX */
    uint32_t ecx;             /* original ECX (preserved by large path) */
    uint32_t esp;             /* entry ESP, points to return-address DWORD */
    uint32_t next_eip;        /* value consumed by original final RET */
} bf_002ebea0_regs;

typedef enum bf_002ebea0_status {
    BF_002EBEA0_OK = 0,
    BF_002EBEA0_INVALID_IO,
    BF_002EBEA0_READ_FAULT,
    BF_002EBEA0_WRITE_FAULT
} bf_002ebea0_status;

typedef struct bf_002ebea0_result {
    bf_002ebea0_status status;
    bf_002ebea0_regs regs;
    uint32_t fault_address;
    uint32_t stack_probe_reads; /* only original TEST m32 reads, not RET */
    uint32_t eflags_defined; /* CF,PF,ZF,SF,OF only; AF undefined on TEST */
    uint32_t eflags_values; /* contents of these flags after final TEST */
} bf_002ebea0_result;

/* EFLAGS produced by original x86 TEST r/m32,r32. AF is architecturally
 * undefined and the original remaining bits must be preserved by the CPU.
 */
static inline uint32_t bf_002ebea0_test_flags(uint32_t bits)
{
    uint32_t low = bits & UINT32_C(0xff);
    low ^= low >> 4;
    low &= UINT32_C(0xf);
    const uint32_t even_parity = ((UINT32_C(0x6996) >> low) & 1u) ^ 1u;
    return (bits == 0u ? UINT32_C(0x40) : 0u) |
           (bits & UINT32_C(0x80000000) ? UINT32_C(0x80) : 0u) |
           (even_parity ? UINT32_C(0x4) : 0u);
}

/* This bridge commits registers only on success. On diagnostic faults,
 * fault_address records the first rejected access; exception/restart
 * semantics and unmodeled EFLAGS require a real guest CPU backend.
 * All stack addresses intentionally use unsigned 32-bit wrapping.
 */
static inline bf_002ebea0_result bf_002ebea0_execute(
    const bf_002ebea0_guest_mem *mem, bf_002ebea0_regs initial)
{
    bf_002ebea0_result out = {BF_002EBEA0_INVALID_IO, initial, 0, 0, 0, 0};
    uint32_t requested = initial.eax;
    uint32_t saved_ecx = initial.ecx;
    uint32_t original_return = 0;
    uint32_t ignored = 0;
    uint32_t new_esp;
    uint32_t source_esp;
    if (!mem || !mem->read_dword || !mem->write_dword) return out;
#define BF_CHKSTK_READ(a, value) do {                                  \
    const uint32_t addr = (a);                                        \
    if (!mem->read_dword(mem->context, addr, &(value))) {              \
        out.status = BF_002EBEA0_READ_FAULT;                          \
        out.fault_address = addr; return out;                         \
    }                                                                 \
} while (0)
#define BF_CHKSTK_WRITE(a, value) do {                                 \
    const uint32_t addr = (a);                                        \
    if (!mem->write_dword(mem->context, addr, (value))) {             \
        out.status = BF_002EBEA0_WRITE_FAULT;                         \
        out.fault_address = addr; return out;                         \
    }                                                                 \
} while (0)
#define BF_CHKSTK_TOUCH(a, operand) do {                              \
    BF_CHKSTK_READ((a), ignored);                                     \
    ++out.stack_probe_reads;                                          \
    out.eflags_values = bf_002ebea0_test_flags(ignored & (operand));  \
} while (0)
    if (requested == 0) {
        /* 2EBEA0 TEST EAX,EAX; JE 2EBEB8; RET. */
        BF_CHKSTK_READ(initial.esp, original_return);
        out.eflags_values = bf_002ebea0_test_flags(0);
        out.regs.next_eip = original_return;
        out.regs.esp = initial.esp + UINT32_C(4);
        out.eflags_defined = UINT32_C(0x8c5);
        out.status = BF_002EBEA0_OK;
        return out;
    }
    if (requested < UINT32_C(0x1000)) {
        /* NEG EAX / ADD EAX,ESP / ADD EAX,4 / TEST [EAX],EAX.
         * XCHG ESP,EAX / MOV EAX,[EAX] / PUSH EAX / RET. */
        new_esp = initial.esp + UINT32_C(4) - requested;
        BF_CHKSTK_TOUCH(new_esp, new_esp);
        BF_CHKSTK_READ(initial.esp, original_return);
        BF_CHKSTK_WRITE(new_esp - UINT32_C(4), original_return);
        BF_CHKSTK_READ(new_esp - UINT32_C(4), out.regs.next_eip);
    } else {
        /* PUSH ECX, LEA ECX,[ESP+8], then 4 KiB page probes.
         * Original eax decrements before TEST; for exact multiple of
         * 4096 the final target is read *again* by TEST [ECX],EAX. */
        source_esp = initial.esp - UINT32_C(4);
        BF_CHKSTK_WRITE(source_esp, saved_ecx);
        uint32_t probe_ptr = initial.esp + UINT32_C(4);
        do {
            probe_ptr -= UINT32_C(0x1000);
            requested -= UINT32_C(0x1000);
            BF_CHKSTK_TOUCH(probe_ptr, requested);
        } while (requested >= UINT32_C(0x1000));
        probe_ptr -= requested;
        BF_CHKSTK_TOUCH(probe_ptr, source_esp);
        /* MOV EAX,ESP / TEST [ECX],EAX / MOV ESP,ECX /
         * MOV ECX,[EAX] / MOV EAX,[EAX+4] / PUSH EAX / RET. */
        BF_CHKSTK_READ(source_esp, saved_ecx);
        BF_CHKSTK_READ(initial.esp, original_return);
        new_esp = probe_ptr;
        BF_CHKSTK_WRITE(new_esp - UINT32_C(4), original_return);
        BF_CHKSTK_READ(new_esp - UINT32_C(4), out.regs.next_eip);
    }
    out.regs.eax = original_return;
    out.regs.ecx = saved_ecx;
    out.regs.esp = new_esp;
    out.eflags_defined = UINT32_C(0x8c5);
    out.status = BF_002EBEA0_OK;
#undef BF_CHKSTK_READ
#undef BF_CHKSTK_WRITE
#undef BF_CHKSTK_TOUCH
    return out;
}
#endif
