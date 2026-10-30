/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 128423B20596FF933497459548202EC327F3548596C86D4EBFDFDCE9F5EE4972
 * Entry: 0x001a5180, Ghidra index: 5354, label: FUN_001a5180
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t PTR_LAB_00397380;
extern uint32_t PTR_LAB_003973a0;
uint FUN_001a5180(undefined4 *param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)FUN_002ea01d(0x30);
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    puVar1[1] = 0;
    puVar1[2] = 0;
    puVar1[3] = 0;
    puVar1[4] = 0;
    *(undefined1 *)(puVar1 + 6) = 0;
    puVar1[7] = 0;
    puVar1[8] = 0;
    puVar1[9] = 0;
    puVar1[10] = 1;
    *puVar1 = &PTR_LAB_003973a0;
    puVar1[5] = &PTR_LAB_00397380;
  }
  *param_1 = puVar1;
  return (puVar1 != (undefined4 *)0x0) - 1 & 0x80004005;
}
