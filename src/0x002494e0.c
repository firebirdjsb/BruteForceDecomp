/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 2DB4EFA24F127C6EC2F4D8C167C668CD06747A95A3FF28B7A3A7C6C25A5775E4
 * Entry: 0x002494e0, Ghidra index: 8172, label: FUN_002494e0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_002494e0(int param_1,int param_2)

{
  int unaff_EDI;
  
  for (; param_1 != param_2; param_1 = param_1 + 0x20) {
    FUN_0001f4f0(unaff_EDI,0,0xffffffff);
    *(undefined4 *)(param_1 + 0x1c) = *(undefined4 *)(unaff_EDI + 0x1c);
  }
  return;
}
