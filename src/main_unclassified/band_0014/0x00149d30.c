/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 76C09961B94F5D0B05438EE279F5CA1C9D30E0B8641192DAE901351B83D13545
 * Entry: 0x00149d30, Ghidra index: 4278, label: FUN_00149d30
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
bool FUN_00149d30(int *param_1,uint *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int in_EAX;
  uint uVar4;
  int in_ECX;
  /* Byte return state at 0x149d46/4d/c9; final AL load 0x149df6.
   * This source value does not model the original transient stack write. */
  bool bVar5;
  
  iVar1 = *(int *)(in_ECX + 0x194);
  *param_1 = iVar1;
  bVar5 = iVar1 == *(int *)(in_ECX + 0x194);
  if (iVar1 == 0) {
    uVar4 = FUN_00149d00(in_ECX);
    *param_2 = uVar4;
    return bVar5;
  }
  if (((-1 < iVar1) && (iVar1 < 10)) && (iVar1 = *(int *)(in_EAX + iVar1 * 4), iVar1 != 0)) {
    uVar4 = *(uint *)(in_ECX + 0x198);
    *param_2 = uVar4;
    iVar2 = *(int *)(in_EAX + *param_1 * 4);
    iVar3 = *(int *)(iVar2 + 4);
    if (((iVar3 != 0) && (uVar4 < (uint)(*(int *)(iVar2 + 8) - iVar3 >> 2))) &&
       ((iVar2 = *(int *)(*(int *)(iVar1 + 4) + uVar4 * 4), iVar2 != 0 && (iVar2 != in_ECX)))) {
      *param_1 = 0;
      uVar4 = FUN_00149d00(in_ECX);
      *param_2 = uVar4;
      bVar5 = false;
    }
    if (*(int *)(iVar1 + 4) == 0) {
      uVar4 = 0;
    }
    else {
      uVar4 = *(int *)(iVar1 + 8) - *(int *)(iVar1 + 4) >> 2;
    }
    if (uVar4 <= *param_2) {
      FUN_0014c470(0);
    }
    return bVar5;
  }
  return false;
}
