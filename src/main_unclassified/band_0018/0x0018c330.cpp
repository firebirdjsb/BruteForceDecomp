/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 7BA18498E80686D76E0746757CE6070CAD297CAABDB71A63C8AC5D957ED4B7B7
 * Entry: 0x0018c330, Ghidra index: 5276, label: FUN_0018c330
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
extern uint32_t PTR_LAB_00397790;
extern uint32_t PTR_LAB_003977b0;
uint FUN_0018c330(undefined4 *param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)FUN_002ea01d(0x40);
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    FUN_001e0ef0();
    puVar1[0xe] = 1;
    *puVar1 = &PTR_LAB_003977b0;
    puVar1[5] = &PTR_LAB_00397790;
  }
  *param_1 = puVar1;
  return (puVar1 != (undefined4 *)0x0) - 1 & 0x80004005;
}
