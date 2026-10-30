/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: D6C3CC639E9DB44CC2D813187497C379DD4A349D7C86684EBD480ED636D0CAE5
 * Entry: 0x000c1630, Ghidra index: 2354, label: FUN_000c1630
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern void FUN_00140060(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4);
extern int FUN_00140a60(int param_1,int *param_2);

extern uint32_t switchD_000c16ce_default[];
undefined1 FUN_000c1630(int param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  int unaff_ESI;
  int iVar5;
  undefined1 local_5;
  
  piVar4 = *(int **)(param_3 + 4);
  local_5 = 0;
  if (piVar4 == (int *)0x0) {
    iVar3 = 0;
  }
  else {
    iVar3 = *(int *)(param_3 + 8) - (int)piVar4 >> 2;
  }
  iVar1 = 0;
  piVar2 = (int *)(*(int *)(param_1 + 0x78) + 0x34);
  iVar5 = 0;
  do {
    if (*piVar2 == unaff_ESI) {
      if (((0 < iVar1) && (iVar1 < 5)) &&
         (*(char *)(iVar1 + 0x58 + *(int *)(param_1 + 0x78)) != '\0')) {
        iVar3 = iVar3 + -1;
      }
      break;
    }
    iVar1 = iVar1 + 1;
    piVar2 = piVar2 + 2;
  } while (iVar1 < 5);
  if ((iVar3 < 2) || (iVar3 < *(int *)(*(int *)(unaff_ESI + 0x59c) + 4) + -1)) {
    if (iVar3 < 1) {
      return 0;
    }
    while (piVar4 != *(int **)(param_3 + 8)) {
      if (*piVar4 == unaff_ESI) {
LAB_000c1733:
        piVar4 = piVar4 + 1;
      }
      else {
        iVar3 = *(int *)(*(int *)(*piVar4 + 0xc) + 0x1f0);
        local_5 = 1;
        if (iVar3 == 0) goto LAB_000c1733;
        if (iVar5 != 0) {
          FUN_00140060(iVar5,unaff_ESI,1,unaff_ESI);
          goto LAB_000c1733;
        }
        iVar5 = FUN_00140a60(*(undefined4 *)(*(int *)(unaff_ESI + 8) + 0xbe8),unaff_ESI,iVar3,0);
        piVar4 = piVar4 + 1;
      }
    }
  }
  else {
    iVar5 = FUN_00140a60(*(undefined4 *)(*(int *)(unaff_ESI + 8) + 0xbe8),unaff_ESI,0x12df4fe6,0);
  }
  if (iVar5 == 0) {
    return local_5;
  }
  switch(param_2) {
  case 0:
    break;
  case 1:
    break;
  case 2:
    break;
  case 3:
    break;
  default:
    goto switchD_000c16ce_default;
  }
  FUN_00140060(iVar5,unaff_ESI,1,unaff_ESI);
switchD_000c16ce_default:
  for (piVar4 = *(int **)(param_3 + 4); piVar4 != *(int **)(param_3 + 8); piVar4 = piVar4 + 1) {
    if (*piVar4 != unaff_ESI) {
      FUN_00140060(iVar5,*piVar4,1,unaff_ESI);
    }
  }
  return local_5;
}
