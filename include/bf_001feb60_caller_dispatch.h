/* Original Xbox parser iterators and caller-owned dispatch results.
 * Verified against 0x001FEB60, 0x001FF0F0 and 0x002058C0 in the
 * authenticated Brute Force XBE:
 * B6EA5D4DD6500AE86C3F5E3E4618BC9B1E3FACDDCB483170DFEE7A787087C721.
 *
 * This is an independent guest-memory operation, NOT a replacement
 * for either original FUN_ entry or a guess at the host register ABI.
 */
#ifndef BF_001FEB60_CALLER_DISPATCH_H
#define BF_001FEB60_CALLER_DISPATCH_H
#include "bf_001feb60_guest_iterator.h"

typedef struct bf_001feb60_dispatch_io {
    bf_001feb60_guest_io words;
    bool (*read_u8)(void *ctx, uint32_t guest_address, uint8_t *value);
} bf_001feb60_dispatch_io;

typedef enum bf_001feb60_dispatch_status {
    BF_001FEB60_DISPATCH_INVALID,
    BF_001FEB60_DISPATCH_END,
    BF_001FEB60_DISPATCH_TARGET,
    BF_001FEB60_DISPATCH_READ_FAULT,
    BF_001FEB60_DISPATCH_WRITE_FAULT
} bf_001feb60_dispatch_status;

typedef struct bf_001feb60_dispatch_result {
    bf_001feb60_dispatch_status status;
    uint32_t matched_item_guest;
    uint32_t raw_type;
    uint32_t adjusted_index;
    uint8_t table_slot;
    uint32_t target_guest_va;
    uint32_t fault_guest_va;
} bf_001feb60_dispatch_result;

typedef struct bf_001feb60_dispatch_layout {
    uint32_t subtract;
    uint32_t maximum_index;
    uint32_t byte_table;
    uint32_t jump_table;
    uint32_t default_target;
} bf_001feb60_dispatch_layout;

/* 001FF147..001FF15A: subtract 2, unsigned bound 0x2a,
 * byte table at 001FF494, pointer table at 001FF464.
 * 00205927..0020593A: subtract 4, unsigned bound 0x1f,
 * byte table at 00205A48, pointer table at 00205A28.
 */
static inline bf_001feb60_dispatch_layout
bf_001feb60_dispatch_layout_for(uint32_t caller_entry)
{
    bf_001feb60_dispatch_layout l={0,0,0,0,0};
    if (caller_entry == UINT32_C(0x001ff0f0)) {
        l.subtract=2u;
        l.maximum_index=0x2au;
        l.byte_table=UINT32_C(0x001ff494);
        l.jump_table=UINT32_C(0x001ff464);
        l.default_target=UINT32_C(0x001ff438);
    } else if (caller_entry == UINT32_C(0x002058c0)) {
        l.subtract=4u;
        l.maximum_index=0x1fu;
        l.byte_table=UINT32_C(0x00205a48);
        l.jump_table=UINT32_C(0x00205a28);
        l.default_target=UINT32_C(0x002059c2);
    }
    return l;
}

/* caller_esp is the live ESP immediately before CALL 001FEB60
 * (before the processor pushes its return address). Original register
 * setup: EAX=&[ESP+0x14], EBX=&[ESP+0x10], ESI=filter, EDI=owner.
 *
 * On AL=1 caller reads [ESP+0x10], then [matched+8], applies a wrapping
 * subtraction and the original unsigned bounds check. When in range,
 * it reads the original *byte* table and DWORD target table. Returns
 * target address but DOES NOT jump to it or run a case body.
 *
 * A guest fault returns diagnostic status only, not original Xbox SEH.
 */
static inline bf_001feb60_dispatch_result
bf_001feb60_execute_caller_dispatch(const bf_001feb60_dispatch_io *io,
                                     uint32_t caller_entry,
                                     uint32_t caller_esp,
                                     uint32_t filter_guest,
                                     uint32_t owner_guest)
{
    bf_001feb60_dispatch_result d={BF_001FEB60_DISPATCH_INVALID,0,0,0,0,0,0};
    bf_001feb60_dispatch_layout l=bf_001feb60_dispatch_layout_for(caller_entry);
    uint32_t selected;
    if (!io || !io->words.read_u32 || !io->words.write_u32 ||
        !io->read_u8 || l.jump_table==0u) return d;
    const bf_001feb60_regs regs = {
        caller_esp+UINT32_C(0x14), caller_esp+UINT32_C(0x10),
        filter_guest, owner_guest
    };
    const bf_001feb60_result it=bf_001feb60_execute(&io->words,regs);
    d.fault_guest_va=it.fault_guest_addr;
    if (it.status == BF_001FEB60_GUEST_READ_FAILED) {
        d.status=BF_001FEB60_DISPATCH_READ_FAULT;return d;
    }
    if (it.status == BF_001FEB60_GUEST_WRITE_FAILED) {
        d.status=BF_001FEB60_DISPATCH_WRITE_FAULT;return d;
    }
    if (it.status != BF_001FEB60_OK) return d;
    if (it.al==0u) {d.status=BF_001FEB60_DISPATCH_END;return d;}
#define BF_DISPATCH_READ(addr,dst) do { \
    const uint32_t guest_a=(addr); \
    if (!io->words.read_u32(io->words.ctx,guest_a,&(dst))) { \
        d.status=BF_001FEB60_DISPATCH_READ_FAULT; \
        d.fault_guest_va=guest_a;return d; \
    } \
} while(0)
    BF_DISPATCH_READ(caller_esp+UINT32_C(0x10),selected);
    d.matched_item_guest=selected;
    BF_DISPATCH_READ(selected+UINT32_C(8),d.raw_type);
    d.adjusted_index=d.raw_type-l.subtract; /* x86 ADD wrap */
    if (d.adjusted_index>l.maximum_index) {
        d.target_guest_va=l.default_target;
        d.status=BF_001FEB60_DISPATCH_TARGET;
        return d;
    }
    const uint32_t byte_address=l.byte_table+d.adjusted_index;
    if (!io->read_u8(io->words.ctx,byte_address,&d.table_slot)) {
        d.status=BF_001FEB60_DISPATCH_READ_FAULT;
        d.fault_guest_va=byte_address;
        return d;
    }
    BF_DISPATCH_READ(l.jump_table+UINT32_C(4)*(uint32_t)d.table_slot,
                     d.target_guest_va);
    d.status=BF_001FEB60_DISPATCH_TARGET;
#undef BF_DISPATCH_READ
    return d;
}
#endif
