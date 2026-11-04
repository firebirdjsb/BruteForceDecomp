/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 465B6A409B565D69EC48545F4E3DB52F3A56674FA808FD26C1C0997040C1529D
 * Entry: 0x001e7800, Ghidra index: 6815, label: FUN_001e7800
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* Original XBE 0x001E7815: direct CALL 0x001E7880; ESI is loaded from
 * guest [0x00469948] and the callee reads [ESI+4], returning with RET.
 * Source-matched declaration only: guest register ABI_UNVERIFIED. */
extern void FUN_001e7880(void);
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_00469948;
void FUN_001e7800(void)

{
  int iVar1;
  
  iVar1 = *(int *)(DAT_00469948 + 0xc) + 1;
  *(int *)(DAT_00469948 + 0xc) = iVar1;
  if (iVar1 == 1) {
    FUN_001e7880();
  }
  return;
}
