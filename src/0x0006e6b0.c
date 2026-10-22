/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: D295D6670CF71DE8D97693D8F6AA8834D7A6374061CCD5BD5F02DCE90F6CCE9A
 * Entry: 0x0006e6b0, Ghidra index: 1242, label: FUN_0006e6b0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_003f7f20;
extern uint32_t DAT_004698cc;
int FUN_0006e6b0(int param_1,code *param_2,undefined4 param_3)

{
  ushort *puVar1;
  ushort uVar2;
  code *pcVar3;
  char cVar4;
  ushort uVar5;
  uint in_EAX;
  int iVar6;
  uint uVar7;
  int iVar8;
  int unaff_EBX;
  
  pcVar3 = param_2;
  if (*(int *)(unaff_EBX + 0x120) == 0) {
    if (param_2 != (code *)0x0) {
      iVar8 = (*param_2)();
      return (2 < iVar8) + 4;
    }
    return 1;
  }
  puVar1 = (ushort *)(*(int *)(unaff_EBX + 0x120) + (in_EAX & 0xffff) * 6);
  if ((*puVar1 & 0xfff) != 0) {
    cVar4 = FUN_0006e630(&param_2);
    if (cVar4 == '\0') {
      *(byte *)((int)puVar1 + 1) = *(byte *)((int)puVar1 + 1) | 0x20;
    }
    else {
      *(byte *)((int)puVar1 + 1) = *(byte *)((int)puVar1 + 1) & 0x9f;
      puVar1[1] = puVar1[2];
      if (param_2 == (code *)0x0) {
        *puVar1 = *puVar1 & 0xe000;
      }
      else if (0 < (int)param_2) {
        *puVar1 = *puVar1 & 0xf000 | 0x1000;
      }
    }
  }
  iVar6 = (DAT_004698cc & 0xffff) - (uint)puVar1[1];
  iVar8 = iVar6;
  if (iVar6 < 0) {
    iVar8 = iVar6 + 0x10000;
  }
  if ((param_1 < iVar8) ||
     ((iVar6 = CONCAT22((short)((uint)iVar6 >> 0x10),*puVar1 >> 0xc), (*puVar1 >> 0xc & 4) != 0 &&
      (0 < iVar8)))) {
    if (pcVar3 == (code *)0x0) {
      return CONCAT22((short)((uint)iVar6 >> 0x10),(*puVar1 | 0x5000) >> 0xc);
    }
    iVar6 = (*pcVar3)();
    if (iVar6 < 3) {
      uVar2 = *puVar1;
      uVar7 = (uint)(uVar2 & 0xefff | 0x4000);
    }
    else {
      uVar2 = *puVar1;
      uVar7 = CONCAT22((short)((uint)iVar6 >> 0x10),uVar2) | 0x5000;
    }
    uVar5 = (ushort)uVar7 >> 0xc;
    iVar6 = CONCAT22((short)(uVar7 >> 0x10),uVar5);
    if (((uVar2 & 0x1000) == 0) || (DAT_003f7f20 <= iVar8)) {
      puVar1[1] = (ushort)DAT_004698cc;
      *puVar1 = uVar2 & 0xfff | uVar5 << 0xc;
    }
  }
  return iVar6;
}
