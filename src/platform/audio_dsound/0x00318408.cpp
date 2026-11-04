/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 8958ED462BBB2CFE1D97DF36EA0E5C73B262DC6B0CC3CDEF11190BB3B862A2B1
 * Entry: 0x00318408, Ghidra index: 12196, label: FUN_00318408
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* Ghidra source-matched call only; original guest ABI_UNVERIFIED. */
extern void FUN_003183ea(int param_1,int param_2);
void FUN_00318408(ushort param_1)

{
  FUN_003183ea((uint)param_1 * 4 + 2,4);
  return;
}
