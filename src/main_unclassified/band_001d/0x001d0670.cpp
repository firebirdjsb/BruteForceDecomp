/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 4F1B16D6FE317A01753412E1E5CF176079EA274CFEABCE3C4D9BCDB8DBAE40AB
 * Entry: 0x001d0670, Ghidra index: 6180, label: FUN_001d0670
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_001d0670(int param_1,int param_2)

{
  for (; param_1 != param_2; param_1 = param_1 + 0x5c) {
    FUN_001c9990();
  }
  return;
}
