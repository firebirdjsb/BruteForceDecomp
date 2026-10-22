/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 41FF6659E77A5D7EAE87EFA4E8C4B735C2B2A8724A0F5D927A54F6E189206C13
 * Entry: 0x002c15b0, Ghidra index: 10031, label: FUN_002c15b0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 FUN_002c15b0(uint param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  uint in_EAX;
  uint uVar3;
  uint in_ECX;
  int in_EDX;
  uint *puVar4;
  
  param_1 = in_ECX | param_1;
  param_2 = in_EAX | param_2;
  uVar3 = param_2;
  if ((int)param_1 < (int)param_2) {
    uVar3 = param_1;
    param_1 = param_2;
  }
  iVar1 = *(int *)(in_EDX + 0x818);
  puVar4 = (uint *)(in_EDX + 0x10 + iVar1 * 8);
  iVar2 = iVar1;
  while( true ) {
    iVar2 = iVar2 + -1;
    if (iVar2 < 0) {
      if (0xff < iVar1) {
        return 1;
      }
      *(uint *)(in_EDX + 0x18 + iVar1 * 8) = param_1;
      *(uint *)(in_EDX + 0x1c + *(int *)(in_EDX + 0x818) * 8) = uVar3;
      *(int *)(in_EDX + 0x818) = *(int *)(in_EDX + 0x818) + 1;
      return 0;
    }
    if ((*puVar4 == param_1) && (puVar4[1] == uVar3)) break;
    puVar4 = puVar4 + -2;
  }
  return 1;
}
