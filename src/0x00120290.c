/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: EF41B823A4470C8198DD919640B41DD8FFB2463DC2FD71B76556E27576EBD538
 * Entry: 0x00120290, Ghidra index: 3643, label: FUN_00120290
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t PTR_LAB_003a3fb4;
extern uint32_t switchD_001207e2_caseD_7[];
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_00120290(int *param_1,float param_2)

{
  float fVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  float fVar5;
  bool bVar6;
  char cVar7;
  int *piVar8;
  float *pfVar9;
  int iVar10;
  float10 fVar11;
  float10 fVar12;
  undefined **ppuStack_14;
  int iStack_10;
  float fStack_c;
  int *piStack_8;
  undefined4 uStack_4;
  
  if ((param_1[400] == 0) || (cVar7 = (**(code **)(*(int *)param_1[0x169] + 0x9c))(), cVar7 == '\0')
     ) {
    param_1[0x181] = 0;
    param_1[0x188] = 0;
    if (param_1[0x18e] != 0) {
      FUN_0008f6a0(0);
    }
    FUN_000c4e70();
    FUN_000c4ec0();
  }
  else {
    if (param_1[0x181] == 0) {
      param_1[0x181] = 1;
      param_1[0x188] = 0x40a00000;
      param_1[0x189] = 0x3f666666;
      iVar3 = param_1[0x1b];
      iVar10 = *(int *)(iVar3 + 0x40);
      iVar4 = *(int *)(iVar3 + 0x3c);
      param_1[0x185] = *(int *)(iVar3 + 0x38);
      param_1[0x186] = iVar4;
      param_1[0x187] = iVar10;
      param_1[0x186] = 0;
    }
    piVar8 = (int *)FUN_00120ad0();
    iVar3 = piVar8[2];
    iVar10 = piVar8[1];
    param_1[0x182] = *piVar8;
    param_1[0x183] = iVar10;
    param_1[0x184] = iVar3;
  }
  iVar3 = param_1[0x7b];
  if ((((iVar3 == 4) || (iVar3 == 5)) || (iVar3 == 6)) &&
     ((param_1[0x1f8] != 0 && (param_1[0x1f8] != *(int *)(param_1[0xba] + 0x1cc))))) {
    FUN_0011e130();
  }
  if ((param_1[0x181] == 0) || (param_1[0x181] == 4)) goto switchD_001207e2_caseD_7;
  param_1[0x188] = (int)((float)param_1[0x188] - param_2);
  if ((float)param_1[0x18a] < 0.0 == ((float)param_1[0x18a] == 0.0)) {
    fVar1 = param_2;
    if ((float)param_1[0x18a] <= param_2) {
      fVar1 = (float)param_1[0x18a];
    }
    param_1[0x18a] = (int)((float)param_1[0x18a] - fVar1);
  }
  else {
    param_1[0x18a] = 0;
  }
  iVar3 = param_1[0x1b];
  pfVar9 = (float *)(iVar3 + 0x38);
  fVar1 = *(float *)(iVar3 + 0x40) - (float)param_1[0x187];
  fVar2 = *(float *)(iVar3 + 0x3c) - (float)param_1[0x186];
  iVar10 = *(int *)(iVar3 + 0x3c);
  fVar5 = *pfVar9 - (float)param_1[0x185];
  iVar4 = *(int *)(iVar3 + 0x40);
  param_1[0x185] = (int)*pfVar9;
  param_1[0x186] = iVar10;
  param_1[0x187] = iVar4;
  param_1[0x186] = 0;
  if ((((fVar5 * fVar5 + fVar2 * fVar2 + fVar1 * fVar1 < 0.001) && (param_1[0x181] != 2)) &&
      (param_1[0x181] != 3)) &&
     (param_1[0x189] = (int)((float)param_1[0x189] - param_2), (float)param_1[0x189] < 0.0)) {
    param_1[0x188] = (int)-param_2;
  }
  fStack_c = (float)param_1[0x184] - *(float *)(iVar3 + 0x40);
  fVar1 = (float)param_1[0x182];
  fVar2 = *pfVar9;
  if (param_1[0x181] == 1) {
    fVar5 = fStack_c * fStack_c;
    fVar11 = (float10)FUN_00120b60();
    fVar12 = (float10)((fVar1 - fVar2) * (fVar1 - fVar2) + fVar5);
    if (fVar12 < fVar11 * fVar11 == (fVar12 == fVar11 * fVar11)) {
      FUN_00120ad0();
      FUN_0001fd40();
      FUN_00061f50();
      param_1[0x17a] = (int)ppuStack_14;
      param_1[0x17b] = iStack_10;
      param_1[0x17c] = (int)fStack_c;
    }
    else {
      param_1[0x181] = 2;
      if ((param_1[0x7b] == 3) || (param_1[0x7b] == 9)) {
        if ((param_1[400] == 0) || (cVar7 = FUN_0015a440(), cVar7 != '\0')) {
          (**(code **)(*param_1 + 0x48))(param_1 + 0x182);
        }
        FUN_0011e570();
      }
    }
  }
  else {
    param_1[0x17c] = 0;
    param_1[0x17b] = 0;
    param_1[0x17a] = 0;
  }
  if ((param_1[0x181] == 2) && (cVar7 = FUN_001209c0(), cVar7 != '\0')) {
    ppuStack_14 = &PTR_LAB_003a3fb4;
    uStack_4 = 0xffffffff;
    iStack_10 = 0x12;
    piStack_8 = param_1;
    fStack_c = 0.0;
    FUN_001fe3d0(&ppuStack_14);
    if ((float)param_1[0x18a] < *(float *)(param_1[400] + 0x150)) {
      param_1[0x18a] = (int)*(float *)(param_1[400] + 0x150);
    }
    param_1[0x181] = 3;
    bVar6 = true;
  }
  else {
    bVar6 = false;
  }
  if ((float)param_1[0x18a] == 0.0) {
    if (param_1[0x181] == 3) {
      bVar6 = true;
    }
  }
  else {
    bVar6 = false;
  }
  if ((((param_1[0x85] != 0) || (!bVar6)) || (cVar7 = FUN_00117210(), cVar7 == '\0')) ||
     (param_1[0x7b] == 0)) goto switchD_001207e2_caseD_7;
  switch(param_1[0x7b]) {
  case 1:
    piVar8 = *(int **)(param_1[3] + 0x2cc);
    iVar3 = *(int *)(param_1[3] + 0x2c8);
    cVar7 = '\0';
    iVar10 = 0;
    if (0 < iVar3) {
      do {
        if (*piVar8 == 0x20) goto LAB_00120816;
        iVar10 = iVar10 + 1;
        piVar8 = piVar8 + 0x13;
      } while (iVar10 < iVar3);
    }
    break;
  case 2:
    piVar8 = *(int **)(param_1[3] + 0x2cc);
    iVar3 = *(int *)(param_1[3] + 0x2c8);
    cVar7 = '\0';
    iVar10 = 0;
    if (0 < iVar3) {
      do {
        if (*piVar8 == 0x1f) goto LAB_00120816;
        iVar10 = iVar10 + 1;
        piVar8 = piVar8 + 0x13;
      } while (iVar10 < iVar3);
    }
    break;
  case 3:
    piVar8 = *(int **)(param_1[3] + 0x2cc);
    iVar3 = *(int *)(param_1[3] + 0x2c8);
    cVar7 = '\0';
    iVar10 = 0;
    if (0 < iVar3) {
      do {
        if (*piVar8 == 0x25) goto LAB_00120816;
        iVar10 = iVar10 + 1;
        piVar8 = piVar8 + 0x13;
      } while (iVar10 < iVar3);
    }
    break;
  case 4:
    cVar7 = FUN_00120c00(0);
    break;
  case 5:
    cVar7 = FUN_00120c00(1);
    break;
  case 6:
    cVar7 = FUN_00120c00(2);
    break;
  default:
    goto switchD_001207e2_caseD_7;
  case 9:
    iVar3 = param_1[400];
    if (iVar3 == 0) goto switchD_001207e2_caseD_7;
    cVar7 = (**(code **)(*(int *)param_1[0x169] + 0x8c))(*(undefined4 *)(iVar3 + 0x110),iVar3);
    if (cVar7 == '\0') {
      FUN_000c4f10();
      param_1[0x181] = 0;
      cVar7 = '\0';
      break;
    }
    goto LAB_00120926;
  }
LAB_0012091c:
  if (cVar7 != '\0') {
LAB_00120926:
    param_1[0x7b] = 0;
    param_1[0x188] = 0;
    param_1[0x181] = 4;
  }
switchD_001207e2_caseD_7:
  if ((((float)param_1[0x188] < 0.0 != ((float)param_1[0x188] == 0.0)) && (param_1[0x181] != 0)) &&
     (param_1[0x181] != 4)) {
    param_1[0x181] = 0;
    param_1[0x188] = 0;
    param_1[0x1f8] = 0;
    FUN_000c4f10();
  }
  return;
LAB_00120816:
  cVar7 = '\0';
  if ((*(byte *)((int)piVar8 + 0x3d) & 4) == 0) {
    if (param_1[0x86] == 0) {
      param_1[0x86] = (int)piVar8;
      cVar7 = '\x01';
    }
  }
  else if (param_1[0x91] == 0) {
    param_1[0x91] = (int)piVar8;
    cVar7 = '\x01';
  }
  goto LAB_0012091c;
}
