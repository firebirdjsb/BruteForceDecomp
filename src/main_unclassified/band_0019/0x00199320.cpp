/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: AE42203308518FDBFCD28823FB2937FE500BCFB13FEA7C8CDC3C93CF78CE0D62
 * Entry: 0x00199320, Ghidra index: 5312, label: FUN_00199320
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t PTR_LAB_00396ea0;
extern uint32_t PTR_LAB_00396ec0;
uint FUN_00199320(undefined4 *param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)FUN_002ea01d(0x3c);
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    FUN_001e0ef0();
    puVar1[0xe] = 1;
    *puVar1 = &PTR_LAB_00396ec0;
    puVar1[5] = &PTR_LAB_00396ea0;
  }
  *param_1 = puVar1;
  return (puVar1 != (undefined4 *)0x0) - 1 & 0x80004005;
}
