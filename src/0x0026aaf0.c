/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 42B91F241C76FB6915CA5EF27A9CED6167E33C58DB45C4A9A01158790D92500A
 * Entry: 0x0026aaf0, Ghidra index: 8754, label: FUN_0026aaf0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t PTR_LAB_00392788;
bool FUN_0026aaf0(undefined4 param_1,undefined4 param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)FUN_002ea01d(0x18);
  if (puVar1 != (undefined4 *)0x0) {
    puVar1[1] = 0;
    puVar1[5] = param_2;
    puVar1[4] = param_1;
    puVar1[3] = 1;
    *puVar1 = &PTR_LAB_00392788;
    *param_3 = puVar1;
    return puVar1 != (undefined4 *)0x0;
  }
  *param_3 = 0;
  return false;
}
