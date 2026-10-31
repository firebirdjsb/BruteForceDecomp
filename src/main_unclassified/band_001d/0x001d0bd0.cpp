/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 2954860C7C460A07B56E1A290EC5F3F29F7A8854A20058A015C1CF2D6B602354
 * Entry: 0x001d0bd0, Ghidra index: 6205, label: FUN_001d0bd0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* Source-matched C++17 declaration only; original Xbox guest ABI_UNVERIFIED. */
extern void FUN_001d2950(void);
void FUN_001d0bd0(int param_1,int param_2)

{
  for (; param_1 != param_2; param_1 = param_1 + 0x368) {
    FUN_001d2950();
  }
  return;
}
