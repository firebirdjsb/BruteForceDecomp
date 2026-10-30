/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 2478DE50C2E9FABA7DEA9C226F71103277858060B7ECBF9D7721BFF105ECEC23
 * Entry: 0x002c7690, Ghidra index: 10101, label: FUN_002c7690
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 FUN_002c7690(undefined4 param_1,undefined4 param_2)

{
  char cVar1;
  char *pcVar2;
  undefined4 uVar3;
  int iVar4;
  int *in_ECX;
  
  *(undefined4 *)(in_ECX[0xb] + 4) = param_1;
  iVar4 = in_ECX[0xb];
  pcVar2 = *(char **)(iVar4 + 4);
  do {
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  uVar3 = FUN_002b2b80();
  iVar4 = FUN_002beb90(iVar4,uVar3);
  uVar3 = 0;
  *(undefined4 *)(in_ECX[0xb] + 4) = 0;
  if (iVar4 != 0) {
    return 0;
  }
  iVar4 = FUN_002ea01d(0x2c);
  if (iVar4 != 0) {
    uVar3 = FUN_002c79a0(param_2);
  }
  (**(code **)(*in_ECX + 8))(uVar3);
  return uVar3;
}
