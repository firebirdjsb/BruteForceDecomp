/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 010BA84B9D7FC794237DA56ED691C0F13A00BDB6B0F11152D7630965E830C802
 * Entry: 0x001d16a0, Ghidra index: 6254, label: FUN_001d16a0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_001d16a0(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 *unaff_EBX;
  
  for (; param_1 != param_2; param_1 = param_1 + 8) {
    *param_1 = *unaff_EBX;
    FUN_00087940(param_1 + 1,0,0xffffffff);
  }
  return;
}
