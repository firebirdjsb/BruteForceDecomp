/* Original Xbox 0x001FEB60: 77-byte body SHA-256:
 * 42606AB29F564BC92F0122FFAA816C7872E1284F940D7E44EB260D28AD75A3CC
 * Pinned XBE: B6EA5D4DD6500AE86C3F5E3E4618BC9B1E3FACDDCB483170DFEE7A787087C721
 * EAX points at caller iterator DWORD, EBX at caller match-output DWORD,
 * ESI at filter, EDI at owner. Return AL is 0 or 1; upper EAX bits
 * are NOT reconstructed. All addresses remain 32-bit guest addresses.
 */
#ifndef BF_001FEB60_GUEST_ITERATOR_H
#define BF_001FEB60_GUEST_ITERATOR_H
#include <stdbool.h>
#include <stdint.h>

typedef struct bf_001feb60_guest_io {
    void *ctx;
    bool (*read_u32)(void *, uint32_t, uint32_t *);
    bool (*write_u32)(void *, uint32_t, uint32_t);
} bf_001feb60_guest_io;

typedef struct bf_001feb60_regs {
    uint32_t eax_iterator;
    uint32_t ebx_match;
    uint32_t esi_filter;
    uint32_t edi_owner;
} bf_001feb60_regs;

typedef enum bf_001feb60_status {
    BF_001FEB60_OK,
    BF_001FEB60_INVALID_INTERFACE,
    BF_001FEB60_GUEST_READ_FAILED,
    BF_001FEB60_GUEST_WRITE_FAILED
} bf_001feb60_status;

typedef struct bf_001feb60_result {
    bf_001feb60_status status;
    uint8_t al;
    uint32_t fault_guest_addr;
} bf_001feb60_result;

/* Signed x86 JL in a host-implementation-independent 32-bit comparison. */
static inline bool bf_001feb60_signed_less(uint32_t a, uint32_t b)
{
    return (a ^ UINT32_C(0x80000000)) <
           (b ^ UINT32_C(0x80000000));
}

/* Execute exactly the original register-bound DWORD reads/writes.
 * The caller at 0x002058C0 passes EBX=&[ESP+0x10] (matched record) and
 * EAX=&[ESP+0x14] (iterator). It then MOV ESI,[ESP+0x10] and reads
 * [ESI+8] for the switch. A separate caller 0x001FF0F0 has the same
 * guest output issue. Do not reinterpret uRam00000008 as literal VA 8.
 * No host pointers, fixed iteration caps or guessed high EAX bytes.
 * Guest faults are diagnostic only; Xbox fault/SEH restart is unverified.
 */
static inline bf_001feb60_result bf_001feb60_execute(
    const bf_001feb60_guest_io *mem, bf_001feb60_regs r)
{
    bf_001feb60_result out = {BF_001FEB60_INVALID_INTERFACE,0u,0u};
    uint32_t node, tail, candidate, a, b;
    if (!mem || !mem->read_u32 || !mem->write_u32) return out;
#define BF_1FEB60_READ(address,value) do {                             \
    const uint32_t guest_a = (address);                                 \
    if (!mem->read_u32(mem->ctx,guest_a,&(value))) {                     \
        out.fault_guest_addr=guest_a;                                   \
        out.status=BF_001FEB60_GUEST_READ_FAILED; return out;          \
    }                                                                  \
} while (0)
#define BF_1FEB60_WRITE(address,value) do {                            \
    const uint32_t guest_a = (address);                                 \
    if (!mem->write_u32(mem->ctx,guest_a,(value))) {                    \
        out.fault_guest_addr=guest_a;                                   \
        out.status=BF_001FEB60_GUEST_WRITE_FAILED; return out;         \
    }                                                                  \
} while (0)
    /* 0x001FEB60 MOV DWORD PTR [EBX],0; then iterator/end reads. */
    BF_1FEB60_WRITE(r.ebx_match,0u);
    BF_1FEB60_READ(r.eax_iterator,node);
    BF_1FEB60_READ(r.edi_owner + UINT32_C(0x30),tail);
    while (node != tail) {
        /* Original loop re-reads [EAX] even after the head comparison. */
        BF_1FEB60_READ(r.eax_iterator,node);
        BF_1FEB60_READ(node + UINT32_C(8),candidate);
        BF_1FEB60_READ(r.esi_filter + UINT32_C(4),a);
        BF_1FEB60_READ(candidate + UINT32_C(4),b);
        if (a == b) {
            BF_1FEB60_READ(r.esi_filter + UINT32_C(8),a);
            BF_1FEB60_READ(candidate + UINT32_C(0x0c),b);
            if (a == b) {
                BF_1FEB60_READ(candidate + UINT32_C(0x14),a);
                BF_1FEB60_READ(candidate + UINT32_C(0x10),b);
                if (bf_001feb60_signed_less(a,b)) {
                    /* 0x001FEB9C..AB: reload node, publish match, advance. */
                    BF_1FEB60_READ(r.eax_iterator,node);
                    BF_1FEB60_READ(node + UINT32_C(8),candidate);
                    BF_1FEB60_WRITE(r.ebx_match,candidate);
                    BF_1FEB60_READ(r.eax_iterator,node);
                    BF_1FEB60_READ(node,a);
                    BF_1FEB60_WRITE(r.eax_iterator,a);
                    out.status=BF_001FEB60_OK;
                    out.al=1u;
                    return out;
                }
            }
        }
        BF_1FEB60_READ(node,node);
        BF_1FEB60_WRITE(r.eax_iterator,node);
        BF_1FEB60_READ(r.edi_owner + UINT32_C(0x30),tail);
    }
    out.status=BF_001FEB60_OK;
#undef BF_1FEB60_READ
#undef BF_1FEB60_WRITE
    return out;
}
#endif
