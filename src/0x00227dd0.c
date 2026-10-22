/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 203EBA6B29C191EFF00B4E83EA3A0E2D365FD44425F8D9C94E17B8E7F0801192
 * Entry: 0x00227dd0, Ghidra index: 7656, label: FUN_00227dd0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00227dd0(void)

{
  float fVar1;
  float fVar2;
  int iVar3;
  int *piVar4;
  undefined4 uVar5;
  byte bVar6;
  int unaff_EBX;
  int unaff_EDI;
  
  *(int *)(unaff_EDI + 0x234) = unaff_EBX;
  if (unaff_EBX != 0) {
    uVar5 = *(undefined4 *)(unaff_EBX + 0x210);
    bVar6 = *(byte *)(unaff_EDI + 0x220) ^
            (*(char *)(unaff_EBX + 0x239) << 2 ^ *(byte *)(unaff_EDI + 0x220)) & 4;
    *(byte *)(unaff_EDI + 0x220) = bVar6;
    *(undefined4 *)(unaff_EDI + 0x208) = uVar5;
    bVar6 = (*(byte *)(unaff_EBX + 0x224) & 1 | (*(byte *)(unaff_EBX + 0x22c) & 1) << 3) << 3 |
            bVar6 & 0xb7;
    *(byte *)(unaff_EDI + 0x220) = bVar6;
    *(byte *)(unaff_EDI + 0x220) = (*(char *)(unaff_EBX + 0x238) << 4 ^ bVar6) & 0x10 ^ bVar6;
    FUN_002263b0();
    *(undefined4 *)(unaff_EDI + 0x1d4) = *(undefined4 *)(unaff_EBX + 0x230);
    fVar1 = *(float *)(unaff_EBX + 0x228);
    fVar2 = *(float *)(unaff_EBX + 0x214) / *(float *)(unaff_EDI + 0x208);
    *(float *)(unaff_EDI + 0x1dc) = fVar2;
    *(float *)(unaff_EDI + 0x1d8) = fVar2;
    *(float *)(unaff_EDI + 0x230) = fVar2 * fVar1;
    uVar5 = *(undefined4 *)(unaff_EBX + 0x23c);
    *(undefined4 *)(unaff_EDI + 0x1e0) = *(undefined4 *)(unaff_EBX + 0x240);
    *(undefined4 *)(unaff_EDI + 0x1e4) = uVar5;
    *(byte *)(unaff_EDI + 0x220) =
         *(byte *)(unaff_EDI + 0x220) ^
         (*(char *)(unaff_EBX + 0x2a1) << 5 ^ *(byte *)(unaff_EDI + 0x220)) & 0x20;
    *(byte *)(unaff_EDI + 0x221) =
         *(byte *)(unaff_EDI + 0x221) ^
         (*(char *)(unaff_EBX + 0x2a0) << 2 ^ *(byte *)(unaff_EDI + 0x221)) & 4;
    *(float *)(unaff_EDI + 0x214) = *(float *)(unaff_EBX + 0x1fc) * 0.375;
  }
  if (*(int **)(unaff_EDI + 0x1b4) != (int *)0x0) {
    iVar3 = (**(code **)(**(int **)(unaff_EDI + 0x1b4) + 0xec))();
    if (iVar3 != 0) {
      piVar4 = (int *)(**(code **)(**(int **)(unaff_EDI + 0x1b4) + 0xec))();
      uVar5 = (**(code **)(*piVar4 + 0x9c))();
      *(undefined4 *)(unaff_EDI + 0x21c) = uVar5;
      return;
    }
    if (*(int *)(*(int *)(*(int *)(unaff_EDI + 0x1b4) + 0xc) + 4) == 0x1d) {
      *(undefined4 *)(unaff_EDI + 0x21c) = *(undefined4 *)(*(int *)(unaff_EDI + 0x1b4) + 0x1c0);
    }
  }
  return;
}
