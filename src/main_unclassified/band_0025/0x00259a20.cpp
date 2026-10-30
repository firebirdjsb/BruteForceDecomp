/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 865332094DD16ABB6411D099D15AEBFCDB76C8116C81C1BE7F3E40A5D2FA1581
 * Entry: 0x00259a20, Ghidra index: 8509, label: FUN_00259a20
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t PTR_LAB_003934c8;
undefined4 FUN_00259a20(undefined2 param_1,undefined4 *param_2,undefined4 *param_3)

{
  int in_EAX;
  int iVar1;
  int *piVar2;
  
  iVar1 = FUN_00259e80();
  if (iVar1 == 0) {
    return 0x80004005;
  }
  if (in_EAX == 0) {
    in_EAX = *(int *)(iVar1 + 4);
  }
  piVar2 = (int *)FUN_00259510();
  if (piVar2 == (int *)0x0) {
    piVar2 = (int *)FUN_002ea01d(0x20);
    if (piVar2 == (int *)0x0) {
      piVar2 = (int *)0x0;
    }
    else {
      FUN_0025a860();
      *piVar2 = (int)&PTR_LAB_003934c8;
      *(undefined2 *)((int)piVar2 + 0x1e) = 1;
    }
    *(undefined2 *)(piVar2 + 7) = param_1;
    FUN_002593b0(in_EAX,*param_2);
    (**(code **)(*piVar2 + 8))(piVar2);
  }
  if (param_3 != (undefined4 *)0x0) {
    (**(code **)(*piVar2 + 4))(piVar2);
    *param_3 = piVar2;
  }
  return 0;
}
