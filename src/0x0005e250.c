/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: D5766BA950A9E788EF96E9878D1764E766F17DECB7CB9FBE74A2996C30E634A6
 * Entry: 0x0005e250, Ghidra index: 982, label: FUN_0005e250
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 FUN_0005e250(void)

{
  undefined4 uVar1;
  int in_ECX;
  int iVar2;
  int in_EDX;
  int iVar3;
  uint unaff_ESI;
  
  if (in_EDX == 1) {
    iVar3 = *(int *)(in_ECX + 0x14);
    if (iVar3 == 0) {
      return 0;
    }
    iVar2 = *(int *)(in_ECX + 0x18);
  }
  else {
    if (in_EDX != 4) {
      return 0;
    }
    iVar3 = *(int *)(in_ECX + 4);
    if (iVar3 == 0) {
      return 0;
    }
    iVar2 = *(int *)(in_ECX + 8);
  }
  uVar1 = 0;
  if (unaff_ESI < (uint)(iVar2 - iVar3 >> 3)) {
    uVar1 = *(undefined4 *)(iVar3 + 4 + unaff_ESI * 8);
  }
  return uVar1;
}
