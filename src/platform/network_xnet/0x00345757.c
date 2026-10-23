/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 26643A8BA8E9B0FBD64FA3DF3C64C7B9C83DC6C3E9DFC31F70C4F0A3FE76542E
 * Entry: 0x00345757, Ghidra index: 12815, label: FUN_00345757
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 FUN_00345757(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int in_ECX;
  
  iVar1 = (uint)*(byte *)(in_ECX + 0x2e) * 0x400;
  if ((param_2 <= iVar1) && (iVar1 = param_2, param_2 < 1)) {
    iVar1 = 1;
  }
  iVar2 = (uint)*(byte *)(in_ECX + 0x2f) * 0x400;
  if ((param_3 <= iVar2) && (iVar2 = param_3, param_3 < 1)) {
    iVar2 = 0;
  }
  uVar3 = 0;
  *(int *)(param_1 + 0x58) = iVar1;
  if ((((*(byte *)(param_1 + 0xc) & 2) == 0) || (*(byte *)(param_1 + 0x7c) < 2)) ||
     (*(int *)(param_1 + 0x5c) <= iVar2)) {
    *(int *)(param_1 + 0x5c) = iVar2;
  }
  else {
    uVar3 = 0x80072726;
  }
  return uVar3;
}
