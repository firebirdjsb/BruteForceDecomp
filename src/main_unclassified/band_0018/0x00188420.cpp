/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: F3F9335BDFB1FFD9B56CAC50748D701F1A162DF684F77CD20BA5B1CEBF6633CD
 * Entry: 0x00188420, Ghidra index: 5254, label: FUN_00188420
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* Callee Ghidra draft 0x001E0EF0 declares void() with incoming ESI.
 * Explicit call arity is matched; guest-register ABI remains UNVERIFIED. */
extern void FUN_001e0ef0(void);
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t PTR_LAB_00397d40;
extern uint32_t PTR_LAB_00397d60;
uint FUN_00188420(undefined4 *param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)FUN_002ea01d(0x3c);
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    FUN_001e0ef0();
    puVar1[0xe] = 1;
    *puVar1 = &PTR_LAB_00397d60;
    puVar1[5] = &PTR_LAB_00397d40;
  }
  *param_1 = puVar1;
  return (puVar1 != (undefined4 *)0x0) - 1 & 0x80004005;
}
