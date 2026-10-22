/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: D97CA860A650CEE13220182A8B987CAAA17532E90C4032A5CF74A3F7B535E02E
 * Entry: 0x00181560, Ghidra index: 5156, label: FUN_00181560
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_00400710;
extern uint32_t PTR_LAB_00040000_1_00400738;
extern uint32_t PTR_LAB_0040074c;
undefined ** FUN_00181560(void)

{
  undefined1 in_AL;
  
  switch(in_AL) {
  case 1:
    return (undefined **)&DAT_00400710;
  case 2:
    return (undefined **)&LAB_00400724;
  default:
    return (undefined **)0x0;
  case 4:
    return &PTR_LAB_00040000_1_00400738;
  case 6:
    return &PTR_LAB_0040074c;
  }
}
