/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 73549C3EC8AE210691EF0D2DD20D99B7BE7BC30118F558459D72CBCFCBC247F6
 * Entry: 0x001d0f30, Ghidra index: 6220, label: FUN_001d0f30
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_001d0f30(int param_1,int param_2)

{
  for (; param_1 != param_2; param_1 = param_1 + 0x10) {
    FUN_001d5450();
  }
  return;
}
