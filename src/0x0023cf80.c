/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: EB36BB9739062158512642DEBB5DEFEAF3DCA044629BB3805C8B54B160AA9F29
 * Entry: 0x0023cf80, Ghidra index: 7948, label: FUN_0023cf80
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_004698d0;
uint FUN_0023cf80(void)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  undefined4 *puVar4;
  int iVar5;
  int unaff_EBX;
  int iVar6;
  undefined8 uVar7;
  
  uVar2 = DAT_004698d0;
  uVar3 = *(uint *)(unaff_EBX + 0x14);
  if (DAT_004698d0 != uVar3) {
    if ((*(uint *)(*(int *)(unaff_EBX + 0x20) + 0x44) >> 10 & 1) == 0) {
      uVar3 = *(uint *)(unaff_EBX + 0x18) & 0x7fffffff;
    }
    else {
      uVar3 = *(uint *)(unaff_EBX + 0x18);
      if ((int)uVar3 < 0) {
        return uVar3;
      }
      uVar3 = uVar3 | 0x80000000;
    }
    *(uint *)(unaff_EBX + 0x18) = uVar3;
    uVar3 = *(uint *)(*(int *)(unaff_EBX + 0x1c) + 0x18);
    if ((*(int *)(uVar3 + 4) != 0) &&
       (iVar5 = *(int *)(uVar3 + 8) - *(int *)(uVar3 + 4), uVar3 = iVar5 * 0x2aaaaaab,
       *(uint *)(*(int *)(unaff_EBX + 0x20) + 0x70) < (uint)(iVar5 / 0xc))) {
      iVar5 = *(int *)(*(int *)(unaff_EBX + 0x1c) + 0xc);
      iVar6 = *(int *)(iVar5 + 4);
      if (iVar6 == 0) {
        iVar5 = 0;
        uVar3 = 0;
      }
      else {
        iVar6 = *(int *)(iVar5 + 8) - iVar6;
        iVar5 = iVar6 / 0xc;
        uVar3 = -(iVar6 >> 0x1f);
      }
      if (0 < iVar5) {
        iVar6 = 0;
        do {
          iVar1 = *(int *)(*(int *)(unaff_EBX + 0x28) + 4 + iVar6);
          puVar4 = (undefined4 *)(*(int *)(unaff_EBX + 0x28) + iVar6);
          uVar7 = CONCAT44(iVar5,puVar4);
          if (iVar1 != 0) {
            uVar7 = FUN_0023ce40(puVar4 + 2,iVar1 + 0x14,*puVar4);
          }
          uVar3 = (uint)uVar7;
          iVar6 = iVar6 + 0x48;
          iVar5 = (int)((ulonglong)uVar7 >> 0x20) + -1;
        } while (iVar5 != 0);
      }
    }
    *(uint *)(unaff_EBX + 0x14) = uVar2;
  }
  return uVar3;
}
