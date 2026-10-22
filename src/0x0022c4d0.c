/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 518CBFB18ADCA9996FC5233F2FA6983625240083A51ACF2DE8CC07BEB30B6507
 * Entry: 0x0022c4d0, Ghidra index: 7695, label: FUN_0022c4d0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 FUN_0022c4d0(int param_1,undefined4 param_2,int param_3,int *param_4)

{
  int *piVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  char cVar5;
  int iVar6;
  float10 fVar7;
  float fVar8;
  float fVar9;
  undefined1 local_40 [8];
  undefined4 local_38;
  
  if (param_4[0xf] == 0) {
    iVar6 = param_4[0x11];
  }
  else {
    piVar1 = *(int **)(param_4[0xf] + 0x9c);
    if (*piVar1 == 1) {
      iVar6 = piVar1[1];
    }
    else if (*piVar1 == 0) {
      iVar6 = piVar1[1];
    }
    else {
      iVar6 = 0;
    }
  }
  *(int *)(param_3 + 0x10) = iVar6;
  if ((byte *)*param_4 == (byte *)0x0) {
    fVar7 = (float10)FUN_0022c940();
    *(float *)(param_3 + 8) = (float)fVar7;
    *(undefined4 *)(param_3 + 0xc) = 0;
    *(byte *)(param_3 + 0x5c) = *(byte *)(param_3 + 0x5c) & 0xfe;
    *(undefined4 *)(param_3 + 0x58) = 0;
    *(byte *)(param_3 + 0x5c) = *(byte *)(param_3 + 0x5c) & 0xfd;
    *(byte *)(param_3 + 0x5c) = *(byte *)(param_3 + 0x5c) & 0xfe;
    *(undefined4 *)(param_3 + 0xc) = 0;
    iVar6 = param_4[3];
    iVar2 = param_4[2];
    *(int *)(param_3 + 0x48) = param_4[1];
    *(int *)(param_3 + 0x4c) = iVar2;
    *(int *)(param_3 + 0x50) = iVar6;
  }
  else {
    *(byte *)(param_3 + 0x5c) =
         *(byte *)(param_3 + 0x5c) ^ (*(byte *)(param_3 + 0x5c) ^ *(byte *)*param_4) & 1;
    fVar7 = (float10)FUN_00225060();
    *(float *)(param_3 + 8) = (float)fVar7;
    iVar6 = param_4[0xc];
    iVar2 = param_4[0xb];
    *(int *)(param_3 + 0x48) = param_4[10];
    *(int *)(param_3 + 0x50) = iVar6;
    *(int *)(param_3 + 0x4c) = iVar2;
    *(byte *)(param_3 + 0x5c) = *(byte *)(param_3 + 0x5c) | 2;
    if ((*(byte *)(param_3 + 0x5c) & 1) != 0) {
      fVar7 = (float10)0.0;
      fVar9 = *(float *)(param_1 + 0x1fc);
      iVar6 = param_4[0x11];
      if ((iVar6 != 0) && (*(int *)(*(int *)(iVar6 + 0xc) + 4) == 3)) {
        fVar7 = (float10)(**(code **)(**(int **)(iVar6 + 0x5a4) + 0xe0))();
      }
      fVar8 = (float)fVar7;
      if (fVar9 * 0.5 <= (float)fVar7) {
        fVar8 = fVar9 * 0.5;
      }
      if ((fVar9 != 0.0) && (fVar9 + fVar9 < fVar8 != (fVar9 + fVar9 == fVar8))) {
        *(undefined4 *)(param_3 + 8) = 0;
      }
      if (*(char *)(param_1 + 0x200) == '\0') {
        fVar9 = *(float *)(param_3 + 8) * 0.5;
      }
      else {
        fVar9 = fVar9 - fVar8;
        if (fVar9 <= 0.0) {
          *(undefined4 *)(param_3 + 8) = 0;
          goto LAB_0022c77e;
        }
        fVar8 = *(float *)(param_3 + 0x48) - (float)param_4[1];
        fVar4 = *(float *)(param_3 + 0x4c) - (float)param_4[2];
        fVar3 = *(float *)(param_3 + 0x50) - (float)param_4[3];
        fVar8 = SQRT(fVar8 * fVar8 + fVar4 * fVar4 + fVar3 * fVar3);
        if (fVar8 <= fVar9 * 0.5) goto LAB_0022c77e;
        fVar9 = fVar8 / fVar9 - 0.5;
        fVar9 = 1.0 - (fVar9 + fVar9);
        if (fVar9 <= 0.0) {
          fVar9 = 0.0;
        }
        if (1.0 <= fVar9) {
          fVar9 = 1.0;
        }
        fVar9 = fVar9 * fVar9 * *(float *)(param_3 + 8);
      }
      *(float *)(param_3 + 8) = fVar9;
    }
  }
LAB_0022c77e:
  *(byte *)(param_3 + 0x5c) = *(byte *)(param_3 + 0x5c) & 0xfb;
  *(byte *)(param_3 + 0x5c) =
       *(byte *)(param_3 + 0x5c) ^
       (~(*(byte *)(param_4 + 0x16) >> 3) << 3 ^ *(byte *)(param_3 + 0x5c)) & 8;
  *(undefined4 *)(param_3 + 4) = *(undefined4 *)(param_1 + 0x1f8);
  *(int *)(param_3 + 0x14) = param_4[0xd];
  *(int *)(param_3 + 0x1c) = param_4[0xe];
  iVar6 = param_4[9];
  iVar2 = param_4[8];
  *(int *)(param_3 + 0x24) = param_4[7];
  *(int *)(param_3 + 0x2c) = iVar6;
  *(int *)(param_3 + 0x28) = iVar2;
  *(float *)(param_3 + 8) = (float)param_4[0x13] * *(float *)(param_3 + 8);
  *(int *)(param_3 + 0x20) = param_4[0xf];
  iVar6 = param_4[3];
  iVar2 = param_4[2];
  *(int *)(param_3 + 0x30) = param_4[1];
  *(int *)(param_3 + 0x38) = iVar6;
  *(int *)(param_3 + 0x34) = iVar2;
  iVar6 = param_4[6];
  iVar2 = param_4[5];
  *(int *)(param_3 + 0x3c) = param_4[4];
  *(int *)(param_3 + 0x40) = iVar2;
  *(int *)(param_3 + 0x44) = iVar6;
  *(undefined4 *)(param_3 + 0x54) = *(undefined4 *)(param_1 + 0x234);
  if (((*param_4 != 0) && ((*(byte *)(param_3 + 0x5c) & 1) != 0)) &&
     (*(float *)(param_3 + 0x54) == 0.0)) {
    *(undefined4 *)(param_3 + 0x54) = 0x40000000;
  }
  if (((param_4[0xd] != 0) && (param_4[0x11] != 0)) && (cVar5 = FUN_0004b9c0(), cVar5 != '\0')) {
    *(float *)(param_3 + 8) = *(float *)(param_3 + 8) * 0.7;
    FUN_00012320(0x22);
    FUN_00012000(local_38,local_40);
    FUN_00012440();
  }
  return 1;
}
