/* Original Xbox 0x001F3AA0 sparse-write call boundary.
 * XBE: B6EA5D4DD6500AE86C3F5E3E4618BC9B1E3FACDDCB483170DFEE7A787087C721
 *
 * Original PUSH ESI/PUSH EDI follow the 0x20A8-byte probe. The two
 * temporary stack args before CALL 0x002B7970 are removed by its RET 8
 * at 0x002B7AED; CALL 0x002B8D60 returns with RET (0x002B8DD9).
 * Thus guest ESP at 0x001F3B4A is aligned_EBP-0x20B0.
 *
 * Only this isolated original boundary is modeled; the constructors,
 * x87 arithmetic, and both callees' data effects must be replayed
 * separately before original FUN_001F3AA0 can be linked.
 */
#ifndef BF_001F3AA0_SPARSE_SITE_H
#define BF_001F3AA0_SPARSE_SITE_H
#include "bf_001f3aa0_sparse_frame.h"

typedef struct bf_001f3aa0_sparse_site_result {
    bool accepted;
    uint32_t expected_live_esp;
    uint32_t first_write_guest;
    uint32_t last_write_guest;
    bf_001f3aa0_sparse_result storage;
} bf_001f3aa0_sparse_site_result;

static inline bf_001f3aa0_sparse_site_result
bf_001f3aa0_execute_sparse_site(const bf_002ebea0_guest_mem *mem,
                                uint32_t guest_ebp, uint32_t live_guest_esp)
{
    bf_001f3aa0_sparse_site_result r={0};
    const uint32_t aligned_ebp=guest_ebp & ~UINT32_C(0xf);
    r.expected_live_esp=aligned_ebp-UINT32_C(0x20b0);
    r.first_write_guest=aligned_ebp-UINT32_C(0x2000);
    r.last_write_guest=aligned_ebp-UINT32_C(0x20);
    if(live_guest_esp!=r.expected_live_esp || !mem || !mem->write_dword)
        return r;
    r.accepted=true;
    r.storage=bf_001f3aa0_write_sparse_frame(mem,live_guest_esp);
    return r;
}
#endif
