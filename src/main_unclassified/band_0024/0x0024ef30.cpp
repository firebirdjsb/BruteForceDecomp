/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 30F40E0E9C4B5C6C6986EC29D6CD8550D8F3D1F4B2E1F1CDB9D0762C0E531927
 * Entry: 0x0024ef30, Ghidra index: 8308, label: FUN_0024ef30
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 FUN_0024ef30(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar1 = *(undefined4 *)(param_1 + 0x48);
  uVar2 = *(undefined4 *)(param_1 + 0x44);
  *param_2 = *(undefined4 *)(param_1 + 0x40);
  param_2[1] = uVar2;
  param_2[2] = uVar1;
  return 0;
}
