/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 7AC3438564AD53D6B74541C8957D0E552FBB83B515D1749450260D9F34BF8821
 * Entry: 0x000ae470, Ghidra index: 2086, label: FUN_000ae470
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_00469aac;
uint FUN_000ae470(undefined4 param_1,uint param_2,int *param_3)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  uint3 uVar6;
  int iVar5;
  byte bVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  undefined8 uVar12;
  byte bStack_d;
  byte local_c [4];
  uint uStack_8;
  int local_4;
  
  uVar3 = param_3[3];
  if (*(int *)(uVar3 + 4) == 3) {
    iVar2 = (**(code **)(*param_3 + 0xf8))();
    uVar3 = 0;
    if (iVar2 != 0) {
      uVar3 = (**(code **)(*param_3 + 0xf8))();
    }
  }
  local_4 = *(int *)(DAT_00469aac + 0x1f8);
  if (local_4 == 0) {
    return uVar3 & 0xffffff00;
  }
  uVar4 = FUN_000572a0(local_c,param_2);
  uVar6 = (uint3)((uint)uVar4 >> 8);
  if ((char)uVar4 == '\0') {
    return (uint)uVar6 << 8;
  }
  uVar3 = CONCAT31(uVar6,local_c[0]);
  bStack_d = local_c[0];
  bVar7 = local_c[0];
  if ((local_c[0] == 0) && (iVar2 = *(int *)(param_2 + 0x59c), iVar2 != 0)) {
    uVar12 = FUN_0005c040();
    bVar7 = (byte)((ulonglong)uVar12 >> 0x20);
    uVar3 = 0;
    if ((int)uVar12 != 0) {
      uVar11 = uStack_8 - 1;
      iVar9 = uStack_8 * 4 + -4;
      uVar10 = uStack_8;
      do {
        uVar8 = (uint)((ulonglong)uVar12 >> 0x20);
        uVar3 = (uint)uVar12;
        bVar7 = (byte)((ulonglong)uVar12 >> 0x20);
        if (bVar7 != 0) break;
        if ((uVar3 != param_2) && ((*(byte *)(uVar3 + 0x70) & 1) == 0)) {
          cVar1 = FUN_000572a0(local_c,uVar3);
          if (cVar1 != '\0') {
            bStack_d = local_c[0];
          }
          uVar8 = (uint)bStack_d;
        }
        bVar7 = (byte)uVar8;
        uVar3 = *(uint *)(iVar2 + 4);
        if (uVar3 <= uVar10) break;
        uVar10 = uVar10 + 1;
        iVar9 = iVar9 + 4;
        uVar11 = uVar11 + 1;
        if (uVar11 < uVar3) {
          iVar5 = *(int *)(iVar9 + *(int *)(iVar2 + 8));
        }
        else {
          iVar5 = 0;
        }
        uVar12 = CONCAT44(uVar8,*(int *)(iVar5 + 4));
        uVar3 = 0;
      } while (*(int *)(iVar5 + 4) != 0);
    }
  }
  return CONCAT31((int3)(uVar3 >> 8),bVar7);
}
