/* Original Xbox 0x001FEB60 — bounded guest-memory output-slot projection.
 * Input register contract: EAX=&cursor, EBX=&output, ESI=selector, EDI=owner.
 * These two parser callers place output at live pre-CALL ESP+0x10 and cursor
 * at ESP+0x14. AL indicates success, *not* a full EAX return contract.
 * No host pointer is manufactured from a guest DWORD. The original CALL,
 * x86 flags, register preservation and exact fault EIP are NOT emulated.
 * See docs/evidence/001ff0f0-002058c0-dispatch-source.md.
 */
#ifndef BF_X86_PARSER_ITEM_001FEB60_H
#define BF_X86_PARSER_ITEM_001FEB60_H
#include <stdint.h>
#include <stdbool.h>
#include <stddef.h>

typedef struct bf_parser_001feb60_io {
    void *user;
    bool (*read32)(void *, uint32_t, uint32_t *);
    bool (*write32)(void *, uint32_t, uint32_t);
} bf_parser_001feb60_io;

typedef enum bf_parser_001feb60_status {
    BF_PARSER_END = 0,       /* original AL=0, no candidate */
    BF_PARSER_MATCH,         /* original AL=1, candidate written */
    BF_PARSER_READ_FAULT,   /* only the faulting guest VA is recorded */
    BF_PARSER_WRITE_FAULT,
    BF_PARSER_INVALID_IO   /* invalid embedding, NOT an original x86 status */
} bf_parser_001feb60_status;

typedef struct bf_parser_001feb60_result {
    bf_parser_001feb60_status status;
    uint32_t fault_guest_va;
    /* Only valid on MATCH; the original CPU returns AL=1, not this ptr. */
    uint32_t matched_item_guest_va;
} bf_parser_001feb60_result;

/* Original compares candidate count and capacity as signed 32-bit words. */
static inline bool bf_parser_001feb60_signed_less(uint32_t lhs, uint32_t rhs)
{
    return (lhs ^ UINT32_C(0x80000000)) < (rhs ^ UINT32_C(0x80000000));
}

/* This contract is bound only to the documented 0x001FF0F0/0x002058C0
 * caller slot offsets. Other original callers require independent review.
 * Callback I/O preserves original guest DWORD values and partial effects;
 * it does NOT promise the exact CPU fault instruction or exception handler.
 * Under the real caller contract, cursor/output are distinct guest DWORDs.
 */
static inline bf_parser_001feb60_result bf_parser_001feb60_next(
    uint32_t caller_esp, uint32_t guest_selection, uint32_t guest_owner,
    const bf_parser_001feb60_io *io)
{
    bf_parser_001feb60_result r = {BF_PARSER_INVALID_IO,0,0};
    if (!io || !io->read32 || !io->write32) return r;
    const uint32_t output = caller_esp + UINT32_C(0x10);
    const uint32_t cursor = caller_esp + UINT32_C(0x14);
    uint32_t node, sentinel, candidate, sel4, cand4, sel8, cand12;
    uint32_t used, capacity, next;
#define READ32(address, dest) do { \
    const uint32_t a = (address); \
    if (!io->read32(io->user, a, &(dest))) { \
        r.status=BF_PARSER_READ_FAULT; r.fault_guest_va=a; return r; \
    } \
} while (0)
#define WRITE32(address, value) do { \
    const uint32_t a=(address); \
    if (!io->write32(io->user,a,(value))) { \
        r.status=BF_PARSER_WRITE_FAULT; r.fault_guest_va=a; return r; \
    } \
} while (0)
    /* Original entry zeros [EBX] even when cursor is already exhausted. */
    WRITE32(output,0);
    READ32(cursor,node);
    READ32(guest_owner + UINT32_C(0x30),sentinel);
    while (node != sentinel) {
        READ32(node + UINT32_C(8),candidate);
        READ32(guest_selection + UINT32_C(4),sel4);
        READ32(candidate + UINT32_C(4),cand4);
        if (sel4 == cand4) {
            READ32(guest_selection + UINT32_C(8),sel8);
            READ32(candidate + UINT32_C(0xc),cand12);
            if (sel8 == cand12) {
                READ32(candidate + UINT32_C(0x14),used);
                READ32(candidate + UINT32_C(0x10),capacity);
                if (bf_parser_001feb60_signed_less(used,capacity)) {
                    /* On success original stores candidate into EBX output
                     * then advances EAX cursor through node+0. */
                    WRITE32(output,candidate);
                    READ32(node,next);
                    WRITE32(cursor,next);
                    r.status=BF_PARSER_MATCH;
                    r.matched_item_guest_va=candidate;
                    return r;
                }
            }
        }
        READ32(node,next);
        WRITE32(cursor,next);
        node=next;
    }
    r.status=BF_PARSER_END;
#undef READ32
#undef WRITE32
    return r;
}

/* Caller MOV EDI/ESI,[ESP+0x10] then MOV EAX,[EDI/ESI+0x08].
 * Do NOT substitute a symbol at absolute guest address 8. The subtract
 * result is only the pre-table dispatch index; bounds and table jumps are
 * other original instructions, not modeled by this helper. */
static inline bf_parser_001feb60_status bf_parser_001feb60_dispatch_word(
    uint32_t selected_item_guest_va, uint32_t subtract,
    const bf_parser_001feb60_io *io,
    uint32_t *raw_type, uint32_t *table_index, uint32_t *fault_guest_va)
{
    if (!io || !io->read32 || !raw_type || !table_index || !fault_guest_va)
        return BF_PARSER_INVALID_IO;
    const uint32_t address=selected_item_guest_va + UINT32_C(8);
    if (!io->read32(io->user,address,raw_type)) {
        *fault_guest_va=address;
        return BF_PARSER_READ_FAULT;
    }
    *table_index=*raw_type-subtract;
    *fault_guest_va=0;
    return BF_PARSER_MATCH;
}
#endif
