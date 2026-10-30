/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: ECD86189FD3DAF2D11B8A6B6473FE867B5C207095DBADD539F06983296EA9A3C
 * Entry: 0x00072f30, Ghidra index: 1293, label: FUN_00072f30
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t switchD_00072f6a_default[];
void FUN_00072f30(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  int unaff_EDI;
  
  if (param_2 < 0) {
    return;
  }
  if (6 < param_2) {
    return;
  }
  if (param_1 == 0) {
    return;
  }
  if (*(int *)(unaff_EDI + 0x94 + param_2 * 8) == param_1) {
    return;
  }
  switch(param_2) {
  case 0:
    if (*(int *)(unaff_EDI + 0x9c) != 0) {
      FUN_0008f6a0(0);
    }
    if (*(int *)(unaff_EDI + 0xa4) != 0) {
      FUN_0008f6a0(0);
    }
    if (*(int *)(unaff_EDI + 0xac) != 0) {
      FUN_0008f6a0(0);
    }
    iVar2 = unaff_EDI + 0xb0;
    goto LAB_00073009;
  case 1:
    if (*(int *)(unaff_EDI + 0x94) != 0) {
      FUN_0008f6a0(0);
    }
    if (*(int *)(unaff_EDI + 0xac) != 0) {
      FUN_0008f6a0(0);
    }
    iVar2 = unaff_EDI + 0xb0;
    break;
  case 2:
    iVar2 = unaff_EDI + 0x90;
LAB_00073009:
    if (*(int *)(iVar2 + 4) != 0) {
      FUN_0008f6a0(0);
    }
    if (*(int *)(unaff_EDI + 0xbc) != 0) {
      FUN_0008f6a0(0);
    }
    iVar2 = unaff_EDI + 0xc0;
    break;
  case 3:
  case 4:
    if (*(int *)(unaff_EDI + 0x94) != 0) {
      FUN_0008f6a0(0);
    }
    iVar2 = unaff_EDI + 0x98;
    break;
  case 5:
  case 6:
    if (*(int *)(unaff_EDI + 0x94) != 0) {
      FUN_0008f6a0(0);
    }
    iVar2 = unaff_EDI + 0xa0;
    break;
  default:
    goto switchD_00072f6a_default;
  }
  if (*(int *)(iVar2 + 4) != 0) {
    FUN_0008f6a0(0);
  }
switchD_00072f6a_default:
  if (*(int *)(unaff_EDI + 0x94 + param_2 * 8) != param_1) {
    FUN_0008f6a0(param_1);
  }
  iVar2 = 0;
  piVar1 = (int *)(unaff_EDI + 0x94);
  do {
    if (((iVar2 != param_2) && (*piVar1 == param_1)) && (*piVar1 != 0)) {
      FUN_0008f6a0(0);
    }
    iVar2 = iVar2 + 1;
    piVar1 = piVar1 + 2;
  } while (iVar2 < 7);
  *(undefined1 *)(unaff_EDI + 200) = 1;
  return;
}
