/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: EF7FE074D1B84D075FC7CC76E3FACEE0EBC9CACEEFDC3622C3334E096231441F
 * Entry: 0x000b9f00, Ghidra index: 2243, label: FUN_000b9f00
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern void FUN_000c4550(void);

extern uint32_t PTR_FUN_0039faf0;
void FUN_000b9f00(void)

{
  undefined4 *in_EAX;
  
  FUN_000c4550();
  /* XBE 0x000b9f08: MOV m32,0x0039faf0 stores a 32-bit guest VA.
   * Register ABI and guest memory translation remain ABI_UNVERIFIED. */
  *in_EAX = UINT32_C(0x0039faf0);
  return;
}
