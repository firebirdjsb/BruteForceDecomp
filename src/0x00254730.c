/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 9976DF2B974AD7DA5A57E00A1D6650E4EEB5B68D1036E966A5C9C74AABF202E4
 * Entry: 0x00254730, Ghidra index: 8416, label: FUN_00254730
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t PTR_LAB_00394160;
undefined4 FUN_00254730(undefined4 *param_1,int *param_2,undefined4 *param_3)

{
  int *piVar1;
  int iVar2;
  
  if ((*param_2 != 8) || (param_2[1] != param_1[2])) {
    *param_3 = 0;
    return 0x80004002;
  }
  piVar1 = (int *)FUN_002ea01d(0x28);
  if (piVar1 == (int *)0x0) {
    *param_3 = 0;
    return 0x8007000e;
  }
  piVar1[1] = 0;
  piVar1[2] = 0;
  piVar1[3] = 0;
  piVar1[4] = 0;
  piVar1[5] = 0;
  piVar1[6] = 0;
  piVar1[7] = 0;
  piVar1[8] = 0;
  *piVar1 = (int)&PTR_LAB_00394160;
  piVar1[9] = 1;
  iVar2 = (**(code **)(*piVar1 + 0x60))(piVar1,param_2);
  if (iVar2 != 0) {
    FUN_00254110();
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0(piVar1);
  }
  *param_1 = piVar1;
  return 0;
}
