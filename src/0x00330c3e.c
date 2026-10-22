/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 4A8177662C75769C41C98596F54EC585833D3D8EBB2830F05C3092B57F003045
 * Entry: 0x00330c3e, Ghidra index: 12374, label: FUN_00330c3e
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 FUN_00330c3e(undefined4 *param_1)

{
  undefined4 uVar1;
  int in_ECX;
  
  if (in_ECX == 0) {
    uVar1 = 0x80150005;
  }
  else {
    uVar1 = (*(code *)*param_1)(param_1);
  }
  return uVar1;
}
