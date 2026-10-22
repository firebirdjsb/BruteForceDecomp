/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: D68F5963A20BC66EF098B9897A9D1C982ADCD66564A16B8A2386FC16E82FF224
 * Entry: 0x00054e00, Ghidra index: 801, label: FUN_00054e00
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
float10 FUN_00054e00(void)

{
  int iVar1;
  int unaff_ESI;
  float local_4;
  
  local_4 = 0.0;
  if ((*(int **)(unaff_ESI + 4) != (int *)0x0) &&
     (iVar1 = (**(code **)(**(int **)(unaff_ESI + 4) + 0xf4))(), iVar1 != 0)) {
    if (((*(byte *)(unaff_ESI + 0x18) & 1) != 0) && (0.0 < *(float *)(unaff_ESI + 0x14))) {
      local_4 = 0.25;
    }
    iVar1 = (**(code **)(**(int **)(unaff_ESI + 4) + 0xf4))();
    switch(*(undefined4 *)(iVar1 + 0x770)) {
    case 0:
      local_4 = local_4 - 0.25;
      break;
    case 1:
      local_4 = local_4 + 0.25;
      break;
    case 2:
    case 3:
      local_4 = local_4 + 0.5;
    }
    iVar1 = (**(code **)(*(int *)(*(int *)(unaff_ESI + 4) + 0x1b4) + 8))();
    return (float10)*(float *)(iVar1 + 0x88) + (float10)local_4;
  }
  return (float10)0.0;
}
