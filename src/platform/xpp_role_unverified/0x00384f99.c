/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 44FC8B83BA76A8B1EE2154D083ED644717389A3470B25FFEE8285E64351F6E1F
 * Entry: 0x00384f99, Ghidra index: 13663, label: FUN_00384f99
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t _DAT_fe80200c;
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00384f99(void)

{
  int iVar1;
  int iVar2;
  int *in_ECX;
  int iVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  
  iVar5 = (((uint)*(ushort *)(in_ECX[2] + 0x80) ^ in_ECX[0x106]) & 0x8000) +
          (*(ushort *)(in_ECX[2] + 0x80) & 0x7fff | in_ECX[0x106]);
  if ((uint)(iVar5 - in_ECX[0x136]) < 0x14) {
    return;
  }
  iVar7 = iVar5 * 0x30 - _DAT_fe80200c;
  if (in_ECX[0x134] == 0) {
LAB_00384ff1:
    in_ECX[0x135] = 0;
    in_ECX[0x134] = iVar7;
    in_ECX[0x136] = iVar5;
    return;
  }
  iVar2 = iVar7 - in_ECX[0x134];
  if (iVar2 < 0) {
    iVar2 = iVar2 + 0x2f;
  }
  iVar2 = iVar2 / 0x30;
  iVar1 = in_ECX[0x135];
  iVar3 = iVar2 - iVar1;
  if (iVar2 == iVar1) {
    if (iVar2 == 0) {
      return;
    }
    if ((uint)(iVar5 - in_ECX[0x136]) < 0x61a9) {
      return;
    }
    in_ECX[0x136] = iVar5;
  }
  else {
    in_ECX[0x135] = iVar2;
    in_ECX[0x136] = iVar5;
    if ((3 < iVar3) || (iVar3 < -3)) goto LAB_00384ff1;
    if (iVar2 == 0) {
      return;
    }
    if ((iVar3 < 1) || (iVar1 < 0)) {
      if (-1 < iVar3) {
        return;
      }
      if (0 < iVar1) {
        return;
      }
    }
  }
  uVar4 = *(uint *)(*in_ECX + 0x34);
  if (iVar2 < 1) {
    if ((uVar4 & 0x3fff) < 0x2ed2) goto LAB_00385095;
    uVar6 = uVar4 - 1;
  }
  else {
    if (12000 < (uVar4 & 0x3fff)) goto LAB_00385095;
    uVar6 = uVar4 + 1;
  }
  uVar4 = uVar4 ^ (uVar6 ^ uVar4) & 0x3fff;
LAB_00385095:
  *(uint *)(*in_ECX + 0x34) = ~uVar4 ^ 0x7fffffff;
  return;
}
