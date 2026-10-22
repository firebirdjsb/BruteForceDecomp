/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: D4699EF3F3172DD96E16AB539738D3BA005D3074C0C0D6CD976F77333ED08EEE
 * Entry: 0x00314af5, Ghidra index: 12081, label: FUN_00314af5
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
uint FUN_00314af5(undefined4 param_1,int param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  undefined4 *in_ECX;
  uint uVar3;
  
  iVar1 = param_2;
  uVar3 = 0;
  iVar2 = XAPILIB__WriteFile(*in_ECX,param_1,param_2,&param_2,0);
  if (iVar2 == 0) {
    iVar2 = XAPILIB__GetLastError();
    if (iVar2 < 1) {
      uVar3 = XAPILIB__GetLastError();
    }
    else {
      uVar3 = XAPILIB__GetLastError();
      uVar3 = uVar3 & 0xffff | 0x80070000;
    }
    if ((int)uVar3 < 0) {
      return uVar3;
    }
  }
  if (param_3 == (int *)0x0) {
    if (param_2 != iVar1) {
      uVar3 = 0x8003001d;
    }
  }
  else {
    *param_3 = param_2;
  }
  return uVar3;
}
