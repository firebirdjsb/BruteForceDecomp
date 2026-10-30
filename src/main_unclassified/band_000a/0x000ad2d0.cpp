/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 0AF5645C11EF3DFAB52FE941377473B26994515CD4B21FF5E888D571C0F7F921
 * Entry: 0x000ad2d0, Ghidra index: 2069, label: FUN_000ad2d0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern void FUN_000b2230(void);

extern uint32_t PTR_FUN_003a00c4;
extern uint32_t PTR_LAB_0039fff0;
void FUN_000ad2d0(void)

{
  undefined4 *in_EAX;
  
  FUN_000b2230();
  *in_EAX = &PTR_FUN_003a00c4;
  in_EAX[0xb] = &PTR_LAB_0039fff0;
  in_EAX[0x19] = 0;
  in_EAX[0x1a] = 0;
  in_EAX[0x1b] = 0;
  in_EAX[0x1c] = 0;
  in_EAX[0x1d] = 0;
  return;
}
