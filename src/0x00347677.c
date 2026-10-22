/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 28FE0E7757B0EC8F9E03F0FB6AB45C9F46904661ADC5740D029FB8ED3326980A
 * Entry: 0x00347677, Ghidra index: 12853, label: FUN_00347677
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 FUN_00347677(int param_1)

{
  if (param_1 != -1) {
    NtClose(param_1);
  }
  return 1;
}
