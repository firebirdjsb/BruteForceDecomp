/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: A40E1500FF050A0E16F039199FBC51D4768BACBB39086872FD2C2C924BCC8C75
 * Entry: 0x001a4a70, Ghidra index: 5348, label: FUN_001a4a70
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
extern uint32_t PTR_LAB_00396f70;
extern uint32_t PTR_LAB_00396f90;
uint FUN_001a4a70(undefined4 *param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)FUN_002ea01d(0x3c);
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    FUN_001e0ef0();
    puVar1[0xe] = 1;
    *puVar1 = &PTR_LAB_00396f90;
    puVar1[5] = &PTR_LAB_00396f70;
  }
  *param_1 = puVar1;
  return (puVar1 != (undefined4 *)0x0) - 1 & 0x80004005;
}
