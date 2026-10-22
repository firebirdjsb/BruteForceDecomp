/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 557C516D6E43848A67D689271C18B492DA5AEA8E4FE709193B29F99A961F26D8
 * Entry: 0x003359fb, Ghidra index: 12441, label: FUN_003359fb
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 FUN_003359fb(int param_1,int param_2,int param_3)

{
  short sVar1;
  undefined4 *puVar2;
  int *piVar3;
  uint uVar4;
  int iVar5;
  
  if (0xf9 < *(ushort *)(param_1 + 0xc)) {
    sVar1 = *(ushort *)(param_1 + 0xc) - 0x19;
    uVar4 = 0;
    *(short *)(param_1 + 0xc) = sVar1;
    if (sVar1 != 0) {
      puVar2 = (undefined4 *)(param_1 + 0x30);
      do {
        *puVar2 = puVar2[100];
        puVar2[1] = puVar2[0x65];
        uVar4 = uVar4 + 1;
        puVar2 = puVar2 + 4;
      } while (uVar4 < *(ushort *)(param_1 + 0xc));
    }
  }
  uVar4 = 0;
  if (*(short *)(param_1 + 0xc) != 0) {
    piVar3 = (int *)(param_1 + 0x30);
    do {
      if ((*piVar3 == param_2) && (piVar3[1] == param_3)) {
        return 0;
      }
      uVar4 = uVar4 + 1;
      piVar3 = piVar3 + 4;
    } while (uVar4 < *(ushort *)(param_1 + 0xc));
  }
  iVar5 = (uVar4 + 3) * 0x10;
  *(int *)(iVar5 + param_1) = param_2;
  *(int *)(iVar5 + 4 + param_1) = param_3;
  *(short *)(param_1 + 0xc) = *(short *)(param_1 + 0xc) + 1;
  *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
  return 0;
}
