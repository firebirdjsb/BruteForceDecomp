/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: CBD4489AB5654CB36479CD4F8C8694DE01766E6C7A43E88775B3CC880FC1AEF5
 * Entry: 0x001a8210, Ghidra index: 5432, label: FUN_001a8210
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int FUN_001a8210(undefined4 param_1)

{
  int in_EAX;
  int iVar1;
  
  if (*(int *)(in_EAX + 4) == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = (*(int *)(in_EAX + 8) - *(int *)(in_EAX + 4)) / 0x2c;
    if (iVar1 != 0) goto LAB_001a824e;
  }
  FUN_001ad440(param_1);
LAB_001a824e:
  FUN_001b3470(0);
  return iVar1 * 0x2c + *(int *)(in_EAX + 4);
}
