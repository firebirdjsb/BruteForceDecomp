/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 5C8097CED87E5CE4A49318F9680D6456C52A65C16275B0430C4548678ECED9F2
 * Entry: 0x0023d040, Ghidra index: 7949, label: FUN_0023d040
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int FUN_0023d040(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,int param_5)

{
  undefined4 uVar1;
  int in_EAX;
  int iVar2;
  int iVar3;
  undefined4 in_EDX;
  
  uVar1 = param_1;
  iVar2 = FUN_00236a00(*(int *)(in_EAX + 0x20),in_EDX,*(int *)(in_EAX + 0x20) + 0x14);
  if (2 < iVar2) {
    param_1 = *(undefined4 *)(*(int *)(in_EAX + 0x20) + 4);
    iVar3 = FUN_0023c5c0();
    if (iVar3 != 0) {
      FUN_0023cf80();
      *(undefined4 *)(param_5 + 0x1c) = *(undefined4 *)(in_EAX + 0x28);
      param_1 = iVar3;
      FUN_0023c1d0(&param_1,param_4,uVar1,param_3,1);
    }
  }
  return iVar2;
}
