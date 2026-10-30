/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 0C206940F080D3B2E496AE99A5B33B352A3582CF808468794AD4A8CF6EE074A4
 * Entry: 0x001e2a80, Ghidra index: 6753, label: FUN_001e2a80
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int FUN_001e2a80(int param_1,int param_2)

{
  int in_EAX;
  
  for (; param_1 != param_2; param_1 = param_1 + 0x1c) {
    FUN_0001f4f0(param_1,0,0xffffffff);
    in_EAX = in_EAX + 0x1c;
  }
  return in_EAX;
}
