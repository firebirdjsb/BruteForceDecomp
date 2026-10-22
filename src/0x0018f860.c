/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 09B7233F29F1EE2CC17AC9FC5F8438515F3A0494CE298ACA1ACC43E1C37DDC24
 * Entry: 0x0018f860, Ghidra index: 5295, label: FUN_0018f860
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t PTR_LAB_00398e50;
extern uint32_t PTR_LAB_00398e70;
uint FUN_0018f860(undefined4 *param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)FUN_002ea01d(0x44);
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    FUN_001e0ef0();
    puVar1[0xe] = 1;
    *puVar1 = &PTR_LAB_00398e70;
    puVar1[5] = &PTR_LAB_00398e50;
  }
  *param_1 = puVar1;
  return (puVar1 != (undefined4 *)0x0) - 1 & 0x80004005;
}
