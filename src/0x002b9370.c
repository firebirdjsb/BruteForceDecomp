/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: C5C23F050C6FCD2FBCB30FA1E0A2B8CA73F822F035D60B7131A7FBAA9DD6FD49
 * Entry: 0x002b9370, Ghidra index: 9869, label: FUN_002b9370
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_002b9370(undefined4 param_1,int param_2,int param_3,undefined4 param_4,undefined4 param_5,
                 undefined4 param_6,undefined4 param_7)

{
  undefined4 *puVar1;
  int iVar2;
  int unaff_ESI;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40 [10];
  undefined4 local_18;
  undefined4 local_4;
  
  puVar1 = local_40 + 3;
  iVar2 = 3;
  do {
    *puVar1 = 0;
    puVar1 = puVar1 + 4;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  local_4 = 0;
  if (unaff_ESI == 0) {
    puVar1 = local_40;
    for (iVar2 = 0x10; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar1 = 0;
      puVar1 = puVar1 + 1;
    }
    local_40[0] = 0x3f800000;
    local_40[5] = 0x3f800000;
    local_18 = 0x3f800000;
  }
  else {
    FUN_002b3500(*(undefined4 *)(*(int *)(unaff_ESI + 0x14) + 0x108),
                 *(undefined4 *)(*(int *)(unaff_ESI + 0x14) + 0x10c));
  }
  local_44 = 0;
  if (param_2 == 0) {
    local_48 = 0;
    local_4c = 0;
    local_50 = 0;
  }
  else {
    FUN_002b7360(local_40,param_2,&local_50);
  }
  local_54 = 0;
  if (param_3 == 0) {
    local_58 = 0;
    local_5c = 0;
    local_60 = 0;
  }
  else {
    FUN_002b73d0(local_40,param_3,&local_60);
  }
  FUN_002b90a0(param_1,unaff_ESI,&local_50,&local_60,param_4,param_5,param_6,param_7);
  return;
}
