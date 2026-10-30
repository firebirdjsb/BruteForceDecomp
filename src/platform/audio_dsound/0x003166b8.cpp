/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 082849FB21FA4D9B79506E7B959C2BF322D724AB524A281441B1B644F2C4AE29
 * Entry: 0x003166b8, Ghidra index: 12144, label: FUN_003166b8
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int FUN_003166b8(undefined4 param_1,int *param_2)

{
  int *piVar1;
  
  piVar1 = (int *)*param_2;
  if (piVar1 != param_2) {
    FUN_00315aac(param_1,piVar1);
  }
  return (int)piVar1;
}
