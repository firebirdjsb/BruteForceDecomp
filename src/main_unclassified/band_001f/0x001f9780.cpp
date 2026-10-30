/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 74FA6360A36130F189868CAB995BB7E193C4DFF4654DD83902941B0CECACDEC2
 * Entry: 0x001f9780, Ghidra index: 7076, label: FUN_001f9780
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_001f9780(void)

{
  undefined4 *puVar1;
  int unaff_ESI;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  if (*(int *)(unaff_ESI + 0xf8) != 0) {
    (**(code **)(*(int *)(unaff_ESI + 0xc) + 8))();
    FUN_002339d0(&uStack_20);
    uStack_c = uStack_18;
    uStack_4 = uStack_20;
    uStack_10 = uStack_1c;
    uStack_8 = uStack_14;
    uStack_14 = 0;
    puVar1 = (undefined4 *)(**(code **)(*(int *)(unaff_ESI + 8) + 4))();
    uStack_1c = puVar1[1];
    uStack_20 = *puVar1;
    uStack_18 = puVar1[2];
    FUN_002b39f0(0);
  }
  return;
}
