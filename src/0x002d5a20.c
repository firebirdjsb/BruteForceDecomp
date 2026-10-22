/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: EA4ED11F8E247018835ABCCA80BE0FE4CE0735BD989693F3BADED664E148521C
 * Entry: 0x002d5a20, Ghidra index: 10228, label: FUN_002d5a20
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t PTR_FUN_003bc654;
void FUN_002d5a20(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  float fVar3;
  int iVar4;
  undefined4 *puVar5;
  int iVar6;
  byte *pbVar7;
  uint uVar8;
  uint uVar9;
  int *unaff_EDI;
  byte *local_42c;
  undefined4 uStack_428;
  float local_424;
  float local_420;
  int local_41c;
  undefined2 local_414;
  undefined2 local_412;
  undefined1 *local_410;
  short local_40c;
  undefined1 local_408 [1032];
  
  uVar8 = (uint)*(ushort *)((int)unaff_EDI + 0x16);
  while (uVar8 = uVar8 - 1, -1 < (int)uVar8) {
    iVar4 = *(int *)(unaff_EDI[6] + uVar8 * 4);
    puVar5 = *(undefined4 **)(iVar4 + 0x1cc);
    if (((puVar5 != (undefined4 *)0x0) && (puVar5[8] == 0)) && (puVar5 != (undefined4 *)0x0)) {
      uVar1 = puVar5[1];
      uVar2 = puVar5[2];
      *(undefined4 *)(iVar4 + 0x9c) = *puVar5;
      *(undefined4 *)(iVar4 + 0xa0) = uVar1;
      *(undefined4 *)(iVar4 + 0xa4) = uVar2;
      iVar6 = *(int *)(iVar4 + 0x1cc);
      *(undefined4 *)(iVar4 + 0xec) = *(undefined4 *)(iVar6 + 0x10);
      *(undefined4 *)(iVar4 + 0xf0) = *(undefined4 *)(iVar6 + 0x14);
      *(undefined4 *)(iVar4 + 0xf4) = *(undefined4 *)(iVar6 + 0x18);
      *(undefined4 *)(iVar4 + 0xf8) = *(undefined4 *)(iVar6 + 0x1c);
      *(undefined4 *)(iVar4 + 0x1cc) = 0;
    }
    *(undefined4 *)(iVar4 + 0x1cc) = 0;
  }
  iVar4 = *unaff_EDI;
  local_42c = *(byte **)(iVar4 + 0x110);
  uStack_428 = *(undefined4 *)(iVar4 + 0x114);
  uVar8 = (uint)*(ushort *)((int)unaff_EDI + 10);
  local_410 = local_408;
  local_414 = 0x100;
  local_412 = 0;
  fVar3 = (float)((float10)*(double *)(iVar4 + 0x110) - (float10)*(double *)(iVar4 + 0x108));
  local_40c = 0;
  while (uVar8 = uVar8 - 1, -1 < (int)uVar8) {
    pbVar7 = *(byte **)(unaff_EDI[3] + uVar8 * 4);
    if ((*pbVar7 & 0xc) == 0) {
      local_41c = *unaff_EDI;
      if (fVar3 <= 1e-10) {
        local_420 = 1e+10;
      }
      else {
        local_420 = 1.0 / fVar3;
      }
      local_42c = pbVar7;
      local_424 = fVar3;
      FUN_002c6620(&local_42c,&local_424,&local_414);
      pbVar7[0x1cc] = 0;
      pbVar7[0x1cd] = 0;
      pbVar7[0x1ce] = 0;
      pbVar7[0x1cf] = 0;
      FUN_002d5670();
    }
  }
  FUN_002c6e80(*unaff_EDI,&local_414);
  if ((local_40c != 0) && (local_410 != (undefined1 *)0x0)) {
    (*(code *)PTR_FUN_003bc654)(local_410);
    return;
  }
  uVar8 = (uint)*(ushort *)((int)unaff_EDI + 10);
  while (uVar8 = uVar8 - 1, -1 < (int)uVar8) {
    pbVar7 = *(byte **)(unaff_EDI[3] + uVar8 * 4);
    if ((*pbVar7 & 0xc) == 0) {
      uVar9 = (uint)*(ushort *)(pbVar7 + 0x52);
      *(undefined4 *)(pbVar7 + 0x1d0) = *(undefined4 *)(*(int *)(pbVar7 + 0xc) + 0x124);
      while (uVar9 = uVar9 - 1, -1 < (int)uVar9) {
        FUN_002b2da0();
      }
    }
  }
  return;
}
