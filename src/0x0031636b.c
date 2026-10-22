/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 57CD54B2D3BCA842A71416FA8103AA40782F631FAEFE1E5FBF1AADE854ECC472
 * Entry: 0x0031636b, Ghidra index: 12137, label: FUN_0031636b
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t _DAT_fe801100;
extern uint32_t _DAT_fe801300;
extern uint32_t _DAT_fe801304;
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0031636b(void)

{
  if ((_DAT_fe801100 & 0xf00) == 0xf00) {
    FUN_003162ea(_DAT_fe801300 & 0xffff,_DAT_fe801304);
  }
  FUN_0031b938(0);
  FUN_0031b938(1);
  return;
}
