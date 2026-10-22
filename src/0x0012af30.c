/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 3623DA1AC04F710246715EA4D3391B50C0B4912FDC56444DDBC01C6D437DE733
 * Entry: 0x0012af30, Ghidra index: 3776, label: FUN_0012af30
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_0046cfd8;
int FUN_0012af30(void)

{
  int in_ECX;
  
  DAT_0046cfd8 = DAT_0046cfd8 * 0x19660d + 0x3c6ef35f;
  return in_ECX + (DAT_0046cfd8 & 3) * 4;
}
