/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 6BB9A765AC75C47AA155EE9B49B31047B127B01E6EB7F8258EE8BCF379E22B69
 * Entry: 0x00263c70, Ghidra index: 8692, label: FUN_00263c70
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00263c70(void)

{
  int *piVar1;
  uint uVar2;
  int *piVar3;
  uint uVar4;
  int iVar5;
  int unaff_ESI;
  
  if (*(int *)(unaff_ESI + 0x10) != 0) {
    uVar2 = *(int *)(unaff_ESI + 0x10) + -1 + *(int *)(unaff_ESI + 0xc);
    uVar4 = uVar2 >> 1;
    if (*(uint *)(unaff_ESI + 8) <= uVar4) {
      uVar4 = uVar4 - *(uint *)(unaff_ESI + 8);
    }
    piVar1 = (int *)(*(int *)(*(int *)(unaff_ESI + 4) + uVar4 * 4) + (uVar2 & 1) * 8);
    piVar3 = (int *)*piVar1;
    if (piVar3 != (int *)0x0) {
      (**(code **)(*piVar3 + 8))(piVar3);
      *piVar1 = 0;
    }
    iVar5 = *(int *)(unaff_ESI + 0x10) + -1;
    *(int *)(unaff_ESI + 0x10) = iVar5;
    if (iVar5 == 0) {
      *(undefined4 *)(unaff_ESI + 0xc) = 0;
    }
  }
  return;
}
