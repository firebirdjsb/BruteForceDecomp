/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 6367BC0D2BB50BB7A93B6862859921E543FA2F3A8281A92F649AA3CBA21F0E52
 * Entry: 0x002acc30, Ghidra index: 9674, label: FUN_002acc30
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t PTR_LAB_0038f6c0;
int FUN_002acc30(undefined4 *param_1,int *param_2,undefined4 *param_3)

{
  int *piVar1;
  int iVar2;
  
  if ((*param_2 != 8) || (param_2[1] != param_1[2])) {
    *param_3 = 0;
    return -0x7fffbffe;
  }
  piVar1 = (int *)FUN_002ea01d(0x40);
  if (piVar1 == (int *)0x0) {
    *param_3 = 0;
    return -0x7ff8fff2;
  }
  piVar1[1] = 0;
  piVar1[3] = 0;
  piVar1[4] = 0;
  piVar1[5] = 0;
  piVar1[7] = 0;
  piVar1[8] = 0;
  piVar1[9] = 0;
  piVar1[0xe] = 0;
  *piVar1 = (int)&PTR_LAB_0038f6c0;
  piVar1[0xf] = 1;
  iVar2 = (**(code **)(*piVar1 + 0x50))(piVar1,param_2);
  if (iVar2 != 0) {
    FUN_002ad060(1);
    *param_1 = 0;
    return iVar2;
  }
  *param_1 = piVar1;
  return 0;
}
