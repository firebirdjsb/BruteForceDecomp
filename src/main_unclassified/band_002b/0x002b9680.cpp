/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 3588CFF3B7FE9AA4A88D3C586493683E1CFD6C7DFB413095D90D954E213D7417
 * Entry: 0x002b9680, Ghidra index: 9871, label: FUN_002b9680
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_002b9680(undefined4 param_1,undefined4 param_2)

{
  int in_ECX;
  int iVar1;
  undefined1 local_60 [48];
  float local_30;
  float local_28;
  
  FUN_002b8820(local_60,param_1,param_2);
  iVar1 = *(int *)(*(int *)(in_ECX + 4) + 0x20) + *(int *)(in_ECX + 4);
  if ((local_30 == 0.0) && (local_28 == 0.0)) {
    FUN_002b86f0(iVar1);
    return;
  }
  FUN_002b8640(iVar1);
  return;
}
