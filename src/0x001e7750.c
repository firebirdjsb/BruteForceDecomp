/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: DCFB187F83F8658E71A017A91851C7628BA6FF91A1A62A015CDDC827B728EED9
 * Entry: 0x001e7750, Ghidra index: 6813, label: FUN_001e7750
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t PTR_FUN_00396cd4;
undefined4 * FUN_001e7750(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)FUN_002ea01d(0x40);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = &PTR_FUN_00396cd4;
    puVar1[3] = 0;
    puVar1[2] = 0;
    puVar1[1] = 0;
    puVar1[6] = 0;
    puVar1[5] = 0;
    puVar1[4] = 0;
    puVar1[9] = 0;
    puVar1[8] = 0;
    puVar1[7] = 0;
    puVar1[0xc] = 0;
    puVar1[0xb] = 0;
    puVar1[10] = 0;
    *(byte *)(puVar1 + 0xd) = *(byte *)(puVar1 + 0xd) & 0xe0;
    puVar1[0xe] = 0x3f800000;
    puVar1[0xf] = 0x3f800000;
    return puVar1;
  }
  return (undefined4 *)0x0;
}
