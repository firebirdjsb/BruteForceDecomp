/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 3DEABF7A051B04C88DF00E58BAF50BAF469F24CB0D69BFC1F4B4F2255BFD3290
 * Entry: 0x001cf170, Ghidra index: 6094, label: FUN_001cf170
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_001cf170(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 *unaff_EBX;
  
  for (; param_1 != param_2; param_1 = param_1 + 5) {
    *param_1 = *unaff_EBX;
    FUN_001d3e30();
  }
  return;
}
