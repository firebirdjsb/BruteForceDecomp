/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: C6ECA409510CE59DF32EC292FD8E18C462EDC8D3DB6FEB35C150029282347BD3
 * Entry: 0x00264d80, Ghidra index: 8715, label: FUN_00264d80
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t PTR_LAB_00392930;
int FUN_00264d80(undefined4 *param_1,int *param_2,undefined4 *param_3)

{
  int *piVar1;
  int iVar2;
  undefined4 *unaff_retaddr;
  
  if ((*param_2 != 8) || (param_2[1] != param_1[2])) {
    *param_3 = 0;
    return -0x7fffbffe;
  }
  piVar1 = (int *)FUN_002ea01d(0x54);
  if (piVar1 == (int *)0x0) {
    *param_3 = 0;
    return -0x7ff8fff2;
  }
  *(undefined1 *)(piVar1 + 1) = 0;
  *(undefined1 *)((int)piVar1 + 5) = 0;
  piVar1[2] = 0;
  piVar1[0x10] = 0;
  piVar1[0x12] = 0;
  *piVar1 = (int)&PTR_LAB_00392930;
  piVar1[0x14] = 1;
  iVar2 = (**(code **)(*piVar1 + 0x38))(piVar1,param_2);
  if (iVar2 != 0) {
    (**(code **)(*piVar1 + 0x3c))(1);
    *unaff_retaddr = 0;
    return iVar2;
  }
  *param_1 = piVar1;
  return 0;
}
