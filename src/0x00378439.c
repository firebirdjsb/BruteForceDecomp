/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: F935FB30F84446F774FFD423D73B379394120BEDE2732B85DFA58FE87FCF2FBB
 * Entry: 0x00378439, Ghidra index: 13471, label: FUN_00378439
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4
FUN_00378439(uint param_1,uint param_2,int param_3,uint param_4,undefined4 param_5,
            undefined4 param_6,int param_7)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  undefined4 uVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  int *unaff_ESI;
  uint local_18;
  uint local_c;
  uint *local_8;
  
  iVar2 = FUN_00373ac0();
  local_8 = (uint *)FUN_003783c0();
  uVar3 = D3D8LTCG__CMiniport_GetDisplayCapabilities();
  uVar1 = *local_8;
  local_18 = 0;
  uVar4 = uVar3 & 0xff;
  local_c = param_4 & 0x60;
  uVar5 = uVar3 & 0xc00000;
  if ((char)param_4 < '\0') {
    local_c = param_4 & 0x40;
  }
  if (uVar4 == 4) {
    local_18 = uVar3 & 0xe0000;
  }
  if (param_3 == 0x32) {
    if (((param_4 & 0x200) != 0) && ((uVar3 & 0x400000) != 0)) {
      unaff_ESI[0x209] = 0;
      unaff_ESI[0x208] = 20000000;
      uVar5 = *(uint *)(*unaff_ESI + 0x9400);
      iVar7 = uVar5 + 20000000;
      iVar9 = *(int *)(*unaff_ESI + 0x9410) + (uint)(0xfeced2ff < uVar5);
      unaff_ESI[0x20a] = iVar7;
      unaff_ESI[0x20b] = iVar9;
      FUN_00374d57(iVar7,iVar9,1);
LAB_0037854d:
      uVar5 = 0x400000;
      goto LAB_0037850a;
    }
  }
  else {
    if (param_3 != 0x3c) goto LAB_0037850a;
    if (((param_4 & 0x200) == 0) || ((uVar3 & 0x800000) == 0)) goto LAB_0037854d;
    unaff_ESI[0x209] = 0;
    unaff_ESI[0x208] = 0xfe9156;
    uVar5 = *(uint *)(*unaff_ESI + 0x9400);
    iVar7 = uVar5 + 0xfe9156;
    iVar9 = *(int *)(*unaff_ESI + 0x9410) + (uint)(0xff016ea9 < uVar5);
    unaff_ESI[0x20a] = iVar7;
    unaff_ESI[0x20b] = iVar9;
    FUN_00374d57(iVar7,iVar9,1);
  }
  uVar5 = 0x800000;
LAB_0037850a:
  uVar8 = 0;
  if (uVar4 == 0) {
LAB_00378518:
    unaff_ESI[3] = iVar2;
    unaff_ESI[1] = param_7;
    unaff_ESI[2] = uVar8;
    unaff_ESI[unaff_ESI[0x1f9] + 0x1f7] = 1;
    uVar1 = *local_8;
    unaff_ESI[0x6e] = 1;
    unaff_ESI[0x6d] = uVar1;
    uVar6 = 0;
  }
  else {
    for (; uVar8 = *local_8, (uVar8 & 0xff) == (uVar1 & 0xff); local_8 = local_8 + 3) {
      if ((((((uVar4 != 4) || ((local_18 & uVar8) != 0)) || ((uVar8 & 0xe0000) == 0)) &&
           ((((ushort)local_8[1] == param_1 && (*(ushort *)((int)local_8 + 6) == param_2)) &&
            ((((~(uVar8 >> 0x10) ^ ~(param_4 >> 4)) & 1) == 0 &&
             ((((~(*local_8 >> 0x18) ^ ~(param_4 >> 7)) & 1) == 0 &&
              (((~(*local_8 >> 0x19) ^ ~(param_4 >> 8)) & 1) == 0)))))))) &&
          (uVar8 = *local_8, (uVar5 & uVar8) != 0)) &&
         (((local_c == 0 || (((local_c & 0x20) != 0 && ((uVar8 & 0x200000) != 0)))) ||
          (((local_c & 0x40) != 0 && ((uVar8 & 0x200000) == 0)))))) {
        uVar8 = local_8[2];
        if (uVar8 != 0) {
          if ((uVar3 & uVar5) == 0) {
            uVar8 = 0;
          }
          if ((((uVar4 != 4) || ((*local_8 & 0x60000) == 0)) && ((param_4 & 0x10) != 0)) &&
             ((uVar3 & 0x10000) == 0)) {
            uVar8 = 0;
          }
          if (uVar8 != 0) goto LAB_00378518;
        }
        break;
      }
    }
    uVar6 = 0x80004005;
  }
  return uVar6;
}
