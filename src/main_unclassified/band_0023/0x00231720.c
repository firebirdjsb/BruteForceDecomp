/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 47236311529BC4478CDB71B9B2712D66B2F26F4CDAF8D6889417516E24E49F34
 * Entry: 0x00231720, Ghidra index: 7753, label: FUN_00231720
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 FUN_00231720(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int *piVar6;
  int unaff_EBX;
  undefined4 *unaff_ESI;
  undefined4 *unaff_EDI;
  int local_8 [2];
  
  iVar2 = param_1;
  if ((*(byte *)(unaff_EBX + 0x225) & 1) == 0) {
    FUN_0022e780(unaff_EBX);
  }
  iVar1 = *(int *)(*(int *)(unaff_EBX + 0x228) + 0x140);
  if (iVar1 == 0) {
    local_8[0] = 0;
  }
  else {
    local_8[0] = *(int *)(*(int *)(unaff_EBX + 0x228) + 0x144) - iVar1 >> 2;
  }
  local_8[1] = 0;
  if (local_8[0] < iVar2) {
    piVar6 = local_8;
  }
  else {
    piVar6 = local_8 + 1;
    if (-1 < iVar2) {
      piVar6 = &param_1;
    }
  }
  iVar2 = *piVar6;
  uVar3 = *(undefined4 *)(unaff_EBX + 0x234 + iVar2 * 0xc);
  uVar4 = *(undefined4 *)(unaff_EBX + 0x230 + iVar2 * 0xc);
  iVar2 = unaff_EBX + iVar2 * 0xc;
  *unaff_EDI = *(undefined4 *)(iVar2 + 0x22c);
  unaff_EDI[2] = uVar3;
  unaff_EDI[1] = uVar4;
  uVar3 = *(undefined4 *)(iVar2 + 0x260);
  uVar4 = *(undefined4 *)(iVar2 + 0x264);
  uVar5 = *(undefined4 *)(iVar2 + 0x25c);
  unaff_ESI[1] = uVar3;
  *unaff_ESI = uVar5;
  unaff_ESI[2] = uVar4;
  return CONCAT31((int3)((uint)uVar3 >> 8),1);
}
