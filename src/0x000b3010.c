/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 3A0873B41B77D3E695AB5DEE2002674B4A10CD1C83C7C33E71F9DB30F1B8B41B
 * Entry: 0x000b3010, Ghidra index: 2162, label: FUN_000b3010
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_000b3010(int param_1,float param_2)

{
  int iVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  
  fVar2 = param_2 * 0.1;
  if (param_2 * 0.1 <= 0.25) {
    fVar2 = 0.25;
  }
  if (1.0 <= fVar2) {
    fVar2 = 1.0;
  }
  iVar1 = *(int *)(*(int *)(param_1 + 0x34) + 0xec);
  *(float *)(iVar1 + 0x30) = fVar2 * 0.3;
  *(undefined1 *)(iVar1 + 0x2c) = 0xff;
  *(float *)(iVar1 + 0x34) = fVar2 * 0.9;
  *(undefined1 *)(iVar1 + 0x2d) = 0;
  *(undefined1 *)(iVar1 + 0x2e) = 0;
  *(byte *)(iVar1 + 0x13) = *(byte *)(iVar1 + 0x13) & 0xfe;
  *(float *)(iVar1 + 0x38) = (fVar2 * 0.9) / (fVar2 * 0.3);
  fVar4 = fVar2;
  (**(code **)(**(int **)(*(int *)(param_1 + 0x34) + 0xe0) + 0x40))(fVar2);
  (**(code **)(*(int *)(*(int *)(*(int *)(param_1 + 0x34) + 0xe0) + 0x1b4) + 0x28))();
  FUN_000a0c60();
  if (uStack_38 * uStack_38 + uStack_34 * uStack_34 + uStack_3c * uStack_3c == 0.0) {
    fVar3 = 0.5;
    if (0.5 <= fVar2) {
      fVar3 = fVar2;
    }
    fVar4 = fVar3;
    FUN_000b2c20(*(undefined4 *)(param_1 + 100),fVar3);
    FUN_000b2c20(*(undefined4 *)(param_1 + 0x68),fVar3);
    FUN_000b2c20(*(undefined4 *)(param_1 + 0x6c),fVar3);
    FUN_000b2c20(*(undefined4 *)(param_1 + 0x70),fVar3);
  }
  if ((ABS(uStack_34) < uStack_38) && (ABS(uStack_3c) < uStack_38)) {
    FUN_000b2c20(*(undefined4 *)(param_1 + 100),fVar4);
    return;
  }
  if (ABS(uStack_34) <= ABS(uStack_3c)) {
    if (uStack_3c < 0.0) {
      FUN_000b2c20(*(undefined4 *)(param_1 + 0x6c),fVar4);
      return;
    }
    FUN_000b2c20(*(undefined4 *)(param_1 + 0x70),fVar4);
    return;
  }
  if (0.0 < uStack_34) {
    FUN_000b2c20(*(undefined4 *)(param_1 + 0x68),fVar4);
    return;
  }
  FUN_000b2c20(*(undefined4 *)(param_1 + 100),fVar4);
  return;
}
