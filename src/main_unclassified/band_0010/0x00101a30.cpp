/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 2A7E85C13E796ABD00113E3650A23CBC0B7E127AF803D8F5FBC79DCD8ADDFBD9
 * Entry: 0x00101a30, Ghidra index: 3252, label: FUN_00101a30
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t *DAT_00469ab4;
extern uint32_t DAT_00469b58;
undefined4 FUN_00101a30(char param_1,char param_2)

{
  char cVar1;
  char extraout_AL;
  int *in_EAX;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int unaff_EBX;
  int iVar5;
  int *piVar6;
  int *piVar7;
  char unaff_retaddr;
  int **ppiVar8;
  int *local_10;
  int *local_c;
  int iStack_8;
  
  local_c = (int *)0x0;
  piVar6 = (int *)0x0;
  if ((in_EAX != (int *)0x0) && (iVar2 = (**(code **)(*in_EAX + 4))(), iVar2 == 8)) {
    piVar6 = in_EAX;
    local_c = in_EAX;
  }
  local_10 = (int *)0x0;
  piVar7 = (int *)0x0;
  if ((in_EAX != (int *)0x0) && (iVar2 = (**(code **)(*in_EAX + 4))(), iVar2 == 3)) {
    piVar7 = in_EAX;
    local_10 = in_EAX;
  }
  if (piVar6 == (int *)0x0) {
    if (piVar7 == (int *)0x0) {
      return 0;
    }
    FUN_0010caa0();
  }
  else {
    FUN_00102d50();
    piVar6[0x27] = -1;
    piVar6[0x28] = -1;
  }
  iVar2 = **(int **)(DAT_00469b58 + 8);
  iStack_8 = 0;
  uVar3 = FUN_00102000();
  iVar2 = (**(code **)(iVar2 + 0x130))(uVar3);
  if (iVar2 == 0) {
    if (piVar6 != (int *)0x0) {
      iVar2 = (**(code **)(**(int **)(DAT_00469b58 + 8) + 0x1e8))();
      local_c = *(int **)(iVar2 + 8);
    }
  }
  else {
    local_c = *(int **)(iVar2 + 0xc);
  }
  iVar4 = (**(code **)(**(int **)(DAT_00469b58 + 8) + 0x188))();
  iVar2 = *(int *)(iVar4 + 8);
  iVar4 = *(int *)(iVar4 + 4);
  iStack_8 = iVar2;
  if (iVar4 != iVar2) {
    iVar5 = iVar4 + 4;
    do {
      if (((param_1 != '\0') || (*(char *)(iVar5 + 0x1c) != '\x01')) &&
         ((param_2 != '\x01' ||
          ((*(char *)(iVar5 + 0x1c) != '\0' ||
           (cVar1 = (**(code **)(*DAT_00469ab4 + 0x60))(iVar5 + 0x18), cVar1 != '\x01')))))) {
        if (local_10 == (int *)0x0) {
          if (unaff_EBX != 0) {
            FUN_0010c660(iVar5 + 0x18);
            iVar2 = iStack_8;
          }
        }
        else if (*(uint *)(iVar5 + 0x14) < 8) {
          FUN_00102cf0(local_10,iVar5 + 0x18);
        }
        else {
          FUN_00102cf0(local_10,iVar5 + 0x18);
        }
      }
      iVar4 = iVar4 + 0x3c;
      iVar5 = iVar5 + 0x3c;
      piVar6 = local_10;
    } while (iVar4 != iVar2);
  }
  if (unaff_retaddr != '\0') {
    local_10 = (int *)0xe9fd23e1;
    if (piVar6 == (int *)0x0) {
      if (unaff_EBX == 0) {
        return 1;
      }
      ppiVar8 = &local_10;
      FUN_001e97c0(ppiVar8);
      FUN_0010c660(ppiVar8);
      goto LAB_00101c12;
    }
    ppiVar8 = &local_10;
    FUN_001e97c0(ppiVar8);
    FUN_00102cf0(piVar6,ppiVar8);
  }
  if (piVar6 != (int *)0x0) {
    FUN_00102e10(&local_c);
    if (extraout_AL != '\0') {
      return 1;
    }
    FUN_00102e60();
    return 1;
  }
LAB_00101c12:
  if (unaff_EBX != 0) {
    FUN_0010c890();
  }
  return 1;
}
