/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 9AE647E5E52E00088F9608D94BD51679C8BE368285F4B0A310FDA5D9EFDC7E60
 * Entry: 0x003738e0, Ghidra index: 13409, label: CDevice_SetStateUP_0__LTCG_esi1
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* Source-matched C++17 declaration only: original guest ABI_UNVERIFIED. */
extern void FUN_003736b0(void);
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_0037b720;
extern uint32_t DAT_0037dd90;
extern uint32_t DAT_0037ec88;
extern uint32_t DAT_00401760;
extern uint32_t PTR_LAB_00040200_1_0037b718;
void D3D8LTCG__CDevice_SetStateUP_0__LTCG_esi1(void)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  undefined4 *puVar4;
  uint uVar5;
  uint *puVar6;
  undefined4 *unaff_ESI;
  int iVar7;
  uint local_14;
  int local_10;
  int local_c;
  int local_4;
  
  if ((DAT_0037dd90 & 0x3fffff8f) != 0) {
    FUN_003736b0();
  }
  if ((DAT_0037dd90 & 0x20) != 0) {
    DAT_0037dd90 = DAT_0037dd90 & 0xffffffdf | 0x50;
    iVar2 = unaff_ESI[0xdf];
    uVar3 = *(uint *)(iVar2 + 4);
    puVar4 = (undefined4 *)*unaff_ESI;
    iVar7 = 0;
    local_10 = 0;
    local_c = 0;
    if ((undefined4 *)unaff_ESI[1] <= puVar4) {
      puVar4 = (undefined4 *)D3D_MakeRequestedSpace_8(DAT_0037ec88 >> 1,DAT_0037ec88);
    }
    *puVar4 = &DAT_00401760;
    puVar6 = puVar4 + 1;
    local_14 = 0;
    do {
      iVar1 = (uint)*(byte *)(local_14 + (uVar3 & 0x10) + 0x3b7e00) * 0x10 + iVar2;
      uVar5 = *(uint *)(iVar1 + 0x1c);
      *puVar6 = uVar5;
      puVar6 = puVar6 + 1;
      if (uVar5 != 2) {
        iVar1 = *(int *)(iVar1 + 0x18);
        uVar5 = (uint)(byte)(&DAT_0037b720)[uVar5 >> 4 & 0xf] *
                (uint)*(byte *)((int)&PTR_LAB_00040200_1_0037b718 + (uVar5 & 0xf)) + 3 >> 2;
        if (iVar7 == 0) {
          unaff_ESI[0x1e1] = uVar5;
          iVar7 = 1;
          local_4 = iVar1;
        }
        else if (iVar1 - local_c == 0) {
          unaff_ESI[iVar7 * 2 + 0x1df] = unaff_ESI[iVar7 * 2 + 0x1df] + uVar5;
        }
        else {
          unaff_ESI[iVar7 * 2 + 0x1e0] = iVar1 - local_c;
          unaff_ESI[iVar7 * 2 + 0x1e1] = uVar5;
          iVar7 = iVar7 + 1;
        }
        local_10 = local_10 + uVar5;
        local_c = iVar1 + uVar5 * 4;
      }
      local_14 = local_14 + 1;
    } while (local_14 < 0x10);
    unaff_ESI[0x1de] = local_10;
    unaff_ESI[0x201] = iVar7;
    *unaff_ESI = puVar6;
    unaff_ESI[0x1df] = local_4;
    unaff_ESI[0x1e0] = local_4 - local_c;
  }
  return;
}
