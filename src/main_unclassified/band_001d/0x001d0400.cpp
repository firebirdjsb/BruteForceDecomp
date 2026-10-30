/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 28A4560E83520B5A91B7947C95AADF0B21F91DE46E040CBEF8C875D6642512F1
 * Entry: 0x001d0400, Ghidra index: 6169, label: FUN_001d0400
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_001d0400(int param_1,int param_2)

{
  for (; param_1 != param_2; param_1 = param_1 + 0x44) {
    FUN_001d1e30(param_1);
  }
  return;
}
