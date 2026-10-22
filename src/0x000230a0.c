/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 1333F3D878288179A7703BF73160E51DCD793FB6FB86A268A7CE9F50B81B5F1C
 * Entry: 0x000230a0, Ghidra index: 216, label: FUN_000230a0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int FUN_000230a0(void)

{
  int iVar1;
  int in_EAX;
  int *piVar2;
  undefined4 in_ECX;
  undefined1 local_4 [4];
  
  iVar1 = *(int *)(in_EAX + 4);
  piVar2 = (int *)FUN_00023010(local_4,in_ECX);
  if (*piVar2 != *(int *)(iVar1 + 0xc)) {
    return *piVar2 - *(int *)(iVar1 + 8) >> 2;
  }
  return -1;
}
