/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 1434771167F5436066CA705D0B298DA486B80EFBA742AE5E5866757F82759C2A
 * Entry: 0x001fe3d0, Ghidra index: 7229, label: FUN_001fe3d0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* WARNING: Removing unreachable block (ram,0x001fe40c) */
/* WARNING: Removing unreachable block (ram,0x001fe423) */
/* WARNING: Removing unreachable block (ram,0x001fe417) */

void FUN_001fe3d0(void)

{
  int *in_ECX;
  
  if (in_ECX != (int *)0x0) {
    (**(code **)(*in_ECX + 0xfc))();
    FUN_001fe320();
  }
  return;
}
