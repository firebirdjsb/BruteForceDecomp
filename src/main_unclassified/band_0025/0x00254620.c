/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 3F83438A0578DC8EE3F29B4ADCD51BFF49F82E901D96BE335BBFDF9E7445BF38
 * Entry: 0x00254620, Ghidra index: 8415, label: FUN_00254620
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t *DAT_004432fc;
extern char s_23_23_ISchema_00406e3c[];
undefined4 FUN_00254620(void)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  int *unaff_EBX;
  int unaff_EDI;
  int *piStack_34;
  int *piStack_30;
  int local_8;
  
  (**(code **)(*unaff_EBX + 0x10))();
  *(undefined4 *)(unaff_EDI + 0x14) = 2;
  piVar1 = (int *)(unaff_EDI + 0x18);
  if (local_8 == 0) {
    if ((int *)*piVar1 != (int *)0x0) {
      (**(code **)(*(int *)*piVar1 + 8))();
      *piVar1 = 0;
    }
  }
  else if ((int *)*piVar1 != (int *)0x0) {
    (**(code **)(*(int *)*piVar1 + 8))();
    *piVar1 = 0;
  }
  piStack_30 = DAT_004432fc;
  piStack_34 = (int *)0x254680;
  (**(code **)(*DAT_004432fc + 0x34))();
  piStack_34 = *(int **)(unaff_EDI + 0x1c);
  piVar2 = (int *)(unaff_EDI + 0x1c);
  if (piStack_34 != (int *)0x0) {
    (**(code **)(*piStack_34 + 8))();
    *piVar2 = 0;
  }
  piVar3 = DAT_004432fc;
  piStack_34 = (int *)0x0;
  (**(code **)(*DAT_004432fc + 0x34))();
  if ((char)unaff_EBX == '\0') {
    (**(code **)(*unaff_EBX + 0x10))();
  }
  piStack_34 = (int *)0x0;
  (**(code **)(*(int *)*piVar1 + 0x10))((int *)*piVar1,s_23_23_ISchema_00406e3c,&piStack_34);
  if (piVar3 == (int *)0x0) {
    (**(code **)(*piVar2 + 0x18))(piVar2);
    (**(code **)(*(int *)*piVar1 + 0xc))((int *)*piVar1);
    FUN_00254530();
    *piStack_30 = unaff_EDI;
  }
  else {
    *piStack_30 = (int)piVar3;
    (**(code **)(*piVar3 + 8))(piVar3);
  }
  return 0;
}
