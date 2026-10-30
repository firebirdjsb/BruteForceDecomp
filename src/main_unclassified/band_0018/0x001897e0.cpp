/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 9BDCA84B817D45D7AE11E4D64EA9C80813CDBEBB323A3C144D5F8F7ED71E815A
 * Entry: 0x001897e0, Ghidra index: 5261, label: FUN_001897e0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t PTR_LAB_00397c70;
extern uint32_t PTR_LAB_00397c90;
uint FUN_001897e0(undefined4 *param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)FUN_002ea01d(0x40);
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    FUN_001e0ef0();
    puVar1[0xe] = 1;
    *puVar1 = &PTR_LAB_00397c90;
    puVar1[5] = &PTR_LAB_00397c70;
  }
  *param_1 = puVar1;
  return (puVar1 != (undefined4 *)0x0) - 1 & 0x80004005;
}
