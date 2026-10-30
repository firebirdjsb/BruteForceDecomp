/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: D43A5DD5B0996D8866C76BDE0CAFEC905D38D8D2EBE1958AEE40FCE3CCBE9F32
 * Entry: 0x00162de0, Ghidra index: 4660, label: FUN_00162de0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t PTR_FUN_0039aa40;
extern uint32_t PTR_LAB_0039aa3c;
extern uint32_t _DAT_00000000;
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int * FUN_00162de0(void)

{
  int *piVar1;
  
  piVar1 = (int *)FUN_002ea01d(0x150);
  if (piVar1 != (int *)0x0) {
    FUN_001548f0();
    *piVar1 = (int)&PTR_FUN_0039aa40;
    piVar1[6] = (int)&PTR_LAB_0039aa3c;
    piVar1[1] = 0x1f;
    (**(code **)(*piVar1 + 4))();
    return piVar1;
  }
  (**(code **)(_DAT_00000000 + 4))();
  return (int *)0x0;
}
