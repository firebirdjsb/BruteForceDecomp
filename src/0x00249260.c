/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: F944CEE807897B5A0A5B8D0EE02903EECF198C2EFD6C841ADB3A84F45AD4E5D7
 * Entry: 0x00249260, Ghidra index: 8158, label: FUN_00249260
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00249260(int param_1,int param_2)

{
  int unaff_EDI;
  
  for (; param_1 != param_2; param_1 = param_1 + 0x14) {
    FUN_00249d40();
    *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(unaff_EDI + 0x10);
  }
  return;
}
