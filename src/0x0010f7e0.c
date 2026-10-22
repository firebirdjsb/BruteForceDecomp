/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 83CF5466F0B5BBC7ECACB5985CE5A206916C83DB00EC4FB4FEA4306EAB3BE710
 * Entry: 0x0010f7e0, Ghidra index: 3534, label: FUN_0010f7e0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0010f7e0(undefined4 param_1,undefined4 param_2)

{
  int in_EAX;
  undefined1 local_20 [8];
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  local_18 = *(undefined4 *)(in_EAX + 0x50);
  local_10 = 0;
  local_4 = 0;
  local_c = param_1;
  local_8 = param_2;
  local_14 = local_18;
  FUN_000e4190(in_EAX,local_20);
  return;
}
