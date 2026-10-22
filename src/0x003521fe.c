/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 0A81FCCB4E02C56960E1C3EAF6E993DCF4AAFA7B2B5D503EB533C8DB23F442E3
 * Entry: 0x003521fe, Ghidra index: 13066, label: FUN_003521fe
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_003521fe(undefined4 *param_1,short param_2)

{
  char cVar1;
  char *pcVar2;
  ushort uVar3;
  byte bVar4;
  int in_ECX;
  char *pcVar5;
  int iVar6;
  undefined1 local_78 [91];
  undefined1 local_1d [21];
  int local_8;
  
  pcVar2 = (char *)*param_1;
  if (*(ushort *)(param_1 + 1) < 4) {
    *(byte *)(in_ECX + 0xa72) = *(byte *)(in_ECX + 0xa72) | 2;
    return;
  }
  uVar3 = *(ushort *)(pcVar2 + 2) >> 8 | *(ushort *)(pcVar2 + 2) << 8;
  if ((uVar3 < 4) || (*(ushort *)(param_1 + 1) < uVar3)) {
LAB_003523ad:
    *(byte *)(in_ECX + 0xa72) = *(byte *)(in_ECX + 0xa72) | 2;
    return;
  }
  *(ushort *)(param_1 + 1) = uVar3;
  bVar4 = *(byte *)(in_ECX + 0xa31) >> 3;
  if (*(byte *)(in_ECX + 0x8c0) < 0x14) {
    return;
  }
  if ((0x14 < *(byte *)(in_ECX + 0x8c0)) && ((bVar4 & 1) == 0)) {
    return;
  }
  if ((bool)(*(byte *)(in_ECX + 0xa31) >> 2 & 1) != (param_2 == 0x23c0)) {
    return;
  }
  pcVar5 = (char *)(in_ECX + 0x95a);
  do {
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  local_8 = (int)pcVar5 - (in_ECX + 0x95b);
  pcVar5 = (char *)(in_ECX + 0x99a);
  do {
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  iVar6 = (int)pcVar5 - (in_ECX + 0x99b);
  if ((bVar4 & 1) == 0) {
    if (*pcVar2 == '\x02') goto LAB_00352386;
    if (*pcVar2 != '\x03') {
      return;
    }
  }
  else {
    cVar1 = *pcVar2;
    if (cVar1 == '\x03') {
LAB_00352386:
      if (*(char *)(in_ECX + 0x8c0) != '\x14') {
        return;
      }
      FUN_00351028(0x15);
      return;
    }
    if (cVar1 != '\x04') {
      if (cVar1 != '\x01') {
        return;
      }
      if ((4 < uVar3) && ((ushort)((byte)pcVar2[4] + 5) <= uVar3)) {
        FUN_00356778(local_78);
        FUN_003567b6(local_78,pcVar2 + 1,1);
        if (iVar6 != 0) {
          FUN_003567b6(local_78,in_ECX + 0x99a,iVar6);
        }
        if (pcVar2[4] != '\0') {
          FUN_003567b6(local_78,pcVar2 + 5,pcVar2[4]);
        }
        FUN_003568e4(local_78);
        local_1d[0] = 0x10;
        FUN_00350a7a(0x23c2,2,pcVar2[1],local_1d,0x11,in_ECX + 0x95a,local_8,0,0,0,0,0,0,0);
        return;
      }
      goto LAB_003523ad;
    }
  }
  FUN_00351884(0x80010000);
  return;
}
