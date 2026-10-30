/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 15DB3BEB9A1C87DF07FD9BC1BE2C09EBE2389CCB67416B45F1E2FB74160DD6F4
 * Entry: 0x00377b60, Ghidra index: 13461, label: FUN_00377b60
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 FUN_00377b60(void)

{
  code *pcVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int *unaff_ESI;
  int local_4;
  
  *(undefined4 *)(*unaff_ESI + 0x9100) = 1;
  iVar3 = unaff_ESI[0x210];
  if ((iVar3 == -1) || (unaff_ESI[iVar3 * 2 + 0x20c] == 0 && unaff_ESI[iVar3 * 2 + 0x20d] == 0)) {
    *(undefined4 *)(*unaff_ESI + 0x9140) = 0;
    unaff_ESI[0x207] = 0;
    return 0;
  }
  local_4 = 0;
  while( true ) {
    uVar4 = iVar3 + 1U & 0x80000001;
    if ((int)uVar4 < 0) {
      uVar4 = (uVar4 - 1 | 0xfffffffe) + 1;
    }
    unaff_ESI[0x210] = uVar4;
    unaff_ESI[iVar3 * 2 + 0x20c] = 0;
    unaff_ESI[iVar3 * 2 + 0x20d] = 0;
    if (iVar3 == unaff_ESI[0x211]) {
      pcVar1 = (code *)unaff_ESI[0x212];
      unaff_ESI[0x211] = -1;
      if (pcVar1 != (code *)0x0) {
        unaff_ESI[0x212] = 0;
        (*pcVar1)(unaff_ESI[0x213]);
      }
    }
    else {
      uVar4 = unaff_ESI[0x208];
      if ((unaff_ESI[0x209] != 0) || (uVar4 != 0)) {
        iVar3 = unaff_ESI[0x20b] + unaff_ESI[0x209] + (uint)CARRY4(unaff_ESI[0x20a],uVar4);
        unaff_ESI[0x20a] = unaff_ESI[0x20a] + uVar4;
        unaff_ESI[0x20b] = iVar3;
        FUN_00374d57(unaff_ESI[0x20a],iVar3,1);
        FUN_00377a50();
      }
    }
    iVar3 = unaff_ESI[0x210];
    uVar4 = unaff_ESI[iVar3 * 2 + 0x20d];
    if (unaff_ESI[iVar3 * 2 + 0x20c] == 0 && uVar4 == 0) {
      return 0;
    }
    uVar2 = *(uint *)(*unaff_ESI + 0x9410);
    if (uVar2 < uVar4) {
      return 0;
    }
    if ((uVar2 == uVar4) && (*(uint *)(*unaff_ESI + 0x9400) < (uint)unaff_ESI[iVar3 * 2 + 0x20c]))
    break;
    local_4 = local_4 + 1;
    if (1 < local_4) {
      return 0;
    }
  }
  return 0;
}
