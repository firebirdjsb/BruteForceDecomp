/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: AEA4FF0FDCBBE562CED1AFFB4E8C4502BAA33A4F257F92B02ECC02EDE940F2F9
 * Entry: 0x000c8ba0, Ghidra index: 2478, label: FUN_000c8ba0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
uint FUN_000c8ba0(void)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int *piVar4;
  int unaff_ESI;
  undefined4 in_stack_ffffffd8;
  undefined4 local_14;
  undefined1 local_10 [4];
  int local_c;
  int local_8;
  undefined4 local_4;
  
  if (*(int *)(unaff_ESI + 0x8c) == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(int *)(unaff_ESI + 0x90) - *(int *)(unaff_ESI + 0x8c) >> 3;
  }
  if (uVar2 == *(uint *)(*(int *)(*(int *)(*(int *)(unaff_ESI + 0x28) + 8) + 0x30) + 4)) {
    local_c = 0;
    local_8 = 0;
    local_4 = 0;
    FUN_001f7540(in_stack_ffffffd8,0);
    uVar2 = FUN_000c85d0(local_10);
    iVar1 = local_c;
    piVar4 = (int *)(local_c + 4);
    for (uVar3 = 0; (local_c != 0 && (uVar2 = local_8 - local_c >> 3, uVar3 < uVar2));
        uVar3 = uVar3 + 1) {
      uVar2 = *(uint *)(unaff_ESI + 0x8c);
      if (*piVar4 != *(int *)(uVar2 + 4 + uVar3 * 8)) goto LAB_000c8c6a;
      piVar4 = piVar4 + 2;
    }
    uVar3 = 0;
    while( true ) {
      if ((*(int *)(unaff_ESI + 0x8c) == 0) ||
         (uVar2 = *(int *)(unaff_ESI + 0x90) - *(int *)(unaff_ESI + 0x8c) >> 3, uVar2 <= uVar3)) {
        if (local_c != 0) {
          FUN_0001d590(local_10,local_14);
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00237ec0(iVar1);
        }
        return uVar2 & 0xffffff00;
      }
      uVar2 = *(uint *)(unaff_ESI + 0x8c);
      if (*(int *)(uVar2 + 4 + uVar3 * 8) == 0) break;
      uVar3 = uVar3 + 1;
    }
    if (local_c != 0) {
LAB_000c8c6a:
      FUN_0001d590(local_10,local_14);
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00237ec0(iVar1);
    }
  }
  return CONCAT31((int3)(uVar2 >> 8),1);
}
