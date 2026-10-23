/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 12B1F6EDA5FE4D6F7F0034CCDB3E6312486D1672347B43A7B2314D2C388F5C8E
 * Entry: 0x000632d0, Ghidra index: 1072, label: FUN_000632d0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int FUN_000632d0(int *param_1)

{
  int iVar1;
  
  if (param_1[3] != 0) {
    param_1[3] = param_1[3] + -1;
  }
  iVar1 = param_1[3];
  if (iVar1 == 0) {
    param_1[3] = 1;
    (**(code **)(*param_1 + 0x48))(1);
    iVar1 = 0;
  }
  return iVar1;
}
