/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: B2EFF1B52EDA07B5F6FA5679B7A459A0DCF791ED18FB415F162BDD0EA628A226
 * Entry: 0x0036e740, Ghidra index: 13310, label: D3D_SetTileNoWait_0__LTCG_eax1_ecx2
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
#include "bf_xbox_d3d_device_x86.h"
void D3D8LTCG__D3D_SetTileNoWait_0__LTCG_eax1_ecx2(void)

{
  int iVar1;
  int in_EAX;
  int *in_ECX;
  int iVar2;
  int *piVar3;
  int *piVar4;
  undefined4 *puVar5;
  int local_18 [4];
  undefined4 local_8;
  undefined4 local_4;
  
  iVar1 = D3D8__D3D_g_pDevice;
  if ((in_ECX != (int *)0x0) && (in_ECX[1] != 0)) {
    piVar3 = local_18;
    for (iVar2 = 6; iVar2 != 0; iVar2 = iVar2 + -1) {
      *piVar3 = *in_ECX;
      in_ECX = in_ECX + 1;
      piVar3 = piVar3 + 1;
    }
    if (-1 < local_18[0]) {
      local_4 = 0;
      local_8 = 0;
    }
    piVar3 = local_18;
    piVar4 = (int *)(D3D8__D3D_g_pDevice + 0x1660 + in_EAX * 0x18);
    for (iVar2 = 6; iVar2 != 0; iVar2 = iVar2 + -1) {
      *piVar4 = *piVar3;
      piVar3 = piVar3 + 1;
      piVar4 = piVar4 + 1;
    }
    FUN_00374a49(iVar1 + 0x17c8,local_18[1] & 0xfffffff,local_18[2],local_18[3],local_18[0],local_8,
                 local_4);
    return;
  }
  iVar1 = D3D8__D3D_g_pDevice + in_EAX * 0x18;
  FUN_00374c34(D3D8__D3D_g_pDevice + 0x17c8,*(undefined4 *)(iVar1 + 0x1674));
  puVar5 = (undefined4 *)(iVar1 + 0x1660);
  for (iVar2 = 6; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar5 = 0;
    puVar5 = puVar5 + 1;
  }
  return;
}
