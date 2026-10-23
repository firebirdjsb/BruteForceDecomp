/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: D490C559DDB4D25EEDD934991C4DD0993464392E8CB58D28180B4090FF3FC85F
 * Entry: 0x001cf760, Ghidra index: 6127, label: FUN_001cf760
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_001cf760(int param_1,int param_2)

{
  for (; param_1 != param_2; param_1 = param_1 + 0x68) {
    FUN_001d1cd0();
  }
  return;
}
