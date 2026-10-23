/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: BFD8CBFD117C276D44024DC1742A8DE53E7B76AD1337A6F3CB58BF3456E3B11E
 * Entry: 0x00343a65, Ghidra index: 12721, label: FUN_00343a65
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 FUN_00343a65(int param_1,uint param_2,uint *param_3)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  
  iVar2 = FUN_003439cc(param_1,1);
  if (iVar2 != 0) {
    uVar3 = (uint)**(byte **)(param_1 + 0x24);
    uVar4 = uVar3 & 0x1f;
    uVar5 = uVar3 & 0xe0;
    *(byte **)(param_1 + 0x24) = *(byte **)(param_1 + 0x24) + 1;
    if (uVar4 == 0x1f) {
      uVar4 = 0;
      do {
        iVar2 = FUN_003439cc(param_1,1);
        if (iVar2 == 0) {
          return 0;
        }
        bVar1 = **(byte **)(param_1 + 0x24);
        *(byte **)(param_1 + 0x24) = *(byte **)(param_1 + 0x24) + 1;
        if ((uVar4 & 0xe0000000) != 0) goto LAB_00343ae4;
        uVar4 = uVar4 << 7 | bVar1 & 0x7f;
      } while ((char)bVar1 < '\0');
    }
    if (param_3 != (uint *)0x0) {
      *param_3 = uVar3 & 0x20;
      uVar5 = uVar3 & 0xc0;
    }
    if (param_2 == (uVar5 << 0x18 | uVar4)) {
      return 1;
    }
LAB_00343ae4:
    FUN_00343377(param_1,0xfffffc0d);
  }
  return 0;
}
