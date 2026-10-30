/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: C62EA4F85B834B5DE6308054D7F1707FABE4D833AC67AF31EA9C54213ADB5849
 * Entry: 0x000c4250, Ghidra index: 2403, label: FUN_000c4250
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 FUN_000c4250(void)

{
  int iVar1;
  int in_EAX;
  int iVar2;
  
  iVar2 = *(int *)(*(int *)(in_EAX + 0x30) + 0x28);
  if (iVar2 == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = iVar2 + -0x2c;
  }
  iVar1 = *(int *)(iVar2 + 0x68);
  if ((0 < iVar1) && (iVar1 < 5)) {
    return *(undefined4 *)(*(int *)(*(int *)(iVar2 + 100) + 0x70) + 0x34 + iVar1 * 8);
  }
  return 0;
}
