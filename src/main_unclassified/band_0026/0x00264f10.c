/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 833DCA1F4796DBFED5DE6A48F60D2335942E424464128B1474C33BA89B6EAE9A
 * Entry: 0x00264f10, Ghidra index: 8716, label: FUN_00264f10
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
uint FUN_00264f10(uint *param_1)

{
  uint uVar1;
  uint in_EAX;
  uint *puVar2;
  uint *unaff_EBX;
  uint uVar3;
  uint *unaff_EDI;
  uint local_4;
  
  if ((unaff_EDI[1] != 0) && (unaff_EBX[1] != 0)) {
    in_EAX = *unaff_EDI;
    local_4 = in_EAX + unaff_EDI[1];
    uVar1 = *unaff_EBX;
    if ((uVar1 <= local_4) && (uVar3 = unaff_EBX[1] + uVar1, in_EAX <= uVar3)) {
      if (in_EAX <= uVar1) {
        unaff_EDI = unaff_EBX;
      }
      uVar1 = *unaff_EDI;
      *param_1 = uVar1;
      puVar2 = (uint *)&param_1;
      if (local_4 <= uVar3) {
        puVar2 = &local_4;
      }
      param_1[1] = *puVar2 - uVar1;
      return CONCAT31((int3)(uVar1 >> 8),1);
    }
  }
  return in_EAX & 0xffffff00;
}
