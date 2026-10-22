/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 99E6E33A291FA2EE747DD8B975F4C0A7657B7FA577A6DC24FDDEF83A546B9400
 * Entry: 0x000bc7f0, Ghidra index: 2292, label: FUN_000bc7f0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t PTR_FUN_0039fa18;
void FUN_000bc7f0(void)

{
  undefined4 *unaff_ESI;
  
  FUN_000bc470(unaff_ESI);
  *unaff_ESI = &PTR_FUN_0039fa18;
  unaff_ESI[0xf] = 0;
  unaff_ESI[0x10] = 0;
  return;
}
