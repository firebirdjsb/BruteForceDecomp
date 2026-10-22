/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 8C97649ECE0E6364594517895876331B9A9AEC3E83B999FD7D0DFB07CC1E71C2
 * Entry: 0x00381051, Ghidra index: 13552, label: FUN_00381051
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 FUN_00381051(int param_1)

{
  if (param_1 < -0x3ffffff0) {
    if (param_1 == -0x3ffffff1) {
      return 0xc0000120;
    }
    if (param_1 != -0x80000000) {
      if ((param_1 == -0x7fffff00) || (param_1 == -0x7ffff800)) {
        return 0xc000009a;
      }
      if (param_1 < -0x40000000) {
        return 0xc0000001;
      }
      if (-0x3ffffff2 < param_1) {
        return 0xc0000001;
      }
    }
  }
  else if (param_1 != -0x3ffffff0) {
    if (param_1 == 0) {
      return 0;
    }
    if (param_1 != 0x40000000) {
      return 0xc0000001;
    }
    return 0x103;
  }
  return 0xc0000185;
}
