/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: F769714EB2ADC3637843B7FD359D4B6F85005D379EF620586C9E714E3FF9042D
 * Entry: 0x000dff10, Ghidra index: 2738, label: FUN_000dff10
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_000dff10(int param_1)

{
  int iVar1;
  int in_EAX;
  int iVar2;
  undefined1 local_8 [4];
  int local_4;
  
  local_4 = 0;
  if (in_EAX != 0) {
    FUN_0008f6a0();
  }
  iVar1 = *(int *)(param_1 + 0x10);
  iVar2 = FUN_000e1910(param_1 + 0xc,iVar1,*(undefined4 *)(iVar1 + 4),local_8);
  FUN_000389d0();
  *(int *)(iVar1 + 4) = iVar2;
  **(int **)(iVar2 + 4) = iVar2;
  if (local_4 != 0) {
    FUN_0008f6e0();
  }
  return;
}
