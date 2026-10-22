/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: BDD04852B6B1B71354E76996C3C7D160C8C2231450C4D556A5C836EF5E1EE21B
 * Entry: 0x001b57a0, Ghidra index: 5674, label: FUN_001b57a0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_001b57a0(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  uint in_EAX;
  undefined4 uVar3;
  uint uVar4;
  int unaff_EDI;
  
  iVar1 = *(int *)(unaff_EDI + 4);
  if (iVar1 == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = *(int *)(unaff_EDI + 8) - iVar1 >> 4;
  }
  if (uVar4 < in_EAX) {
    FUN_00244240(*(undefined4 *)(unaff_EDI + 8),&param_1);
    return;
  }
  if (((iVar1 != 0) && (iVar2 = *(int *)(unaff_EDI + 8), in_EAX < (uint)(iVar2 - iVar1 >> 4))) &&
     (in_EAX * 0x10 + iVar1 != iVar2)) {
    uVar3 = FUN_0024c6a0(iVar2,iVar2,param_1);
    *(undefined4 *)(unaff_EDI + 8) = uVar3;
  }
  return;
}
