/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 8334E4A53DF3B86D1770F50161930383116458DDB022156D82CBA1E9B1B4C177
 * Entry: 0x001a0350, Ghidra index: 5323, label: FUN_001a0350
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* Existing zero-arg Ghidra constructor 0x001E0EF0 reads guest ESI.
 * Syntax-only call boundary; Xbox x86 ABI remains UNVERIFIED. */
extern void FUN_001e0ef0(void);
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t PTR_LAB_00398560;
extern uint32_t PTR_LAB_00398580;
uint FUN_001a0350(undefined4 *param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)FUN_002ea01d(0x7c);
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    FUN_001e0ef0();
    puVar1[0xe] = 1;
    *puVar1 = &PTR_LAB_00398580;
    puVar1[5] = &PTR_LAB_00398560;
  }
  *param_1 = puVar1;
  return (puVar1 != (undefined4 *)0x0) - 1 & 0x80004005;
}
