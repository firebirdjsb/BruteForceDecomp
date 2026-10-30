/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 0D3881ACAABF0ACEAD03E2470107FCD6C0C25D1F1470557A21151BABC38B93CB
 * Entry: 0x00237ea0, Ghidra index: 7859, label: FUN_00237ea0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
#include "bf_00237ea0_heap_malloc_guest32.h"

/* 0x00237EA0..0x00237EB7, authenticated opcode ledger:
 * scripts/verify_002b8c60_heap_xbe.py. EAX is explicitly zeroed
 * before the conditional JE; otherwise the direct 0x002F6E31
 * callee's EAX is returned unchanged.
 *
 * The callee is not yet a verified host ABI; the missing guest-call
 * adapter explicitly blocks a fake native game build. ABI_UNVERIFIED. */
extern uint32_t FUN_002f77f3(void);
uint32_t FUN_00237ea0(uint32_t guest_size)
{
  if (guest_size == 0)
    return 0;
  const uint32_t heap = FUN_002f77f3();
  return bf_xbox_guest_call_002f6e31_u32(heap, 0, guest_size);
}
