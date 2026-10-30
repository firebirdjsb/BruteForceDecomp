/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 2891AEC16699347192C2FAC19BA68C3F4E91BE5F993A58F597A56BCB0269AD8B
 * Entry: 0x00281bf0, Ghidra index: 9054, label: FUN_00281bf0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 FUN_00281bf0(undefined2 *param_1)

{
  uint *puVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  undefined4 *unaff_ESI;
  
  uVar2 = 0;
  if (unaff_ESI[0xa11] != unaff_ESI[0xa12]) {
LAB_00281c98:
    *param_1 = *(undefined2 *)((int)unaff_ESI + unaff_ESI[0xa11] * 2 + 0x404);
    unaff_ESI[0xa11] = unaff_ESI[0xa11] + 1;
    return uVar2;
  }
  iVar3 = (*(code *)unaff_ESI[0xa10])(unaff_ESI + 0x101,2,*unaff_ESI);
  if (-1 < iVar3) {
    uVar4 = (uint)*(ushort *)(unaff_ESI + 0x101);
    puVar1 = (uint *)((int)unaff_ESI + 0x406);
    unaff_ESI[0xa12] = uVar4;
    iVar3 = (*(code *)unaff_ESI[0xa10])(puVar1,uVar4 * 2 + -2,*unaff_ESI);
    if (-1 < iVar3) {
      if (unaff_ESI[0xa14] == 0x101) {
        uVar4 = *puVar1;
        unaff_ESI[0xa11] = 3;
      }
      else {
        uVar4 = (uint)*(ushort *)puVar1;
        unaff_ESI[0xa11] = 2;
      }
      unaff_ESI[0xa13] = uVar4;
      uVar2 = 1;
      unaff_ESI[0xa01] = 1;
      unaff_ESI[0xa04] = 3;
      goto LAB_00281c98;
    }
  }
  return 0xffffffff;
}
