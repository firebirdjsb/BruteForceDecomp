/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 1C32927DFA8E34BA338BD7195DCF719C9E9D711C0D91B96F4F8390FE7A35EBB3
 * Entry: 0x0014cc30, Ghidra index: 4345, label: FUN_0014cc30
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int FUN_0014cc30(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int in_ECX;
  int *in_EDX;
  
  uVar1 = in_EDX[1];
  iVar4 = 0;
  if (uVar1 == 0xfffffffe) {
    iVar4 = *(int *)(in_ECX + 0x1ac);
  }
  iVar2 = *(int *)(in_ECX + 0x1b4);
  if ((iVar2 != 0) && (iVar4 == 0)) {
    iVar4 = *in_EDX;
    if (iVar4 == 0) {
      return *(int *)(iVar2 + 0xbc);
    }
    if (iVar4 < 10) {
      iVar3 = *(int *)(iVar2 + 0xc + iVar4 * 0x10);
      if ((iVar3 != 0) && (uVar1 < (uint)(*(int *)(iVar2 + iVar4 * 0x10 + 0x10) - iVar3 >> 2))) {
        return *(int *)(iVar3 + uVar1 * 4);
      }
    }
    iVar4 = 0;
  }
  return iVar4;
}
