/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: C2EC3C8E67251E6A7C18EC65B79ACE041F25956F45E580856EC4D63D78735B14
 * Entry: 0x0003c000, Ghidra index: 425, label: FUN_0003c000
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern void FUN_0003c300(undefined4 *param_1,char param_2,undefined4 param_3);
extern void FUN_0003c5c0(void);

extern uint32_t DAT_0046d064;
void FUN_0003c000(int param_1,int param_2)

{
  int *piVar1;
  undefined4 uVar2;
  int *piVar3;
  undefined4 *puVar4;
  uint *puVar5;
  uint *puVar6;
  int *piVar7;
  undefined4 *unaff_EDI;
  bool bVar8;
  
  piVar1 = *(int **)(param_1 + 4);
  bVar8 = true;
  piVar7 = piVar1;
  if (*(char *)(piVar1[1] + 0xa9) == '\0') {
    piVar3 = (int *)piVar1[1];
    do {
      piVar7 = piVar3;
      puVar6 = (uint *)(*(int *)(param_2 + 4) + 4);
      if (*(int *)(param_2 + 4) == 0) {
        puVar6 = &DAT_0046d064;
      }
      if (piVar7[4] == 0) {
        puVar5 = &DAT_0046d064;
      }
      else {
        puVar5 = (uint *)(piVar7[4] + 4);
      }
      bVar8 = *puVar6 < *puVar5;
      if (bVar8) {
        piVar3 = (int *)*piVar7;
      }
      else {
        piVar3 = (int *)piVar7[2];
      }
    } while (*(char *)((int)piVar3 + 0xa9) == '\0');
  }
  if (bVar8) {
    if (piVar7 == (int *)*piVar1) {
      puVar4 = (undefined4 *)FUN_0003c300(&param_2,1,param_2);
      uVar2 = *puVar4;
      *(undefined1 *)(unaff_EDI + 1) = 1;
      *unaff_EDI = uVar2;
      return;
    }
    FUN_0003c5c0();
  }
  puVar6 = (uint *)(piVar7[4] + 4);
  if (piVar7[4] == 0) {
    puVar6 = &DAT_0046d064;
  }
  if (*(int *)(param_2 + 4) == 0) {
    puVar5 = &DAT_0046d064;
  }
  else {
    puVar5 = (uint *)(*(int *)(param_2 + 4) + 4);
  }
  if (*puVar6 < *puVar5) {
    puVar4 = (undefined4 *)FUN_0003c300(&param_2,bVar8,param_2);
    *unaff_EDI = *puVar4;
    *(undefined1 *)(unaff_EDI + 1) = 1;
    return;
  }
  *(undefined1 *)(unaff_EDI + 1) = 0;
  *unaff_EDI = piVar7;
  return;
}
