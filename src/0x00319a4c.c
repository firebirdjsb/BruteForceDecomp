/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: D48D1560E0BB901E9E948CE849E1C093D05B2A0F24B00AAEF26EC64AF40DC4A1
 * Entry: 0x00319a4c, Ghidra index: 12239, label: FUN_00319a4c
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00319a4c(byte param_1)

{
  undefined4 in_ECX;
  
  FUN_0031998f();
  if ((param_1 & 1) != 0) {
    FUN_00314937(in_ECX);
  }
  return;
}
