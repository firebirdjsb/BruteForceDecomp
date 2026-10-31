/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 321851FD5AD1AB09811D4A561501437A88755D36FF3C16FF3EAA6DC826B2B287
 * Entry: 0x0013c800, Ghidra index: 4006, label: FUN_0013c800
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t PTR_LAB_0039d408;
void FUN_0013c800(void)

{
  undefined4 *in_EAX;
  
  *(byte *)(in_EAX + 7) = *(byte *)(in_EAX + 7) & 0xfe;
  in_EAX[6] = 0;
  in_EAX[1] = 0;
  in_EAX[2] = 0;
  in_EAX[5] = 0;
  in_EAX[4] = 0;
  in_EAX[3] = 0;
  *(byte *)(in_EAX + 7) = *(byte *)(in_EAX + 7) & 0xc1;
  /* XBE 0x0013c81c: MOV m32,0x0039d408 stores a 32-bit guest VA.
   * Register ABI and guest memory translation remain ABI_UNVERIFIED. */
  *in_EAX = UINT32_C(0x0039d408);
  return;
}
