/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: CA87D7343A504497793D3DDF82DFF265553A9C89DE72F42797932DFB8EA26D17
 * Entry: 0x001d08d0, Ghidra index: 6192, label: FUN_001d08d0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* Source-matched C++17 declaration only; original Xbox guest ABI_UNVERIFIED. */
extern void FUN_001d23b0(void);
void FUN_001d08d0(int param_1,int param_2)

{
  for (; param_1 != param_2; param_1 = param_1 + 0x124) {
    FUN_001d23b0();
  }
  return;
}
