/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 9CFABFFC4C0D7CE6B2116A1BFAB63EE69654DE6C0355DF605270C1FFE8CD7AA6
 * Entry: 0x0022f770, Ghidra index: 7741, label: FUN_0022f770
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0022f770(void)

{
  int iVar1;
  int in_EAX;
  int iVar2;
  
  *(byte *)(in_EAX + 0x224) = *(byte *)(in_EAX + 0x224) & 0xfa;
  if (*(int *)(in_EAX + 0x360) != 0) {
    FUN_0008f6a0(0);
  }
  iVar1 = *(int *)(in_EAX + 0x1b0);
  if (iVar1 != 0) {
    if (*(int *)(iVar1 + 8) == 0) {
      if (*(int *)(iVar1 + 0x10) == 0) {
        return;
      }
      iVar2 = *(int *)(*(int *)(iVar1 + 0x10) + 0xb0);
      if (*(int *)(*(int *)(iVar2 + 0xc) + 4) != 3) {
        return;
      }
    }
    else {
      iVar2 = *(int *)(*(int *)(iVar1 + 8) + 0x1d4);
    }
    if (iVar2 != 0) {
      if (*(int *)(iVar1 + 8) != 0) {
        FUN_00074ad0();
        return;
      }
      if ((*(int *)(iVar1 + 0x10) != 0) &&
         (*(int *)(*(int *)(*(int *)(*(int *)(iVar1 + 0x10) + 0xb0) + 0xc) + 4) == 3)) {
        FUN_00074ad0();
        return;
      }
      FUN_00074ad0();
    }
  }
  return;
}
