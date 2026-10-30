/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: DE0179CD5C6AD38A327AA207B3BC5A8D07E7ED95459C6D68A70D61779F6372B4
 * Entry: 0x001cf810, Ghidra index: 6130, label: FUN_001cf810
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_001cf810(int param_1,int param_2)

{
  for (; param_1 != param_2; param_1 = param_1 + 0x10) {
    FUN_001d1d40(param_1);
  }
  return;
}
