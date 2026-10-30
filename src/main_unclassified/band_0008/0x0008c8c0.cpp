/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: AB95C65E59D7FCDA56EC4F574A74CC9CE02619571004494139F71B03E337C19C
 * Entry: 0x0008c8c0, Ghidra index: 1703, label: FUN_0008c8c0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern void FUN_0008c2a0(int param_1);
extern void FUN_0008c6f0(undefined4 param_1);
extern void FUN_0008c640(int *param_1,undefined4 param_2);
extern void FUN_0008c760(int *param_1,undefined4 param_2);
extern undefined4 FUN_00078df0(void);
extern undefined4 FUN_00078d80(void);
extern undefined4 FUN_0008b880(void);
extern void FUN_0008d200(void);

extern uint32_t DAT_00469948;
extern uint32_t DAT_00469b58;
void FUN_0008c8c0(undefined4 param_1)

{
  int iVar1;
  char cVar2;
  int *piVar3;
  int *piVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 *puVar7;
  int *in_ECX;
  int iStack_8c;
  undefined4 uStack_88;
  int iStack_84;
  int iStack_80;
  int iStack_7c;
  undefined4 auStack_78 [5];
  int iStack_64;
  byte bStack_60;
  undefined4 auStack_5c [5];
  int iStack_48;
  byte bStack_44;
  undefined4 auStack_40 [5];
  int iStack_2c;
  byte bStack_28;
  undefined4 auStack_24 [5];
  int iStack_10;
  
  cVar2 = (**(code **)(**(int **)(DAT_00469b58 + 8) + 0x24))();
  if (cVar2 == '\0') {
    return;
  }
  piVar3 = (int *)(**(code **)(**(int **)(DAT_00469b58 + 8) + 0x78))();
  if (piVar3 == (int *)0x0) {
    return;
  }
  FUN_0008c2a0(in_ECX);
  iStack_8c = 8;
  piVar4 = (int *)(**(code **)(**(int **)(DAT_00469b58 + 8) + 0x58))();
  iStack_80 = *piVar4;
  if (iStack_80 == 0x120785ef) {
    FUN_0008c6f0(param_1);
  }
  else {
    if (iStack_80 == 0x17506391) {
      FUN_0008c640(in_ECX,param_1);
      iStack_8c = 4;
      goto LAB_0008c965;
    }
    if (iStack_80 != -0x104e72d8) goto LAB_0008c965;
    FUN_0008c760(in_ECX,param_1);
  }
  iStack_8c = 8;
LAB_0008c965:
  if ((*(byte *)(in_ECX[0x12] + 0xc50) & 0x10) == 0) {
    iStack_84 = 1;
    do {
      iStack_7c = (**(code **)(*in_ECX + 8))(iStack_84);
      if (iStack_7c != 0) {
        iVar5 = FUN_00078df0();
        uVar6 = FUN_00078d80();
        if ((iVar5 < 0) || (0x18 < iVar5)) {
          iVar5 = 0;
LAB_0008ca15:
          iVar1 = in_ECX[0x12];
          if (((*(byte *)(iVar1 + 0xc50) & 1) != 0) ||
             ((iVar5 == 0 || (*(float *)(iVar5 + 0x128) == 0.0)))) goto LAB_0008cb5c;
          if (iStack_80 == 0x17506391) {
            uStack_88 = 0xcfeaf6f;
            cVar2 = (**(code **)(*piVar3 + 0x30))(&uStack_88);
            if (cVar2 != '\0') goto LAB_0008cb5c;
            auStack_24[3] = 0;
            puVar7 = auStack_24;
            for (iVar5 = 7; iVar5 != 0; iVar5 = iVar5 + -1) {
              *puVar7 = 0;
              puVar7 = puVar7 + 1;
            }
            iStack_10 = in_ECX[0x12];
            auStack_24[0] = uStack_88;
            puVar7 = auStack_24;
            auStack_24[1] = uVar6;
          }
          else if (iStack_80 == 0x120785ef) {
            puVar7 = auStack_78;
            for (iVar5 = 7; iVar5 != 0; iVar5 = iVar5 + -1) {
              *puVar7 = 0;
              puVar7 = puVar7 + 1;
            }
            bStack_60 = bStack_60 | 3;
            auStack_78[0] = 0xebb7c7d6;
            auStack_78[3] = 0x181bd33;
            puVar7 = auStack_78;
            auStack_78[1] = uVar6;
            iStack_64 = iVar1;
          }
          else {
            if (iStack_80 != -0x104e72d8) goto LAB_0008cb5c;
            puVar7 = auStack_5c;
            for (iVar5 = 7; iVar5 != 0; iVar5 = iVar5 + -1) {
              *puVar7 = 0;
              puVar7 = puVar7 + 1;
            }
            bStack_44 = bStack_44 | 3;
            auStack_5c[0] = 0xe3976152;
            auStack_5c[3] = 0x7cc7be5;
            puVar7 = auStack_5c;
            auStack_5c[1] = uVar6;
            iStack_48 = iVar1;
          }
          iVar5 = (**(code **)*piVar3)(puVar7);
        }
        else {
          iVar5 = *(int *)(DAT_00469948 + 0x250 + iVar5 * 4);
          if ((iVar5 == 0) || (*(float *)(iVar5 + 0x74) == 0.0)) goto LAB_0008ca15;
          auStack_40[3] = 0;
          puVar7 = auStack_40;
          for (iVar5 = 7; iVar5 != 0; iVar5 = iVar5 + -1) {
            *puVar7 = 0;
            puVar7 = puVar7 + 1;
          }
          iStack_2c = in_ECX[0x12];
          bStack_28 = bStack_28 | 0x13;
          auStack_40[0] = 0xfdcd29b4;
          auStack_40[1] = uVar6;
          iVar5 = (**(code **)*piVar3)(auStack_40);
        }
        if (iVar5 != 0) {
          cVar2 = FUN_0008b880();
          cVar2 = '\x01' - (cVar2 != '\0');
          *(byte *)(iVar5 + 0x28) =
               *(byte *)(iVar5 + 0x28) ^ (cVar2 * ' ' ^ *(byte *)(iVar5 + 0x28)) & 0x20;
          if (cVar2 != '\0') {
            *(byte *)(iVar5 + 0x66) = *(byte *)(iVar5 + 0x66) & 0xfe;
          }
        }
      }
LAB_0008cb5c:
      iStack_84 = iStack_84 + 1;
    } while (iStack_84 < 9);
  }
  iVar5 = (**(code **)(*in_ECX + 0x34))();
  if (iStack_8c <= iVar5) {
    piVar3 = in_ECX + 0x19;
    iVar5 = 4;
    do {
      if (*piVar3 != 0) {
        piVar4 = (int *)(**(code **)(**(int **)(DAT_00469b58 + 8) + 0x78))();
        (**(code **)(*piVar4 + 0x14))(*piVar3);
      }
      piVar3 = piVar3 + 2;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  FUN_0008d200();
  return;
}
