/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 249FA23F4E9E927E76056E27F7D95F48BAE8C6A60BC111004EEDC3F9EEF998B2
 * Entry: 0x000b1c70, Ghidra index: 2132, label: FUN_000b1c70
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern void FUN_000bb600(int param_1);

extern uint32_t PTR_FUN_003a0034;
void FUN_000b1c70(void)

{
  undefined4 *unaff_ESI;
  
  FUN_000bb4d0(unaff_ESI,0x10);
  *unaff_ESI = &PTR_FUN_003a0034;
  unaff_ESI[0x13] = 0;
  unaff_ESI[0x15] = 0x3fcccccd;
  unaff_ESI[0x14] = 0x42c00000;
  *(byte *)((int)unaff_ESI + 0x13) = *(byte *)((int)unaff_ESI + 0x13) | 1;
  FUN_000bb600(unaff_ESI);
  *(byte *)(unaff_ESI + 0x17) = *(byte *)(unaff_ESI + 0x17) & 0xfe;
  unaff_ESI[0x16] = 0;
  return;
}
