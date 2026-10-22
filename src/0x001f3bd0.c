/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 59ADA98B0B2BE7FF85F5538FDD0D8A2FF3C7BE84FA87D2FA3A51246C24BA629A
 * Entry: 0x001f3bd0, Ghidra index: 7028, label: FUN_001f3bd0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_001f3bd0(void)

{
  int iVar1;
  uint uVar2;
  int unaff_EBX;
  int iVar3;
  uint uVar4;
  int iVar5;
  undefined4 in_stack_ffffffec;
  
  iVar1 = *(int *)(*(int *)(unaff_EBX + 0x38) + 0x11c);
  iVar3 = *(int *)(*(int *)(unaff_EBX + 0x38) + 0x118);
  iVar5 = 0;
  FUN_001f7540(in_stack_ffffffec,0);
  for (; iVar3 != iVar1; iVar3 = iVar3 + 4) {
    FUN_000d6ac0(*(undefined4 *)(*(int *)(unaff_EBX + 0x18) + 0x1c),
                 *(int *)(unaff_EBX + 0x2c) + iVar5,0);
    iVar5 = iVar5 + 8;
  }
  iVar1 = *(int *)(unaff_EBX + 0x18);
  iVar3 = *(int *)(iVar1 + 0x18);
  if (iVar3 != 0) {
    iVar5 = (*(int **)(iVar1 + 0x20))[1] * **(int **)(iVar1 + 0x20);
    uVar4 = 0;
    if (0 < iVar5) {
      while (iVar3 != unaff_EBX) {
        uVar4 = uVar4 + 1;
        iVar3 = iVar3 + 0x40;
        if (iVar5 <= (int)uVar4) {
          return;
        }
      }
      iVar3 = *(int *)(*(int *)(iVar1 + 0x20) + 0x5c);
      if (iVar3 != *(int *)(*(int *)(iVar1 + 0x20) + 0x60)) {
        iVar1 = *(int *)(iVar3 + 4);
        uVar2 = 0;
        while( true ) {
          if (iVar1 == 0) {
            return;
          }
          if ((uint)(*(int *)(iVar3 + 8) - iVar1 >> 1) <= uVar2) {
            return;
          }
          if (*(ushort *)(iVar1 + uVar2 * 2) == uVar4) break;
          uVar2 = uVar2 + 1;
        }
        *(uint *)(unaff_EBX + 0x3c) = uVar2;
      }
    }
  }
  return;
}
