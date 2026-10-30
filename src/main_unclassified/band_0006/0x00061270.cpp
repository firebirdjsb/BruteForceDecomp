/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 6D23301175D7F9BF0E2CD7EC89474AB80D70200722212D11F6FF35C00036BDE7
 * Entry: 0x00061270, Ghidra index: 1017, label: FUN_00061270
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t FUN_002ea01d(uint32_t guest_size);
extern void FUN_0005f710(void);

extern uint32_t PTR_LAB_003a3a98;
int FUN_00061270(undefined4 *param_1,int *param_2,undefined4 *param_3)

{
  int *piVar1;
  int iVar2;
  undefined4 *unaff_retaddr;
  
  if ((*param_2 != 8) || (param_2[1] != param_1[2])) {
    *param_3 = 0;
    return -0x7fffbffe;
  }
  piVar1 = (int *)FUN_002ea01d(0xf8);
  if (piVar1 == (int *)0x0) {
    *param_3 = 0;
    return -0x7ff8fff2;
  }
  FUN_0005f710();
  *piVar1 = (int)&PTR_LAB_003a3a98;
  piVar1[0x3d] = 1;
  iVar2 = (**(code **)(*piVar1 + 0xe8))(piVar1,param_2);
  if (iVar2 != 0) {
    (**(code **)(*piVar1 + 0xe0))(1);
    *unaff_retaddr = 0;
    return iVar2;
  }
  *param_1 = piVar1;
  return 0;
}
