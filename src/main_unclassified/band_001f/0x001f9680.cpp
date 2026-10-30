/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: A51BAFB09D514A8A5D9DAADFC00367D90819749F93D557193BC69D7C16ED25CF
 * Entry: 0x001f9680, Ghidra index: 7074, label: FUN_001f9680
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 FUN_001f9680(undefined4 param_1)

{
  undefined4 in_EAX;
  undefined3 uVar1;
  undefined3 extraout_var;
  int in_ECX;
  undefined4 local_4;
  
  local_4 = 0;
  if ((*(byte *)(in_ECX + 0x3d) & 1) == 0) {
    uVar1 = (undefined3)((uint)in_EAX >> 8);
    if (*(char *)(in_ECX + 0xf4) == '\0') goto LAB_001f96d1;
    local_4 = 1;
  }
  else {
    FUN_001fe660();
    FUN_001fe610(param_1);
  }
  FUN_001f94e0(in_ECX,in_ECX + 0xe8);
  FUN_001f8db0(param_1,in_ECX + 0xe8,local_4);
  uVar1 = extraout_var;
LAB_001f96d1:
  return CONCAT31(uVar1,1);
}
