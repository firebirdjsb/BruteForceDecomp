/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 8C2CA2578D8348F7727B5BF8E98B1DA3C0BFE15304156885F0A39A4B6B2F8FA2
 * Entry: 0x00317aec, Ghidra index: 12185, label: FUN_00317aec
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00317aec(undefined1 *param_1,int *param_2)

{
  int iVar1;
  uint uVar2;
  int in_ECX;
  
  iVar1 = *(int *)(*(int *)(in_ECX + 0x78) + 0xb0);
  if (((iVar1 == 0) || (iVar1 = *(int *)(iVar1 + 0x20), iVar1 == 0)) ||
     ((*(uint *)(*(int *)(iVar1 + 0x78) + 8) & 0x82000) == 0)) {
    uVar2 = *(uint *)(*(int *)(in_ECX + 0x78) + 8);
    if ((uVar2 & 0x182000) == 0) {
      if ((uVar2 & 0x10) == 0) {
        *param_1 = 0;
      }
      else {
        *param_1 = 1;
      }
    }
    else {
      *param_1 = 2;
    }
  }
  else {
    *param_1 = 2;
    if (*(int *)(in_ECX + 8) + 0x6d0 != *(int *)(iVar1 + 0x50)) {
      *param_2 = *(int *)(iVar1 + 0x50) + -0x4c;
      return;
    }
  }
  *param_2 = 0;
  return;
}
