/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: B23362A2113BE313B10E49242594F86D50993563E3D973915E0E7424B7E6E41A
 * Entry: 0x00145ba0, Ghidra index: 4197, label: FUN_00145ba0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00145ba0(int param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int in_EAX;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  
  puVar6 = *(undefined4 **)(in_EAX + 8);
  puVar1 = *(undefined4 **)(in_EAX + 0xc);
  if (puVar6 != puVar1) {
    puVar5 = puVar6 + 2;
    puVar4 = (undefined4 *)(param_1 + 0xc);
    do {
      puVar4[-3] = *puVar6;
      uVar2 = puVar5[1];
      uVar3 = *puVar5;
      puVar4[-2] = puVar5[-1];
      puVar4[-1] = uVar3;
      *puVar4 = uVar2;
      puVar4[1] = puVar5[2];
      puVar4[2] = puVar5[3];
      puVar6 = puVar6 + 6;
      puVar5 = puVar5 + 6;
      puVar4 = puVar4 + 6;
    } while (puVar6 != puVar1);
  }
  return;
}
