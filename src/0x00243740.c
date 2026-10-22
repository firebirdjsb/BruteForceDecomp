/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 6D361B9A7FB8080797B5282B61EA69489512E090414D40563634BDAE081A2897
 * Entry: 0x00243740, Ghidra index: 8054, label: FUN_00243740
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00243740(void)

{
  int iVar1;
  int iVar2;
  uint in_EAX;
  undefined4 uVar3;
  uint uVar4;
  int unaff_ESI;
  
  iVar1 = *(int *)(unaff_ESI + 4);
  if (iVar1 == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = (*(int *)(unaff_ESI + 8) - iVar1) / 0x38;
  }
  if (uVar4 < in_EAX) {
    FUN_0023c660(unaff_ESI);
    return;
  }
  if (((iVar1 != 0) && (iVar2 = *(int *)(unaff_ESI + 8), in_EAX < (uint)((iVar2 - iVar1) / 0x38)))
     && (in_EAX * 0x38 + iVar1 != iVar2)) {
    uVar3 = FUN_00249460(iVar2);
    *(undefined4 *)(unaff_ESI + 8) = uVar3;
  }
  return;
}
