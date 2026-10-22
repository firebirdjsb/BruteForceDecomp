/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 5B4225A6F5B3E3A059229EBEEB16B7DC26368E4BA5DCA309D7DE92FB674F804A
 * Entry: 0x0029aa10, Ghidra index: 9413, label: FUN_0029aa10
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_004a5b2c;
void FUN_0029aa10(void)

{
  int *piVar1;
  int iVar2;
  int in_EAX;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  
  piVar1 = *(int **)(in_EAX + 8);
  iVar2 = piVar1[5];
  FUN_0029a560();
  iVar3 = piVar1[5] - iVar2;
  if (iVar3 < 1) {
    if (-1 < iVar3) goto LAB_0029aa56;
    iVar5 = -1 - iVar3;
    uVar6 = 4;
  }
  else {
    uVar6 = 5;
    iVar5 = iVar3;
  }
  FUN_00299580(uVar6,iVar5,-iVar3);
LAB_0029aa56:
  iVar3 = piVar1[5];
  while (iVar2 < iVar3) {
    iVar3 = piVar1[8];
    if (piVar1[7] != -1) {
      iVar5 = *piVar1;
      iVar4 = FUN_00294b10(8,&DAT_004a5b2c);
      *(int *)(iVar5 + 0x1c) = iVar4;
      *(undefined4 *)(iVar4 + piVar1[7] * 8) = 0;
      *(int *)(*(int *)(iVar5 + 0x1c) + 4 + piVar1[7] * 8) = iVar3;
      piVar1[7] = piVar1[7] + 1;
    }
    iVar3 = piVar1[5] + -1;
    piVar1[5] = iVar3;
  }
  return;
}
