/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: F01CE73BD9BAB1246AA8BACFF33272B503DDAD647C363477ED41C54382597915
 * Entry: 0x00336122, Ghidra index: 12449, label: FUN_00336122
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int FUN_00336122(int param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  int in_ECX;
  int iVar3;
  uint uVar4;
  uint uVar5;
  
  iVar2 = (uint)(*(int *)(param_1 + 0x70) == -1) - (uint)(*(int *)(param_2 + 0x70) == -1);
  if (iVar2 != 0) {
    return iVar2;
  }
  uVar1 = *(uint *)(param_2 + 0x1c);
  uVar4 = *(uint *)(param_1 + 0x1c);
  if (uVar4 != uVar1) {
    iVar2 = (uVar1 & 0x8000000) - (uVar4 & 0x8000000);
    if (iVar2 != 0) {
      return iVar2;
    }
    iVar2 = (uVar1 & 0x10000000) - (uVar4 & 0x10000000);
    if (iVar2 != 0) {
      return iVar2;
    }
    if (((uVar1 & 0x4000000) == 0) || ((uVar1 & 0x20000000) != 0)) {
      iVar2 = 0;
    }
    else {
      iVar2 = 1;
    }
    if (((uVar4 & 0x4000000) == 0) || ((uVar4 & 0x20000000) != 0)) {
      iVar3 = 0;
    }
    else {
      iVar3 = 1;
    }
    if (iVar2 - iVar3 != 0) {
      return iVar2 - iVar3;
    }
    iVar2 = (uVar1 >> 1 & 0x40000000) - (uVar4 >> 1 & 0x40000000);
    if (iVar2 != 0) {
      return iVar2;
    }
    iVar2 = (uVar1 & 0x40000000) - (uVar4 & 0x40000000);
    if (iVar2 != 0) {
      return iVar2;
    }
  }
  uVar5 = uVar4 & 1;
  if ((uVar4 & 4) != 0) {
    uVar5 = 0;
  }
  uVar4 = uVar1 & 1;
  if ((uVar1 & 4) != 0) {
    uVar4 = 0;
  }
  iVar2 = uVar4 - uVar5;
  if (iVar2 == 0) {
    if (*(int *)(param_1 + 0x30) != *(int *)(in_ECX + 4)) {
      uVar5 = 0;
    }
    if (*(int *)(param_2 + 0x30) != *(int *)(in_ECX + 4)) {
      uVar4 = 0;
    }
    iVar2 = uVar4 - uVar5;
    if (iVar2 == 0) {
      iVar2 = __stricmp(param_1 + 0xc,param_2 + 0xc);
    }
  }
  return iVar2;
}
