/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: A24147AD281CF3E21E75EB05E95BE089F7B37340D3A835E2DBA8E104308D9EB8
 * Entry: 0x001d12b0, Ghidra index: 6236, label: FUN_001d12b0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_001d12b0(int param_1,int param_2)

{
  int unaff_EDI;
  
  for (; param_1 != param_2; param_1 = param_1 + 0x18) {
    FUN_0010bc40();
    *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(unaff_EDI + 0x10);
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(unaff_EDI + 0x14);
  }
  return;
}
