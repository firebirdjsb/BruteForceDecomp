/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 283F3FA3E957E1349DD53F62523B79D4812F2D6F02A89FF382F5BF4784763900
 * Entry: 0x0033381f, Ghidra index: 12414, label: FUN_0033381f
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4
FUN_0033381f(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
            ,undefined4 param_6,undefined4 param_7)

{
  int iVar1;
  undefined4 uVar2;
  int in_ECX;
  int *piVar3;
  
  iVar1 = 0;
  piVar3 = (int *)(in_ECX + 200);
  do {
    if (*piVar3 == param_1) goto LAB_0033383e;
    iVar1 = iVar1 + 1;
    piVar3 = piVar3 + 5;
  } while (iVar1 < 0xc);
  iVar1 = -1;
LAB_0033383e:
  if ((iVar1 == -1) || (iVar1 = *(int *)(in_ECX + 0xd8 + iVar1 * 0x14), iVar1 == 0)) {
    uVar2 = 0xc0000001;
  }
  else {
    uVar2 = FUN_0034031b(iVar1,param_2,param_3,param_4,param_5,param_6,param_7);
  }
  return uVar2;
}
