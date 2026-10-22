/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 28D8584081B66C9A1505DF47DA7ACE0B76AC077AB88E5EE7EF3FF280CCDBFDE4
 * Entry: 0x00314b5c, Ghidra index: 12082, label: FUN_00314b5c
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
uint FUN_00314b5c(int param_1,int param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  undefined4 *in_ECX;
  uint uVar3;
  
  uVar3 = 0;
  if ((*(byte *)(in_ECX + 1) & 2) == 0) {
    iVar1 = XAPILIB__SetFilePointer(*in_ECX,param_1,0,param_2);
    if (iVar1 == -1) {
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
    if (param_3 != (int *)0x0) {
      *param_3 = iVar1;
    }
  }
  else {
    if (param_2 == 0) {
      in_ECX[2] = param_1;
    }
    else {
      in_ECX[2] = in_ECX[2] + param_1;
    }
    if (param_3 != (int *)0x0) {
      *param_3 = in_ECX[2];
    }
  }
  return uVar3;
}
