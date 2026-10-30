/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 1112C05D1F8C85DC20CD094A30625F29FEEF717E11FB581BB68291FA598E1E99
 * Entry: 0x00132660, Ghidra index: 3845, label: FUN_00132660
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int FUN_00132660(int param_1,int param_2)

{
  int in_EAX;
  
  for (; param_1 != param_2; param_1 = param_1 + 0x38) {
    FUN_001327c0();
    in_EAX = in_EAX + 0x38;
  }
  return in_EAX;
}
