/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 400B3F9A2AED7A2DD0826CA3EAD53705D216E3C7576F60CDEA3F2563963BD3B5
 * Entry: 0x00117440, Ghidra index: 3595, label: FUN_00117440
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined1 FUN_00117440(void)

{
  undefined1 uVar1;
  int in_EDX;
  
  uVar1 = 1;
  if ((*(int *)(in_EDX + 0x228) != 0) && (0 < *(int *)(*(int *)(in_EDX + 0x228) + 0x1c))) {
    uVar1 = 0;
  }
  if ((*(int *)(in_EDX + 0x22c) != 0) && (0 < *(int *)(*(int *)(in_EDX + 0x22c) + 0x1c))) {
    uVar1 = 0;
  }
  if ((*(int *)(in_EDX + 0x230) != 0) && (0 < *(int *)(*(int *)(in_EDX + 0x230) + 0x1c))) {
    uVar1 = 0;
  }
  return uVar1;
}
