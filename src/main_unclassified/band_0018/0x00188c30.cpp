/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: AA6815203D9C850C855521FA1F681FDB2F3A71BCBFA2160AAA85FD0BA6E848A7
 * Entry: 0x00188c30, Ghidra index: 5255, label: FUN_00188c30
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t PTR_LAB_00397248;
extern uint32_t PTR_LAB_00397268;
uint FUN_00188c30(undefined4 *param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)FUN_002ea01d(0x3c);
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    FUN_001e0ef0();
    puVar1[0xe] = 1;
    *puVar1 = &PTR_LAB_00397268;
    puVar1[5] = &PTR_LAB_00397248;
  }
  *param_1 = puVar1;
  return (puVar1 != (undefined4 *)0x0) - 1 & 0x80004005;
}
