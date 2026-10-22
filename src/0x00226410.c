/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: E738ABA3F4FE2C94598566B2AE89F412B28BD4172280DF8AB69878C67B0913DF
 * Entry: 0x00226410, Ghidra index: 7645, label: FUN_00226410
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t PTR_FUN_00394824;
extern uint32_t PTR_LAB_0039afb0;
extern uint32_t _DAT_00000000;
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int * FUN_00226410(void)

{
  int *piVar1;
  
  piVar1 = (int *)FUN_002ea01d(0x154);
  if (piVar1 != (int *)0x0) {
    FUN_001548f0();
    *piVar1 = (int)&PTR_FUN_00394824;
    piVar1[6] = (int)&PTR_LAB_0039afb0;
    piVar1[1] = 0x15;
    piVar1[0x54] = 0x3f800000;
    (**(code **)(*piVar1 + 4))();
    return piVar1;
  }
  (**(code **)(_DAT_00000000 + 4))();
  return (int *)0x0;
}
