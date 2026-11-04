/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 3AB52AF7B256A6C03B5BB8FFD694C5A6F3780CBECE52E67F8681984FE2FF8E82
 * Entry: 0x001d6e80, Ghidra index: 6382, label: FUN_001d6e80
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* Source-matched C++17 declaration only; original Xbox guest ABI_UNVERIFIED. */
extern void FUN_001d4120(void);
undefined4 * FUN_001d6e80(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 *in_EAX;
  
  for (; param_1 != param_2; param_1 = param_1 + 5) {
    *in_EAX = *param_1;
    FUN_001d4120();
    in_EAX = in_EAX + 5;
  }
  return in_EAX;
}
