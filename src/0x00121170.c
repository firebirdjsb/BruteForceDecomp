/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 43A5703627BF8D8CEC28ED4114330806F390744D560092C6F0AFD8766730846B
 * Entry: 0x00121170, Ghidra index: 3653, label: FUN_00121170
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t switchD_00121200_caseD_7[];
bool FUN_00121170(undefined4 param_1)

{
  byte *pbVar1;
  char cVar2;
  undefined4 in_EAX;
  int *piVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  int unaff_EDI;
  
  cVar2 = FUN_001210c0(in_EAX);
  if (cVar2 == '\0') {
    return false;
  }
  piVar3 = (int *)FUN_0014cc30();
  iVar4 = (**(code **)(*piVar3 + 0x5c))();
  cVar2 = (**(code **)(*(int *)(*(int *)(unaff_EDI + 0x2e8) + 0xf0) + 0x20))();
  if (cVar2 != '\0') {
    (**(code **)(*(int *)(*(int *)(unaff_EDI + 0x2e8) + 0xf0) + 0x38))();
  }
  if (*(int *)(iVar4 + 0x174) != 6) {
    FUN_001249b0();
  }
  uVar5 = FUN_001463c0();
  *(undefined1 *)(unaff_EDI + 0x7e8) = 1;
  *(undefined4 *)(unaff_EDI + 0x1ec) = 7;
  switch(uVar5) {
  case 1:
    iVar4 = *(int *)(unaff_EDI + 0x2e8);
    if (*(int *)(iVar4 + 0xa8) != 0) {
      FUN_00121010();
      return true;
    }
    piVar3 = *(int **)(*(int *)(unaff_EDI + 0xc) + 0x2cc);
    iVar7 = *(int *)(*(int *)(unaff_EDI + 0xc) + 0x2c8);
    iVar6 = 0;
    if (0 < iVar7) {
      while (*piVar3 != 10) {
        iVar6 = iVar6 + 1;
        piVar3 = piVar3 + 0x13;
        if (iVar7 <= iVar6) {
          *(undefined1 *)(unaff_EDI + 0x7e8) = 0;
          return true;
        }
      }
LAB_00121300:
      if ((*(byte *)((int)piVar3 + 0x3d) & 4) == 0) {
        if (*(int *)(unaff_EDI + 0x218) == 0) {
          *(int **)(unaff_EDI + 0x218) = piVar3;
          goto LAB_00121380;
        }
      }
      else if (*(int *)(unaff_EDI + 0x244) == 0) {
        *(int **)(unaff_EDI + 0x244) = piVar3;
LAB_00121380:
        FUN_0014abc0(iVar4);
        pbVar1 = (byte *)(*(int *)(unaff_EDI + 0x2e8) + 0x1c8);
        *pbVar1 = *pbVar1 | 1;
        *(undefined4 *)(unaff_EDI + 0x7f0) = param_1;
        (**(code **)(**(int **)(unaff_EDI + 0x5a4) + 0x104))(uVar5);
        return true;
      }
    }
    goto LAB_001212f1;
  case 2:
    piVar3 = *(int **)(*(int *)(unaff_EDI + 0xc) + 0x2cc);
    iVar4 = *(int *)(*(int *)(unaff_EDI + 0xc) + 0x2c8);
    iVar7 = 0;
    if (iVar4 < 1) goto LAB_001212f1;
    while (*piVar3 != 0x23) {
      iVar7 = iVar7 + 1;
      piVar3 = piVar3 + 0x13;
      if (iVar4 <= iVar7) {
        *(undefined1 *)(unaff_EDI + 0x7e8) = 0;
        return true;
      }
    }
    break;
  case 3:
    cVar2 = FUN_0012eab0(1);
    if (cVar2 != '\0') {
      FUN_0014abc0(*(undefined4 *)(unaff_EDI + 0x2e8));
      pbVar1 = (byte *)(*(int *)(unaff_EDI + 0x2e8) + 0x1c8);
      *pbVar1 = *pbVar1 | 1;
      *(undefined4 *)(unaff_EDI + 0x7f0) = param_1;
      (**(code **)(**(int **)(unaff_EDI + 0x5a4) + 0x104))(uVar5);
      return true;
    }
    *(undefined4 *)(unaff_EDI + 0x1ec) = 0;
    *(undefined1 *)(unaff_EDI + 0x7e8) = 0;
    return true;
  case 4:
    *(undefined1 *)(unaff_EDI + 0x7e8) = 0;
    pbVar1 = (byte *)(*(int *)(unaff_EDI + 0x2e8) + 0x1c8);
    *pbVar1 = *pbVar1 | 1;
    *(undefined4 *)(unaff_EDI + 0x7f0) = param_1;
    iVar4 = FUN_00120d40();
    return iVar4 == 1;
  case 5:
    piVar3 = *(int **)(*(int *)(unaff_EDI + 0xc) + 0x2cc);
    iVar4 = *(int *)(*(int *)(unaff_EDI + 0xc) + 0x2c8);
    iVar7 = 0;
    if (iVar4 < 1) goto LAB_001212f1;
    while (*piVar3 != 10) {
      iVar7 = iVar7 + 1;
      piVar3 = piVar3 + 0x13;
      if (iVar4 <= iVar7) {
        *(undefined1 *)(unaff_EDI + 0x7e8) = 0;
        return true;
      }
    }
    break;
  case 6:
    *(undefined4 *)(unaff_EDI + 0x7f0) = param_1;
    *(undefined1 *)(unaff_EDI + 0x7e8) = 0;
    *(undefined4 *)(unaff_EDI + 0x1ec) = 0;
    (**(code **)(*piVar3 + 0x3c))(*(undefined4 *)(unaff_EDI + 0x2e8));
    (**(code **)(**(int **)(unaff_EDI + 0x5a4) + 0x104))(uVar5);
    return true;
  case 7:
    goto switchD_00121200_caseD_7;
  case 8:
    cVar2 = FUN_00123340(unaff_EDI);
    if (cVar2 != '\0') {
      FUN_0014abc0(*(undefined4 *)(unaff_EDI + 0x2e8));
      pbVar1 = (byte *)(*(int *)(unaff_EDI + 0x2e8) + 0x1c8);
      *pbVar1 = *pbVar1 | 1;
      (**(code **)(**(int **)(unaff_EDI + 0x5a4) + 0x104))(uVar5);
      return true;
    }
    goto LAB_001212f1;
  case 9:
  case 10:
  case 0xb:
  case 0xc:
    cVar2 = FUN_00123340(unaff_EDI);
    if (cVar2 == '\0') {
      *(undefined1 *)(unaff_EDI + 0x7e8) = 0;
    }
    else {
      FUN_0014abc0(*(undefined4 *)(unaff_EDI + 0x2e8));
      pbVar1 = (byte *)(*(int *)(unaff_EDI + 0x2e8) + 0x1c8);
      *pbVar1 = *pbVar1 | 1;
      *(undefined4 *)(unaff_EDI + 0x7f0) = param_1;
      (**(code **)(**(int **)(unaff_EDI + 0x5a4) + 0x104))(uVar5);
    }
    goto switchD_00121200_caseD_7;
  default:
    piVar3 = *(int **)(*(int *)(unaff_EDI + 0xc) + 0x2cc);
    iVar4 = *(int *)(*(int *)(unaff_EDI + 0xc) + 0x2c8);
    iVar7 = 0;
    if (iVar4 < 1) goto LAB_001212f1;
    while (*piVar3 != 0x2f) {
      iVar7 = iVar7 + 1;
      piVar3 = piVar3 + 0x13;
      if (iVar4 <= iVar7) {
        *(undefined1 *)(unaff_EDI + 0x7e8) = 0;
        return true;
      }
    }
  }
  if ((*(byte *)((int)piVar3 + 0x3d) & 4) == 0) {
    if (*(int *)(unaff_EDI + 0x218) == 0) {
      *(int **)(unaff_EDI + 0x218) = piVar3;
      goto LAB_00121571;
    }
  }
  else if (*(int *)(unaff_EDI + 0x244) == 0) {
    *(int **)(unaff_EDI + 0x244) = piVar3;
LAB_00121571:
    FUN_0014abc0(*(undefined4 *)(unaff_EDI + 0x2e8));
    pbVar1 = (byte *)(*(int *)(unaff_EDI + 0x2e8) + 0x1c8);
    *pbVar1 = *pbVar1 | 1;
    *(undefined4 *)(unaff_EDI + 0x7f0) = param_1;
    (**(code **)(**(int **)(unaff_EDI + 0x5a4) + 0x104))(uVar5);
    return true;
  }
LAB_001212f1:
  *(undefined1 *)(unaff_EDI + 0x7e8) = 0;
  return true;
switchD_00121200_caseD_7:
  iVar4 = *(int *)(unaff_EDI + 0x2e8);
  if (*(int *)(iVar4 + 0xdc) != 0) {
    FUN_00121070();
    return true;
  }
  piVar3 = *(int **)(*(int *)(unaff_EDI + 0xc) + 0x2cc);
  iVar7 = *(int *)(*(int *)(unaff_EDI + 0xc) + 0x2c8);
  iVar6 = 0;
  if (0 < iVar7) {
    do {
      if (*piVar3 == 7) goto LAB_00121300;
      iVar6 = iVar6 + 1;
      piVar3 = piVar3 + 0x13;
    } while (iVar6 < iVar7);
  }
  goto LAB_001212f1;
}
