/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 300BF45B349ED92AF23ED0CDD42553021286E6D4464C1EF00DDF4CFB6DC37C49
 * Entry: 0x00373730, Ghidra index: 13408, label: CDevice_SetStateVB_8
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_0037b954;
extern uint32_t DAT_0037b958;
extern uint32_t DAT_0037dd90;
extern uint32_t DAT_0037ec88;
extern uint32_t DAT_00401760;
/* XBE x86 loads indexed DWORDs from stream guest base 0x0037b950. */
extern uint32_t D3D_g_Stream;
void D3D8LTCG__CDevice_SetStateVB_8(undefined4 *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint *puVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  int local_4;
  
  uVar4 = DAT_0037dd90;
  uVar5 = DAT_0037dd90 & 0xffffffaf;
  uVar8 = DAT_0037dd90 & 0x3fffff8f;
  DAT_0037dd90 = uVar5;
  if (uVar8 != 0) {
    FUN_003736b0();
  }
  if (((uVar4 & 0x40000000) == 0) && (((uVar4 & 0x40) != 0 || (param_1[8] != param_2)))) {
    iVar1 = param_1[0xdf];
    param_1[8] = param_2;
    puVar6 = (uint *)*param_1;
    iVar10 = (*(uint *)(iVar1 + 4) & 0x10) + 0x3b7e00;
    if ((uint *)param_1[1] <= puVar6) {
      puVar6 = (uint *)D3D_MakeRequestedSpace_8(DAT_0037ec88 >> 1,DAT_0037ec88);
    }
    if ((uVar4 & 0x10) != 0) {
      *puVar6 = (uint)&DAT_00401760;
      puVar6 = puVar6 + 1;
      uVar8 = 0;
      do {
        iVar7 = (uint)*(byte *)(uVar8 + iVar10) * 0x10;
        *puVar6 = (&D3D_g_Stream)[*(int *)(iVar7 + iVar1 + 0x14) * 3] * 0x100 +
                  *(int *)(iVar7 + 0x1c + iVar1);
        puVar6 = puVar6 + 1;
        uVar8 = uVar8 + 1;
      } while (uVar8 < 0x10);
    }
    iVar7 = 0;
    if (param_2 == 0) {
      uVar8 = 0x41720;
      do {
        iVar9 = iVar1 + (uint)*(byte *)(iVar7 + iVar10) * 0x10;
        if (*(int *)(iVar9 + 0x1c) != 2) {
          if ((&DAT_0037b958)[*(int *)(iVar9 + 0x14) * 3] != 0) {
            iVar2 = *(int *)((&DAT_0037b958)[*(int *)(iVar9 + 0x14) * 3] + 4);
            iVar3 = *(int *)(iVar9 + 0x18);
            iVar9 = (&DAT_0037b954)[*(int *)(iVar9 + 0x14) * 3];
            *puVar6 = uVar8;
            puVar6[1] = iVar2 + iVar3 + iVar9;
            puVar6 = puVar6 + 2;
          }
        }
        uVar8 = uVar8 + 4;
        iVar7 = iVar7 + 1;
      } while (uVar8 < 0x41760);
      *param_1 = puVar6;
      return;
    }
    local_4 = 0;
    uVar8 = 0x41720;
    do {
      iVar7 = (uint)*(byte *)(local_4 + iVar10) * 0x10 + iVar1;
      if (*(int *)(iVar7 + 0x1c) != 2) {
        iVar9 = *(int *)(iVar7 + 0x14);
        if ((&DAT_0037b958)[iVar9 * 3] != 0) {
          iVar2 = (&D3D_g_Stream)[iVar9 * 3];
          iVar3 = *(int *)((&DAT_0037b958)[iVar9 * 3] + 4);
          iVar7 = *(int *)(iVar7 + 0x18);
          iVar9 = (&DAT_0037b954)[iVar9 * 3];
          *puVar6 = uVar8;
          puVar6[1] = iVar2 * param_2 + iVar3 + iVar7 + iVar9;
          puVar6 = puVar6 + 2;
        }
      }
      local_4 = local_4 + 1;
      uVar8 = uVar8 + 4;
    } while (uVar8 < 0x41760);
    *param_1 = puVar6;
  }
  return;
}
