/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 2DD7EB6956DE681C8E43274C39D6043165F2973BD6B5C65303CFBD8669D3EABE
 * Entry: 0x0018bb90, Ghidra index: 5271, label: FUN_0018bb90
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
extern uint32_t PTR_LAB_003985c8;
extern uint32_t PTR_LAB_003985e8;
uint FUN_0018bb90(undefined4 *param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)FUN_002ea01d(0x44);
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    FUN_001e0ef0();
    puVar1[0xe] = 1;
    *puVar1 = &PTR_LAB_003985e8;
    puVar1[5] = &PTR_LAB_003985c8;
  }
  *param_1 = puVar1;
  return (puVar1 != (undefined4 *)0x0) - 1 & 0x80004005;
}
