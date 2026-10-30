/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: BA15FF977B29BD35FF1B4FF26FE60F7B0B7C979290E8F07FFC27F16D3BBDAD1E
 * Entry: 0x00192710, Ghidra index: 5300, label: FUN_00192710
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
extern uint32_t PTR_LAB_003989d8;
extern uint32_t PTR_LAB_003989f8;
uint FUN_00192710(undefined4 *param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)FUN_002ea01d(0x44);
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    FUN_001e0ef0();
    puVar1[0xe] = 1;
    *puVar1 = &PTR_LAB_003989f8;
    puVar1[5] = &PTR_LAB_003989d8;
  }
  *param_1 = puVar1;
  return (puVar1 != (undefined4 *)0x0) - 1 & 0x80004005;
}
