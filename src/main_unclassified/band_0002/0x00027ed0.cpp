/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 51F741F43C38F6D95E71979F8AE36AAACDD6CDADD94FDDB0C2BA34CA76412354
 * Entry: 0x00027ed0, Ghidra index: 276, label: FUN_00027ed0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t FUN_000120f0(int32_t in_EAX);
extern void FUN_0001d4c0(int param_1,int param_2,undefined4 param_3);
extern int FUN_00054c40(int param_1,uint param_2,undefined4 param_3,int param_4);
extern void FUN_0015b7c0(void);
extern undefined4 FUN_0003a920(undefined4 param_1,int param_2,undefined4 *param_3);
extern undefined4 FUN_00055aa0(void);
extern void FUN_0004e8f0(void);
extern float10 FUN_00039460(void);
extern void FUN_0008f6e0(std::uint32_t guest_edx);

extern uint32_t DAT_0046cfd8;
extern uint32_t switchD_00028106_caseD_1[];
undefined4 FUN_00027ed0(void)

{
  int iVar1;
  float fVar2;
  char cVar3;
  int *piVar4;
  int *piVar5;
  uint uVar6;
  int iVar7;
  undefined4 uVar8;
  int iVar9;
  undefined1 *puVar10;
  int unaff_ESI;
  bool bVar11;
  float10 fVar12;
  char local_21;
  float local_20;
  undefined1 local_8 [4];
  int iStack_4;
  
  piVar4 = (int *)FUN_000120f0();
  if (((*(byte *)(unaff_ESI + 0x628) & 1) != 0) &&
     (*(float *)(unaff_ESI + 0x624) < 0.0 == (*(float *)(unaff_ESI + 0x624) == 0.0))) {
    return 0;
  }
  *(undefined4 *)(unaff_ESI + 0x62c) = 0x40a00000;
  *(undefined4 *)(unaff_ESI + 0x624) = 0x40a00000;
  *(byte *)(unaff_ESI + 0x628) = *(byte *)(unaff_ESI + 0x628) & 0xf9 | 1;
  iVar9 = *(int *)(unaff_ESI + 0x608);
  local_21 = '\0';
LAB_00027f40:
  iVar7 = *(int *)(*(int *)(unaff_ESI + 0x3f8) + 4 + *(int *)(unaff_ESI + 0x58) * 0xc);
  piVar5 = (int *)FUN_00023010();
  if ((*piVar5 != *(int *)(iVar7 + 0xc)) &&
     (uVar6 = *piVar5 - *(int *)(iVar7 + 8) >> 2, -1 < (int)uVar6)) {
    if (*(char *)(unaff_ESI + 0x419) != '\0') {
      if (4 < (int)(*(int *)(unaff_ESI + 0x410) - *(int *)(unaff_ESI + 0x40c) & 0xfffffffcU)) {
        FUN_0001d4c0(*(int *)(unaff_ESI + 0x40c));
      }
      *(undefined1 *)(unaff_ESI + 0x419) = 0;
    }
    iVar7 = FUN_00054c40();
    *(int *)(unaff_ESI + 0x608) = iVar7;
    if (iVar9 == iVar7) {
      if (*(char *)(unaff_ESI + 0x419) != '\0') {
        if (4 < (int)(*(int *)(unaff_ESI + 0x410) - *(int *)(unaff_ESI + 0x40c) & 0xfffffffcU)) {
          FUN_0001d4c0(*(int *)(unaff_ESI + 0x40c));
        }
        *(undefined1 *)(unaff_ESI + 0x419) = 0;
      }
      uVar8 = FUN_00054c40();
      *(undefined4 *)(unaff_ESI + 0x608) = uVar8;
    }
    iVar7 = *(int *)(*(int *)(unaff_ESI + 0x3f8) + 8 + *(int *)(unaff_ESI + 0x58) * 0xc);
    iVar1 = *(int *)(iVar7 + 4);
    if ((iVar1 == 0) || ((uint)(*(int *)(iVar7 + 8) - iVar1 >> 2) <= uVar6)) {
      FUN_0015b7c0();
    }
    cVar3 = FUN_0003a920();
    if ((cVar3 != '\0') && (1.1920929e-07 < local_20)) {
      *(float *)(unaff_ESI + 0x62c) = local_20;
      *(float *)(unaff_ESI + 0x624) = local_20;
      *(byte *)(unaff_ESI + 0x628) = *(byte *)(unaff_ESI + 0x628) & 0xf9 | 1;
    }
  }
LAB_000280f0:
  switch(*(undefined4 *)(unaff_ESI + 0x608)) {
  case 0:
    *(int *)(unaff_ESI + 0x608) = iVar9;
    iVar9 = FUN_00055aa0();
    *(undefined4 *)(iVar9 + 0x94) = 0;
    break;
  default:
    goto switchD_00028106_caseD_1;
  case 0x61:
    iVar9 = FUN_00055aa0();
    *(undefined4 *)(iVar9 + 0x94) = 0;
    piVar4[0x1f7] = 0;
    break;
  case 0x62:
    iVar9 = FUN_00055aa0();
    *(undefined4 *)(iVar9 + 0x94) = 0;
    piVar4[0x1f7] = 0;
    piVar4[0x15e] = 0x41a00000;
    break;
  case 99:
    iVar9 = FUN_00055aa0();
    *(undefined4 *)(iVar9 + 0x94) = 0;
    piVar4[0x1f7] = 0;
    local_21 = '\x01';
    break;
  case 100:
    iVar7 = (**(code **)(*(int *)(unaff_ESI + 0x40) + 0x2d8))();
    if (iVar7 == 1) goto LAB_0002819d;
    *(undefined4 *)(unaff_ESI + 0x608) = 0x61;
    goto LAB_000280f0;
  case 0x65:
    goto LAB_00028166;
  case 0x66:
    iVar9 = FUN_00055aa0();
    goto LAB_0002832c;
  case 0x67:
    iVar9 = FUN_00055aa0();
    local_21 = '\x01';
LAB_0002832c:
    *(undefined4 *)(iVar9 + 0x94) = 0;
    DAT_0046cfd8 = DAT_0046cfd8 * 0x19660d + 0x3c6ef35f;
    *(float *)(unaff_ESI + 0x614) = ((float)(DAT_0046cfd8 >> 9 | 0x3f800000) - 1.0) * 43.0 - 15.0;
    DAT_0046cfd8 = DAT_0046cfd8 * 0x19660d + 0x3c6ef35f;
    fVar2 = ((float)(DAT_0046cfd8 >> 9 | 0x3f800000) - 1.0) * 10.0 + 15.0;
LAB_0002827b:
    *(float *)(unaff_ESI + 0x618) = fVar2;
    DAT_0046cfd8 = DAT_0046cfd8 * 0x19660d + 0x3c6ef35f;
    if (0.5 <= (float)(DAT_0046cfd8 >> 9 | 0x3f800000) - 1.0) {
      uVar8 = 0xbf800000;
    }
    else {
      uVar8 = 0x3f800000;
    }
    *(undefined4 *)(unaff_ESI + 0x61c) = uVar8;
    *(undefined4 *)(unaff_ESI + 0x60c) = 0xc1a00000;
    *(undefined4 *)(unaff_ESI + 0x610) = 0x41f00000;
    break;
  case 0x68:
    iVar9 = FUN_00055aa0();
    *(undefined4 *)(iVar9 + 0x94) = 0;
    piVar4[0x1f7] = 0;
    DAT_0046cfd8 = DAT_0046cfd8 * 0x19660d + 0x3c6ef35f;
    *(float *)(unaff_ESI + 0x614) = ((float)(DAT_0046cfd8 >> 9 | 0x3f800000) - 1.0) * 160.0 - 80.0;
    DAT_0046cfd8 = DAT_0046cfd8 * 0x19660d + 0x3c6ef35f;
    fVar2 = ((float)(DAT_0046cfd8 >> 9 | 0x3f800000) - 1.0) * 15.0 + 20.0;
    goto LAB_0002827b;
  case 0x69:
    iVar7 = (**(code **)(*(int *)(unaff_ESI + 0x40) + 0x2d8))();
    if (iVar7 != 1) goto code_r0x0002813f;
    piVar4[0x1f7] = 0;
    DAT_0046cfd8 = DAT_0046cfd8 * 0x19660d + 0x3c6ef35f;
    *(float *)(unaff_ESI + 0x614) = ((float)(DAT_0046cfd8 >> 9 | 0x3f800000) - 1.0) * 160.0 - 80.0;
    DAT_0046cfd8 = DAT_0046cfd8 * 0x19660d + 0x3c6ef35f;
    *(float *)(unaff_ESI + 0x618) = ((float)(DAT_0046cfd8 >> 9 | 0x3f800000) - 1.0) * 15.0 + 20.0;
    DAT_0046cfd8 = DAT_0046cfd8 * 0x19660d + 0x3c6ef35f;
    if (0.5 <= (float)(DAT_0046cfd8 >> 9 | 0x3f800000) - 1.0) {
      uVar8 = 0xbf800000;
    }
    else {
      uVar8 = 0x3f800000;
    }
    *(undefined4 *)(unaff_ESI + 0x61c) = uVar8;
    *(undefined4 *)(unaff_ESI + 0x60c) = 0xc1a00000;
    *(undefined4 *)(unaff_ESI + 0x610) = 0x41f00000;
    goto switchD_00028106_caseD_1;
  }
  *(undefined4 *)(unaff_ESI + 0x5f0) = 1;
  FUN_0004e8f0();
  goto switchD_00028106_caseD_1;
code_r0x0002813f:
  *(undefined4 *)(unaff_ESI + 0x608) = 0x61;
  goto LAB_000280f0;
LAB_00028166:
  (**(code **)(*piVar4 + 0x40))();
  fVar12 = (float10)FUN_00039460();
  if (((float10)4.0 <= fVar12) &&
     (iVar7 = (**(code **)(*(int *)(unaff_ESI + 0x40) + 0x338))(), iVar7 == 1)) {
LAB_0002819d:
    piVar4[0x1f7] = 0;
switchD_00028106_caseD_1:
    bVar11 = *(int *)(unaff_ESI + 8) != 0;
    if (bVar11) {
      iStack_4 = 0;
      puVar10 = local_8;
    }
    else {
      puVar10 = (undefined1 *)(unaff_ESI + 0xc);
    }
    iVar9 = *(int *)(puVar10 + 4);
    if ((bVar11) && (iStack_4 != 0)) {
      FUN_0008f6e0();
    }
    if (((iVar9 != 0) && ((*(byte *)(*(int *)(iVar9 + 0xc) + 0x1a9) & 1) != 0)) &&
       (*(char *)(unaff_ESI + 0x3cc) = local_21, *(char *)(unaff_ESI + 0x3cd) != local_21)) {
      *(undefined4 *)(unaff_ESI + 0x3dc) = 0;
      *(undefined4 *)(unaff_ESI + 0x3d4) = 0;
      *(byte *)(unaff_ESI + 0x3d8) = *(byte *)(unaff_ESI + 0x3d8) & 0xfa | 2;
    }
    *(undefined1 *)(piVar4 + 0x19c) = 0;
    return 1;
  }
  goto LAB_00027f40;
}
