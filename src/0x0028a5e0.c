/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: CE8029366BC240CAF469CC3236C81E45A6AF4F2DF312200E2E59909CA50DFF3C
 * Entry: 0x0028a5e0, Ghidra index: 9164, label: FUN_0028a5e0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_00404b30;
extern uint32_t *DAT_00469888;
extern char s__return__00404acc[];
void FUN_0028a5e0(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int in_EAX;
  int unaff_EBX;
  int iVar5;
  int iVar6;
  char *pcVar7;
  undefined4 uVar8;
  
  piVar4 = DAT_00469888;
  iVar1 = DAT_00469888[3];
  iVar2 = DAT_00469888[4];
  iVar3 = DAT_00469888[5];
  iVar5 = *DAT_00469888 - DAT_00469888[1] >> 4;
  DAT_00469888[3] = iVar5;
  piVar4[4] = iVar5;
  piVar4[5] = 0;
  if (param_1 == 0) {
    if (unaff_EBX == 0) {
      uVar8 = 0xffffffff;
      pcVar7 = &DAT_00404b30;
    }
    else {
      uVar8 = *(undefined4 *)(unaff_EBX + 0x14);
      pcVar7 = (char *)(*(int *)(unaff_EBX + 0x18) + 0x28);
    }
    iVar6 = (in_EAX * 0x10 + -0x10 >> 4) + 1;
  }
  else {
    uVar8 = 0;
    pcVar7 = s__return__00404acc;
    iVar6 = 0;
  }
  (*(code *)piVar4[0xe])(iVar6,pcVar7,uVar8);
  piVar4 = DAT_00469888;
  *DAT_00469888 = iVar5 * 0x10 + DAT_00469888[1];
  piVar4[3] = iVar1;
  piVar4[4] = iVar2;
  piVar4[5] = iVar3;
  return;
}
