/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 9BAECE2A4983D2073D568B73FBF167A94F745DF8EDE43B4C238227E3AA7578C3
 * Entry: 0x002bd6f0, Ghidra index: 9951, label: FUN_002bd6f0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_002bd6f0(undefined4 param_1)

{
  int in_EAX;
  int iVar1;
  undefined4 *puVar2;
  int in_EDX;
  
  iVar1 = *(ushort *)(in_EDX + 0x22) - 1;
  if (-1 < iVar1) {
    puVar2 = (undefined4 *)(*(int *)(in_EDX + 0x24) + iVar1 * 4);
    do {
      if (*(int *)*puVar2 == in_EAX) break;
      iVar1 = iVar1 + -1;
      puVar2 = puVar2 + -1;
    } while (-1 < iVar1);
  }
  iVar1 = *(int *)(*(int *)(in_EDX + 0x24) + iVar1 * 4);
  if (*(ushort *)(iVar1 + 4) <= *(ushort *)(iVar1 + 6)) {
    FUN_002ccf80();
  }
  *(undefined4 *)(*(int *)(iVar1 + 8) + (uint)*(ushort *)(iVar1 + 6) * 4) = param_1;
  *(short *)(iVar1 + 6) = *(short *)(iVar1 + 6) + 1;
  return;
}
