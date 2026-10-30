/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 9C119FE88703158CC68AE9EC43FA8FE612FCD0DD77938946FC848A1746E86465
 * Entry: 0x00318d84, Ghidra index: 12209, label: FUN_00318d84
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00318d84(byte param_1)

{
  undefined4 in_ECX;
  
  FUN_00318b5c();
  if ((param_1 & 1) != 0) {
    FUN_00314937(in_ECX);
  }
  return;
}
