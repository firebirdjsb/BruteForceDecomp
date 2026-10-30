/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: E25408D52C8139E26A79E66B2106380EF49CB9525DADBD41EE8B62E1C9BFE370
 * Entry: 0x002acce0, Ghidra index: 9675, label: FUN_002acce0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t PTR_LAB_0038f718;
int FUN_002acce0(undefined4 *param_1,int *param_2,undefined4 *param_3)

{
  int *piVar1;
  int iVar2;
  undefined4 *unaff_retaddr;
  
  if ((*param_2 != 8) || (param_2[1] != param_1[2])) {
    *param_3 = 0;
    return -0x7fffbffe;
  }
  piVar1 = (int *)FUN_002ea01d(0x20);
  if (piVar1 == (int *)0x0) {
    *param_3 = 0;
    return -0x7ff8fff2;
  }
  piVar1[2] = 0;
  piVar1[3] = 0;
  piVar1[4] = 0;
  piVar1[6] = 0;
  *(undefined2 *)(piVar1 + 7) = 0;
  piVar1[5] = 0;
  *piVar1 = (int)&PTR_LAB_0038f718;
  *(undefined2 *)((int)piVar1 + 0x1e) = 1;
  iVar2 = (**(code **)(*piVar1 + 0x48))(piVar1,param_2);
  if (iVar2 != 0) {
    (**(code **)(*piVar1 + 0x44))(1);
    *unaff_retaddr = 0;
    return iVar2;
  }
  *param_1 = piVar1;
  return 0;
}
