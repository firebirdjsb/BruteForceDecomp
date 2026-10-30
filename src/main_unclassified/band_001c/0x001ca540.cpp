/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 55859F4471AE4B72FA0E64A440D43F07AAD02EDA936DCFECBF1A2E9F8B2D6803
 * Entry: 0x001ca540, Ghidra index: 5844, label: FUN_001ca540
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_001ca540(int param_1)

{
  int iVar1;
  int unaff_EBX;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  FUN_001ca1d0();
  *(undefined4 *)(unaff_EBX + 0x1a8) = *(undefined4 *)(param_1 + 0x1a8);
  puVar2 = (undefined4 *)(param_1 + 0x1ac);
  puVar3 = (undefined4 *)(unaff_EBX + 0x1ac);
  for (iVar1 = 5; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  puVar2 = (undefined4 *)(param_1 + 0x1c0);
  puVar3 = (undefined4 *)(unaff_EBX + 0x1c0);
  for (iVar1 = 8; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  FUN_001cabb0();
  *(undefined4 *)(unaff_EBX + 0x274) = *(undefined4 *)(param_1 + 0x274);
  *(undefined4 *)(unaff_EBX + 0x278) = *(undefined4 *)(param_1 + 0x278);
  *(undefined4 *)(unaff_EBX + 0x27c) = *(undefined4 *)(param_1 + 0x27c);
  *(undefined4 *)(unaff_EBX + 0x280) = *(undefined4 *)(param_1 + 0x280);
  *(undefined4 *)(unaff_EBX + 0x284) = *(undefined4 *)(param_1 + 0x284);
  *(undefined4 *)(unaff_EBX + 0x288) = *(undefined4 *)(param_1 + 0x288);
  *(undefined4 *)(unaff_EBX + 0x28c) = *(undefined4 *)(param_1 + 0x28c);
  *(undefined4 *)(unaff_EBX + 0x290) = *(undefined4 *)(param_1 + 0x290);
  *(undefined4 *)(unaff_EBX + 0x294) = *(undefined4 *)(param_1 + 0x294);
  *(undefined1 *)(unaff_EBX + 0x298) = *(undefined1 *)(param_1 + 0x298);
  FUN_001e0dd0(unaff_EBX + 0x29c);
  FUN_001e0dd0(unaff_EBX + 0x2ac);
  *(undefined4 *)(unaff_EBX + 700) = *(undefined4 *)(param_1 + 700);
  *(undefined4 *)(unaff_EBX + 0x2c0) = *(undefined4 *)(param_1 + 0x2c0);
  FUN_001e0dd0(unaff_EBX + 0x2c4);
  *(undefined4 *)(unaff_EBX + 0x2d4) = *(undefined4 *)(param_1 + 0x2d4);
  *(undefined4 *)(unaff_EBX + 0x2d8) = *(undefined4 *)(param_1 + 0x2d8);
  *(undefined4 *)(unaff_EBX + 0x2dc) = *(undefined4 *)(param_1 + 0x2dc);
  *(undefined4 *)(unaff_EBX + 0x2e0) = *(undefined4 *)(param_1 + 0x2e0);
  FUN_001e0dd0(unaff_EBX + 0x2e4);
  *(undefined4 *)(unaff_EBX + 0x2f4) = *(undefined4 *)(param_1 + 0x2f4);
  FUN_001e0dd0(unaff_EBX + 0x2f8);
  *(undefined4 *)(unaff_EBX + 0x308) = *(undefined4 *)(param_1 + 0x308);
  *(undefined4 *)(unaff_EBX + 0x30c) = *(undefined4 *)(param_1 + 0x30c);
  *(undefined4 *)(unaff_EBX + 0x310) = *(undefined4 *)(param_1 + 0x310);
  *(undefined4 *)(unaff_EBX + 0x314) = *(undefined4 *)(param_1 + 0x314);
  *(undefined1 *)(unaff_EBX + 0x318) = *(undefined1 *)(param_1 + 0x318);
  *(undefined4 *)(unaff_EBX + 0x31c) = *(undefined4 *)(param_1 + 0x31c);
  FUN_001bddb0(unaff_EBX + 800);
  *(undefined4 *)(unaff_EBX + 0x330) = *(undefined4 *)(param_1 + 0x330);
  FUN_001bddb0(unaff_EBX + 0x334);
  return;
}
