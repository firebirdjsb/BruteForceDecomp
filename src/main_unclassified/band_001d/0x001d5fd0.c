/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 1030BB7B8D78563F861A6F93F0FDEABB0E5B7F46A07B83908ECC167F418C02EC
 * Entry: 0x001d5fd0, Ghidra index: 6346, label: FUN_001d5fd0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_001d5fd0(void)

{
  int iVar1;
  uint uVar2;
  uint in_ECX;
  int in_EDX;
  
  iVar1 = *(int *)(in_EDX + 4);
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(int *)(in_EDX + 8) - iVar1 >> 1;
  }
  if (uVar2 < in_ECX) {
    FUN_001d6090(*(undefined4 *)(in_EDX + 8),&stack0x00000004);
    return;
  }
  if ((iVar1 != 0) && (in_ECX < (uint)(*(int *)(in_EDX + 8) - iVar1 >> 1))) {
    FUN_001d6050(*(int *)(in_EDX + 4) + in_ECX * 2,*(int *)(in_EDX + 8));
  }
  return;
}
