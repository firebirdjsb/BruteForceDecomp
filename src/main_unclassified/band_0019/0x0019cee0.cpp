/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 10CC53B3C5A637CBF2611BDB323EF15B5B9C2E142954AB09E769EFC067544F7E
 * Entry: 0x0019cee0, Ghidra index: 5321, label: FUN_0019cee0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t PTR_LAB_00398f20;
extern uint32_t PTR_LAB_00398f40;
uint FUN_0019cee0(undefined4 *param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)FUN_002ea01d(0x60);
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    FUN_001e0ef0();
    puVar1[0xe] = 1;
    *puVar1 = &PTR_LAB_00398f40;
    puVar1[5] = &PTR_LAB_00398f20;
  }
  *param_1 = puVar1;
  return (puVar1 != (undefined4 *)0x0) - 1 & 0x80004005;
}
