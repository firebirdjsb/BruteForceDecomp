/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: A2663D3E873CF5EFE8E4F04895A7ED299155528D9608C2833BE5BF1CB80395E8
 * Entry: 0x00089da0, Ghidra index: 1648, label: FUN_00089da0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t *DAT_00469b58;
uint FUN_00089da0(void)

{
  byte *pbVar1;
  int iVar2;
  int *piVar3;
  undefined2 extraout_var;
  uint uVar4;
  int unaff_EDI;
  float10 fVar5;
  float10 fVar6;
  
  piVar3 = DAT_00469b58;
  if ((char)DAT_00469b58[0x3c] != '\0') {
    fVar5 = (float10)(**(code **)(*DAT_00469b58 + 0x44))();
    fVar6 = (fVar5 - (float10)(float)piVar3[0x42]) * (float10)(float)piVar3[0x41];
    fVar5 = (float10)1.0;
    if (fVar6 < fVar5 != (fVar6 == fVar5)) {
      return CONCAT31((int3)(CONCAT22(extraout_var,
                                      (ushort)(fVar6 < fVar5) << 8 |
                                      (ushort)(isnan(fVar6) || isnan(fVar5)) << 10 |
                                      (ushort)(fVar6 == fVar5) << 0xe) >> 8),1);
    }
  }
  *(byte *)(unaff_EDI + 0x24) = *(byte *)(unaff_EDI + 0x24) & 0xfc | 0x18;
  *(undefined4 *)(unaff_EDI + 0x20) = 0x40400000;
  (**(code **)(**(int **)(unaff_EDI + 8) + 0x6c))();
  iVar2 = *(int *)(*(int *)(unaff_EDI + 4) + 0xbf0);
  if (*(int *)(iVar2 + 0x8c) != 0) {
    if (*(int *)(iVar2 + 0x8c) != 0) {
      FUN_0008f6a0(0);
    }
    *(undefined1 *)(iVar2 + 200) = 1;
  }
  (**(code **)(**(int **)(unaff_EDI + 8) + 0x1c))();
  pbVar1 = (byte *)(*(int *)(unaff_EDI + 4) + 0xc50);
  *pbVar1 = *pbVar1 & 0xef;
  FUN_000734b0(0);
  FUN_00179e70();
  uVar4 = FUN_00069780(0x3f800000);
  return uVar4 & 0xffffff00;
}
