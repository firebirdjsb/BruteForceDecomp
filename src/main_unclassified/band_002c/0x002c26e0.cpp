/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 5A98C484DB193BB6CC8335E0920DF88396B1E36E16C1F8FAA14DA2E217EF9C00
 * Entry: 0x002c26e0, Ghidra index: 10039, label: FUN_002c26e0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_002c26e0(void)

{
  float fVar1;
  undefined4 *puVar2;
  float fVar3;
  undefined4 *puVar4;
  int unaff_EDI;
  
  fVar3 = -*(float *)(unaff_EDI + 0x10);
  fVar1 = *(float *)(unaff_EDI + 0x14);
  puVar4 = *(undefined4 **)(unaff_EDI + 0x20);
  while ((puVar4 != (undefined4 *)0x0 &&
         (puVar2 = (undefined4 *)*puVar4, puVar4 != (undefined4 *)0x0))) {
    puVar4[2] = fVar3 + (float)puVar4[2];
    (**(code **)(*(int *)puVar4[3] + 0xc))(fVar3,-fVar1);
    puVar4 = puVar2;
  }
  *(undefined4 *)(unaff_EDI + 0x10) = 0;
  *(undefined4 *)(unaff_EDI + 0x14) = 0;
  *(float *)(unaff_EDI + 0x24) = fVar3 + *(float *)(unaff_EDI + 0x24);
  *(float *)(unaff_EDI + 0x18) = fVar3 + *(float *)(unaff_EDI + 0x18);
  return;
}
