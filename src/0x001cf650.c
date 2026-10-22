/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 4B16923872C89B0B8561BE42BBE4B260E45216A2EC305948354293881277AF0B
 * Entry: 0x001cf650, Ghidra index: 6121, label: FUN_001cf650
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_001cf650(int param_1,int param_2)

{
  for (; param_1 != param_2; param_1 = param_1 + 0x10) {
    FUN_001d4590();
  }
  return;
}
