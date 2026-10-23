/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 2947B1A9FD0DBD07362B7CCEE034E7A84C588E173BD104847D1CA5BC7FF88831
 * Entry: 0x001dd200, Ghidra index: 6618, label: FUN_001dd200
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_001dd200(void)

{
  undefined4 *in_EAX;
  undefined4 *in_ECX;
  
  if (in_EAX != (undefined4 *)0x0) {
    *in_EAX = *in_ECX;
    in_EAX[1] = 0;
    FUN_001cd360();
  }
  return;
}
