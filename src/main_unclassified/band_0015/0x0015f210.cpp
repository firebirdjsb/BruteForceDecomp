/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 5602F41DFD297AE4940A2F436026C07DB3F546B0730DF008EC8A467ABC846A52
 * Entry: 0x0015f210, Ghidra index: 4573, label: FUN_0015f210
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* Original Xbox image mapped address 0x0039ac10; address-only declaration.
 * Linked definition, actual type and semantic role remain unverified. */
extern unsigned char LAB_0039ac10;
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t PTR_LAB_0039ac0c;
extern uint32_t _DAT_00000000;
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int * FUN_0015f210(void)

{
  int *piVar1;
  
  piVar1 = (int *)FUN_002ea01d(0x150);
  if (piVar1 != (int *)0x0) {
    FUN_001548f0();
    *piVar1 = (int)&LAB_0039ac10;
    piVar1[6] = (int)&PTR_LAB_0039ac0c;
    piVar1[1] = 0x1a;
    (**(code **)(*piVar1 + 4))();
    return piVar1;
  }
  (**(code **)(_DAT_00000000 + 4))();
  return (int *)0x0;
}
