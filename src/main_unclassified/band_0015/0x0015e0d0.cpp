/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: B7DE72E8E50253D2760C98BE81DDD713A3621936966E8057F6577F05ED0A8F88
 * Entry: 0x0015e0d0, Ghidra index: 4540, label: FUN_0015e0d0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
#include "bf_002ea018_heap_free_guest32.h"
void FUN_0015e0d0(void)

{
  int unaff_ESI;
  
  if (const uint32_t guest_allocation_va = static_cast<uint32_t>(*(int *)(unaff_ESI + 0xc));
    guest_allocation_va != 0) {
    thunk_FUN_00237ec0(guest_allocation_va);
  }
  *(undefined4 *)(unaff_ESI + 0xc) = 0;
  thunk_FUN_00237ec0(*(undefined4 *)(unaff_ESI + 8));
}
