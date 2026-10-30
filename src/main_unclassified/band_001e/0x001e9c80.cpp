/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 4F31986542829F047052A3EE9573F5AAEC6DDCBD469F31B4E4E73AA6292E8F52
 * Entry: 0x001e9c80, Ghidra index: 6864, label: FUN_001e9c80
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_001e9c80(uint *param_1,uint *param_2)

{
  uint uVar1;
  uint *puVar2;
  uint *puVar3;
  uint *puVar4;
  uint *puVar5;
  
  if ((param_1 != param_2) && (puVar4 = param_1 + 8, puVar4 != param_2)) {
    puVar5 = param_1 + 0x10;
    do {
      uVar1 = *puVar4;
      puVar2 = param_1;
      if (uVar1 < *param_1) {
joined_r0x001e9cdb:
        if ((puVar2 != puVar4) && (puVar4 != puVar5)) {
          FUN_001ea180(puVar2,puVar4,puVar5,0,0);
        }
      }
      else {
        puVar3 = puVar5 + -0x10;
        if (uVar1 < puVar5[-0x10]) {
          do {
            puVar2 = puVar3;
            puVar3 = puVar2 + -8;
          } while (uVar1 < *puVar3);
          goto joined_r0x001e9cdb;
        }
      }
      puVar4 = puVar4 + 8;
      puVar5 = puVar5 + 8;
    } while (puVar4 != param_2);
  }
  return;
}
