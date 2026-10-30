/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 40597CEECECF5242FEA50DEBD69772C15F22364527F497F83AF58F6076244ECE
 * Entry: 0x0018e240, Ghidra index: 5289, label: FUN_0018e240
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
extern uint32_t PTR_LAB_00399a18;
extern uint32_t PTR_LAB_00399a38;
uint FUN_0018e240(undefined4 *param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)FUN_002ea01d(0x3c);
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    FUN_001e0ef0();
    puVar1[0xe] = 1;
    *puVar1 = &PTR_LAB_00399a38;
    puVar1[5] = &PTR_LAB_00399a18;
  }
  *param_1 = puVar1;
  return (puVar1 != (undefined4 *)0x0) - 1 & 0x80004005;
}
