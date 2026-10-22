/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: C9A32A518C461EC2D5F92187B7FAFEECBB30D18CA94392C9528F0D27747FA96D
 * Entry: 0x00262c90, Ghidra index: 8665, label: FUN_00262c90
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int FUN_00262c90(int param_1,uint param_2)

{
  if (*(int *)(param_1 + 0x1c) != 0) {
    if (param_2 < (uint)((*(int *)(param_1 + 0x20) - *(int *)(param_1 + 0x1c)) / 0x14)) {
      return *(int *)(param_1 + 0x1c) + param_2 * 0x14;
    }
  }
  return 0;
}
