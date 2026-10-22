/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: F035B9CC68E7FBB9D4F04F4488A217CFC649DC2F5CB1FC585374543C349FDD50
 * Entry: 0x00295240, Ghidra index: 9312, label: FUN_00295240
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_00404a84;
extern uint32_t *DAT_00469888;
extern char s_bad_argument___d_to_function_____004046e0[];
extern char s_bad_argument___d_to_function_____00404710[];
void FUN_00295240(void)

{
  int iVar1;
  int in_EAX;
  int iVar2;
  int *piVar3;
  int unaff_EBX;
  int iVar4;
  int iVar5;
  undefined *local_4;
  
  iVar2 = (*DAT_00469888 - DAT_00469888[1]) + -0x10 >> 4;
  if (-1 < iVar2) {
    piVar3 = (int *)(iVar2 * 0x10 + DAT_00469888[1]);
    iVar4 = 0;
    do {
      iVar1 = *piVar3;
      if ((((iVar1 == -8) || (iVar1 == -9)) || (iVar5 = iVar4, iVar1 == -10)) &&
         (iVar5 = iVar4 + -1, iVar4 == 0)) {
        iVar2 = ((iVar2 << 4) >> 4) + 1;
        goto LAB_00295286;
      }
      iVar2 = iVar2 + -1;
      piVar3 = piVar3 + -4;
      iVar4 = iVar5;
    } while (-1 < iVar2);
  }
  iVar2 = 0;
LAB_00295286:
  FUN_0028a0c0(&local_4);
  if ((((iVar2 == 0) ||
       (piVar3 = (int *)(DAT_00469888[1] + -0x10 + iVar2 * 0x10), piVar3 == (int *)0x0)) ||
      ((iVar2 = *piVar3, iVar2 == -10 || (iVar2 == -9)))) || ((iVar2 != -8 && (iVar2 != -7)))) {
    iVar2 = 0;
  }
  else {
    iVar2 = *(int *)(piVar3[2] + 8);
  }
  if (local_4 == (undefined *)0x0) {
    local_4 = &DAT_00404a84;
  }
  if (unaff_EBX == 0) {
    FUN_00295370(s_bad_argument___d_to_function_____00404710,in_EAX - iVar2,local_4);
    return;
  }
  FUN_00295370(s_bad_argument___d_to_function_____004046e0,in_EAX - iVar2,local_4);
  return;
}
