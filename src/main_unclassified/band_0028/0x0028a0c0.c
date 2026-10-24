/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 803C0F971821BFD18204820DCBE4FCB024F148D0F1A122A85001E3A44F1AA173
 * Entry: 0x0028a0c0, Ghidra index: 9154, label: FUN_0028a0c0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t *DAT_00469888;
extern uint32_t DAT_004a5b2c;
extern char s_global_00404b28[];
extern char s_tag_method_00404b1c[];
char * FUN_0028a0c0(int *param_1)

{
  int *piVar1;
  int *piVar2;
  int in_EAX;
  int iVar3;
  int iVar4;
  int *piVar5;
  char *pcVar6;
  
  piVar2 = DAT_00469888;
  piVar5 = (int *)(DAT_00469888[1] + -0x10 + in_EAX * 0x10);
  piVar1 = (int *)*DAT_00469888;
  piVar1[2] = piVar5[2];
  piVar1[3] = piVar5[3];
  iVar3 = *piVar5;
  if (iVar3 == -10) {
    iVar3 = -5;
  }
  else if (iVar3 == -9) {
    iVar3 = -4;
  }
  else if (iVar3 == -8) {
    iVar3 = -7;
  }
  *piVar1 = iVar3;
  piVar5 = (int *)piVar2[0x16];
  if (piVar5 != (int *)0x0) {
    iVar3 = *(int *)*piVar2;
    do {
      if (piVar5[4] == iVar3) {
        iVar4 = FUN_002955a0();
        if (iVar4 != 0) {
          piVar5 = piVar5 + 10;
          goto LAB_0028a134;
        }
      }
      piVar5 = (int *)*piVar5;
    } while (piVar5 != (int *)0x0);
  }
  piVar5 = (int *)0x0;
LAB_0028a134:
  *param_1 = (int)piVar5;
  if (piVar5 != (int *)0x0) {
    return s_global_00404b28;
  }
  iVar3 = FUN_00295180((uintptr_t)0x0028a0a0U);
  *param_1 = iVar3;
  pcVar6 = s_tag_method_00404b1c;
  if (iVar3 == 0) {
    pcVar6 = &DAT_004a5b2c;
  }
  return pcVar6;
}
