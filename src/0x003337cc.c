/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: A2039AF07741FB642588DE8840D7DAB8CEDBC949D3BE855ED4058FC9DF95CA0D
 * Entry: 0x003337cc, Ghidra index: 12413, label: FUN_003337cc
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4
FUN_003337cc(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
            ,undefined4 param_6)

{
  int iVar1;
  undefined4 uVar2;
  int in_ECX;
  int *piVar3;
  
  iVar1 = 0;
  piVar3 = (int *)(in_ECX + 200);
  do {
    if (*piVar3 == param_1) goto LAB_003337eb;
    iVar1 = iVar1 + 1;
    piVar3 = piVar3 + 5;
  } while (iVar1 < 0xc);
  iVar1 = -1;
LAB_003337eb:
  if ((iVar1 == -1) || (iVar1 = *(int *)(in_ECX + 0xd8 + iVar1 * 0x14), iVar1 == 0)) {
    uVar2 = 0xc0000001;
  }
  else {
    uVar2 = FUN_00341a1c(iVar1,param_2,param_3,param_4,param_5,param_6);
  }
  return uVar2;
}
