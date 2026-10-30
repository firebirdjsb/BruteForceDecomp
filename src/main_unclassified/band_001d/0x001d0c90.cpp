/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 199D1D34487E05C688E63891B3DBC1BB91ACD86F3535994749C5B34D2E67FA16
 * Entry: 0x001d0c90, Ghidra index: 6209, label: FUN_001d0c90
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_001d0c90(int param_1,int param_2)

{
  undefined4 unaff_EDI;
  
  for (; param_1 != param_2; param_1 = param_1 + 0x344) {
    FUN_001d2af0(unaff_EDI);
  }
  return;
}
