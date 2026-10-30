/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: ED632EDE4044ADA07A8125CF25E94D19428080582800C5AE7428ED57094ECBA4
 * Entry: 0x001ab700, Ghidra index: 5509, label: FUN_001ab700
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_001ab700(void)

{
  int in_EAX;
  int *in_ECX;
  
  if (in_EAX == 0) {
    if (*in_ECX != 0) {
      FUN_000e1240(1);
    }
    *in_ECX = 0;
    return;
  }
  if (*in_ECX == 0) {
    FUN_001b23a0();
  }
  return;
}
