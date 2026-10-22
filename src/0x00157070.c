/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 0C0DCE75ADB0590EA25BCA0D7E2AF68D288969E467F1C6EDB254126E41061CBC
 * Entry: 0x00157070, Ghidra index: 4483, label: FUN_00157070
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_003ffd80;
extern uint32_t DAT_00469b58;
uint FUN_00157070(int param_1)

{
  float fVar1;
  byte bVar2;
  int in_EAX;
  int iVar3;
  undefined3 uVar6;
  int iVar4;
  undefined3 extraout_var;
  uint uVar5;
  int iVar7;
  int iVar8;
  float fStack_c;
  int local_8;
  int local_4;
  
  local_4 = *(int *)(param_1 + 0x14);
  iVar8 = 0;
  if ((local_4 == 0) || (*(int *)(*(int *)(local_4 + 0xc) + 4) != 3)) {
    local_4 = 0;
  }
  iVar7 = *(int *)(*(int *)(in_EAX + 8) + 0xc4c);
  if ((iVar7 == 0) || (*(int *)(iVar7 + 0x14) != 0x159bec67)) {
    if (*(int *)(param_1 + 0x1c) == 0) {
      if (local_4 == 0) {
        local_8 = 0;
      }
      else {
        local_8 = *(int *)(local_4 + 0x59c);
      }
    }
    else {
      local_8 = *(int *)(*(int *)(param_1 + 0x1c) + 0x28);
    }
  }
  else {
    local_8 = *(int *)(iVar7 + 0x1c);
    iVar8 = iVar7;
  }
  iVar7 = 0;
  if (iVar8 == 0) {
    if (*(int *)(in_EAX + 0x184) == 0) {
      if ((*(int *)(*(int *)(in_EAX + 0xc) + 4) == 3) &&
         (iVar8 = (**(code **)(**(int **)(*(int *)(in_EAX + 8) + 0xbec) + 0xc))(), iVar8 != 0)) {
        iVar8 = (**(code **)(**(int **)(*(int *)(in_EAX + 8) + 0xbec) + 0xc))();
        iVar7 = *(int *)(iVar8 + 0x28);
      }
    }
    else {
      iVar7 = *(int *)(*(int *)(*(int *)(in_EAX + 0x184) + 0x1c) + 0x28);
    }
  }
  else if (*(int *)(*(int *)(in_EAX + 0xc) + 4) == 3) {
    iVar4 = *(int *)(*(int *)(iVar8 + 0x1c) + 0xc);
    iVar3 = (**(code **)(*(int *)(in_EAX + 0x1b4) + 0x9c))();
    if ((((iVar4 != -1) && (iVar3 != -1)) && (iVar4 == iVar3)) &&
       ((&DAT_003ffd80)[iVar4 * 10 + iVar3] == '\0')) {
      iVar7 = *(int *)(iVar8 + 0x1c);
    }
  }
  if ((local_8 != 0) || (uVar5 = 0, iVar7 != 0)) {
    iVar8 = *(int *)(in_EAX + 0xc);
    uVar6 = (undefined3)((uint)local_8 >> 8);
    uVar5 = CONCAT31(uVar6,*(char *)(iVar8 + 0x12a));
    if ((*(char *)(iVar8 + 0x12a) != '\0') ||
       (uVar5 = CONCAT31(uVar6,*(char *)(iVar8 + 299)), *(char *)(iVar8 + 299) != '\0')) {
      fVar1 = *(float *)(iVar8 + 0x124);
      uVar5 = CONCAT22((short)(uVar5 >> 0x10),
                       (ushort)(fVar1 < 0.0) << 8 | (ushort)isnan(fVar1) << 10 |
                       (ushort)(fVar1 == 0.0) << 0xe);
      if (fVar1 != 0.0) {
        bVar2 = *(byte *)(in_EAX + 0x70) & 1;
        uVar5 = CONCAT31((int3)(uVar5 >> 8),*(byte *)(in_EAX + 0x70)) & 0xffffff01;
        if ((bVar2 != 0) || (*(char *)(iVar8 + 0x129) != '\0')) {
          fStack_c = *(float *)(iVar8 + 0x124);
          if (*(char *)(iVar8 + 0x128) != '\0') {
            if ((bVar2 & (byte)uVar5) == 0) {
              fVar1 = *(float *)(param_1 + 8);
            }
            else {
              fVar1 = *(float *)(in_EAX + 0x50);
            }
            fStack_c = fVar1 * fStack_c;
          }
          iVar4 = (**(code **)(**(int **)(DAT_00469b58 + 8) + 0x234))();
          fStack_c = ((float)iVar4 * 0.1 + 1.0) * fStack_c;
          uVar6 = (undefined3)((uint)*(undefined4 *)(iVar8 + 300) >> 8);
          if ((*(char *)(iVar8 + 0x12a) != '\0') && (uVar6 = 0, local_8 != 0)) {
            FUN_0005c730(local_8,fStack_c,local_4);
            uVar6 = extraout_var;
          }
          uVar5 = CONCAT31(uVar6,*(char *)(iVar8 + 299));
          if ((*(char *)(iVar8 + 299) != '\0') && (iVar7 != 0)) {
            uVar5 = FUN_0005c730(iVar7,fStack_c,0);
          }
        }
      }
    }
  }
  return uVar5 & 0xffffff00;
}
