/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: A2FF541F5FCF39D60C9AFC14C525F45F0C7962CC4ED7D818CAE9AE091111E141
 * Entry: 0x000342f0, Ghidra index: 339, label: FUN_000342f0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 FUN_000342f0(void)

{
  int iVar1;
  int *in_ECX;
  
  iVar1 = FUN_000120f0();
  *(undefined1 *)(iVar1 + 0x670) = 0;
  (**(code **)(*in_ECX + 0x5bc))();
  return 1;
}
