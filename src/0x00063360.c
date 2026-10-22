/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: A49D708E4218D327CABA775D25DE8FB80286BBA8CE82514E937D0C1F5B52239E
 * Entry: 0x00063360, Ghidra index: 1074, label: FUN_00063360
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t PTR_LAB_003a36e8;
void FUN_00063360(undefined4 param_1)

{
  int *piVar1;
  int *piVar2;
  int *local_4;
  
  piVar2 = (int *)FUN_002ea01d(0x1c);
  if (piVar2 == (int *)0x0) {
    piVar2 = (int *)0x0;
  }
  else {
    piVar2[1] = 4;
    piVar2[3] = 0;
    piVar2[4] = 0;
    piVar2[5] = 0;
    *piVar2 = (int)&PTR_LAB_003a36e8;
    piVar2[6] = 1;
  }
  local_4 = (int *)0x0;
  FUN_00063650(param_1,&local_4);
  piVar1 = local_4;
  (**(code **)(*piVar2 + 0x14))(piVar2,0,local_4);
  *local_4 = (int)piVar2;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  return;
}
