/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 76D46A096F8166C76015FAB8AF2C46DB088699DAF9E9F28192863E39194867FA
 * Entry: 0x00333726, Ghidra index: 12411, label: FUN_00333726
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 FUN_00333726(int param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int iVar3;
  int in_ECX;
  int *piVar4;
  
  if (in_ECX == 0) {
    uVar2 = 0x80150005;
  }
  else if (*(int *)(in_ECX + 0xbc) == 0) {
    uVar2 = 0x80150002;
  }
  else {
    iVar3 = 0;
    piVar4 = (int *)(in_ECX + 200);
    do {
      if (*piVar4 == param_1) goto LAB_0033375e;
      iVar3 = iVar3 + 1;
      piVar4 = piVar4 + 5;
    } while (iVar3 < 0xc);
    iVar3 = -1;
LAB_0033375e:
    if (iVar3 == -1) {
      uVar2 = 0x80151100;
    }
    else {
      if (param_2 != (undefined4 *)0x0) {
        puVar1 = (undefined4 *)(in_ECX + (iVar3 * 5 + 0x32) * 4);
        *param_2 = *puVar1;
        param_2[1] = puVar1[1];
        param_2[2] = puVar1[2];
      }
      uVar2 = *(undefined4 *)(in_ECX + 0xd4 + iVar3 * 0x14);
    }
  }
  return uVar2;
}
