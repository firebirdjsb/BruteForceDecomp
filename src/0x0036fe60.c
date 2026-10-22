/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 7388574D2B439F1641DF0F10D00ED7578AFC4592E13822EDAE845B90E58DFC70
 * Entry: 0x0036fe60, Ghidra index: 13335, label: FUN_0036fe60
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_0037bb28;
void FUN_0036fe60(undefined4 param_1,int param_2)

{
  int *in_EAX;
  int in_ECX;
  uint uVar1;
  int iVar2;
  int in_EDX;
  int *piVar3;
  uint uVar4;
  uint uVar5;
  int *piVar6;
  int *piVar7;
  int *piVar8;
  
  iVar2 = DAT_0037bb28;
  uVar4 = param_2 * 4;
  piVar6 = (int *)(uVar4 + 0xf >> 4);
  piVar3 = (int *)(*(int *)(in_ECX + 4) + in_EDX + 8);
  piVar8 = piVar3;
  if (DAT_0037bb28 != 0) {
    piVar3 = (int *)(*(int *)(DAT_0037bb28 + 4) + *(int *)(DAT_0037bb28 + 0x10));
    uVar5 = *(int *)(DAT_0037bb28 + 0x10) + (int)(piVar6 + param_2) * 4 + 8;
    *(uint *)(DAT_0037bb28 + 0x10) = uVar5;
    if (*(uint *)(iVar2 + 0x14) < uVar5) {
      return;
    }
    *piVar3 = (int)(piVar6 + param_2) * 4;
    piVar3[1] = in_EDX + 8;
    piVar3 = piVar3 + 2;
    piVar8 = piVar3;
  }
  while (piVar8 != (int *)0x0) {
    uVar5 = uVar4;
    if (0xf < uVar4) {
      uVar5 = 0x10;
    }
    *piVar3 = uVar5 * 0x40000 + 0xb80;
    uVar4 = uVar4 - uVar5;
    piVar7 = in_EAX;
    piVar8 = piVar3;
    for (uVar1 = uVar5 & 0x3fffffff; piVar8 = piVar8 + 1, uVar1 != 0; uVar1 = uVar1 - 1) {
      *piVar8 = *piVar7;
      piVar7 = piVar7 + 1;
    }
    for (iVar2 = 0; iVar2 != 0; iVar2 = iVar2 + -1) {
      *(char *)piVar8 = (char)*piVar7;
      piVar7 = (int *)((int)piVar7 + 1);
      piVar8 = (int *)((int)piVar8 + 1);
    }
    in_EAX = in_EAX + uVar5;
    piVar3 = piVar3 + uVar5 + 1;
    piVar6 = (int *)((int)piVar6 + -1);
    piVar8 = piVar6;
  }
  return;
}
