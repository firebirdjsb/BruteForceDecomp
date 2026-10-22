/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: B9D93430E026B392F8080BF71F8268CAE053B2565597CFFD06940B9D0FD30F9F
 * Entry: 0x002e9fb0, Ghidra index: 10569, label: FUN_002e9fb0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 FUN_002e9fb0(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int in_ECX;
  
  iVar1 = ((~(param_3 - 1U) & param_1 - 1U) + param_3) * param_2 + -1 + param_3;
  iVar2 = (**(code **)(in_ECX + 0x1c))(iVar1);
  if (iVar2 == 0) {
    return 0x8007000e;
  }
  uVar3 = FUN_002e9ef0(iVar2,iVar1,param_1,param_2,param_3);
  return uVar3;
}
