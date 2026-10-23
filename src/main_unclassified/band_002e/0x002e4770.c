/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: A581455A92E6DE7B8EA688AB0CAA76EBF37B81356D76E562D41DC6EBE697EDB6
 * Entry: 0x002e4770, Ghidra index: 10451, label: FUN_002e4770
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t *DAT_0040e868;
extern uint32_t *DAT_0040e86c;
undefined4 FUN_002e4770(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int *piVar3;
  int *in_ECX;
  int iVar4;
  uint uVar5;
  int unaff_EBX;
  char *pcVar6;
  int *piVar7;
  bool bVar8;
  uint unaff_retaddr;
  
  iVar4 = *in_ECX;
  puVar1 = (undefined4 *)(**(code **)(iVar4 + 4))(param_1);
  iVar2 = (**(code **)(iVar4 + 0xc))(param_1,*puVar1);
  iVar4 = param_1;
  if ((in_ECX[param_1 * 4 + 0x12] == iVar2) && ((char *)in_ECX[(param_1 + 5) * 4] != (char *)0x0)) {
    iVar4 = in_ECX[param_1 * 4 + 0x15];
    bVar8 = true;
    pcVar6 = (char *)in_ECX[(param_1 + 5) * 4];
    piVar3 = in_ECX;
    do {
      if (iVar4 == 0) break;
      iVar4 = iVar4 + -1;
      bVar8 = *pcVar6 == (char)*piVar3;
      pcVar6 = pcVar6 + 1;
      piVar3 = (int *)((int)piVar3 + 1);
    } while (bVar8);
    iVar4 = unaff_EBX;
    if (bVar8) {
      return 0;
    }
  }
  if (in_ECX[(iVar4 + 5) * 4] != 0) {
    (*DAT_0040e868)(in_ECX[(iVar4 + 5) * 4]);
  }
  piVar3 = (int *)(*DAT_0040e86c)(unaff_retaddr);
  in_ECX[(iVar4 + 5) * 4] = (int)piVar3;
  if (piVar3 != (int *)0x0) {
    in_ECX[param_1 * 4 + 0x12] = iVar2;
    piVar7 = in_ECX;
    for (uVar5 = unaff_retaddr >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
      *piVar3 = *piVar7;
      piVar7 = piVar7 + 1;
      piVar3 = piVar3 + 1;
    }
    for (uVar5 = unaff_retaddr & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
      *(char *)piVar3 = (char)*piVar7;
      piVar7 = (int *)((int)piVar7 + 1);
      piVar3 = (int *)((int)piVar3 + 1);
    }
    in_ECX[param_1 * 4 + 0x15] = unaff_retaddr;
    in_ECX[param_1 * 4 + 0x13] = 1;
    *(char *)(in_ECX + 0x92) = '\x01';
    return 0;
  }
  return 0x8007000e;
}
