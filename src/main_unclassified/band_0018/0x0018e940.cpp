/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 5754629C11C225F01FCB1562EAE912B5A83968F0022115F22B367BEB1490B3ED
 * Entry: 0x0018e940, Ghidra index: 5293, label: FUN_0018e940
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* Source-level zero-explicit-argument 0x001E0EF0 constructor.
 * Original guest ESI input, 32-bit object ABI remain UNVERIFIED. */
extern void FUN_001e0ef0(void);
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t PTR_LAB_00398d80;
extern uint32_t PTR_LAB_00398da0;
uint FUN_0018e940(undefined4 *param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)FUN_002ea01d(0x3c);
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    FUN_001e0ef0();
    puVar1[0xe] = 1;
    *puVar1 = &PTR_LAB_00398da0;
    puVar1[5] = &PTR_LAB_00398d80;
  }
  *param_1 = puVar1;
  return (puVar1 != (undefined4 *)0x0) - 1 & 0x80004005;
}
