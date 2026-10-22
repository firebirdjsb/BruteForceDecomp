/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: E2380B3091B7A834BDA26AFE8361B15E3EE44790AD99E54D59598A342C11CDB5
 * Entry: 0x0010ec30, Ghidra index: 3522, label: FUN_0010ec30
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0010ec30(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int *in_ECX;
  
  iVar1 = in_ECX[5];
  in_ECX[2] = *(int *)(param_1 + 0x19c);
  in_ECX[3] = *(int *)(param_1 + 0x1a4);
  if (iVar1 != 0) {
    uVar2 = *(undefined4 *)(iVar1 + 8);
    uVar3 = (**(code **)(*in_ECX + 0x1c))(iVar1);
    FUN_0010ea50(in_ECX,uVar2,iVar1,in_ECX[2],0x3f800000,0,uVar3);
    (**(code **)(*in_ECX + 0x24))();
  }
  return;
}
