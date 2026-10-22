/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 09262F274076EFDC7F04B5D8C10F29184A99A0D59BBF2990AD1E7980564F4154
 * Entry: 0x0018b370, Ghidra index: 5268, label: FUN_0018b370
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t PTR_LAB_00397b38;
extern uint32_t PTR_LAB_00397b58;
uint FUN_0018b370(undefined4 *param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)FUN_002ea01d(0x44);
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    FUN_001e0ef0();
    puVar1[0xe] = 1;
    *puVar1 = &PTR_LAB_00397b58;
    puVar1[5] = &PTR_LAB_00397b38;
  }
  *param_1 = puVar1;
  return (puVar1 != (undefined4 *)0x0) - 1 & 0x80004005;
}
