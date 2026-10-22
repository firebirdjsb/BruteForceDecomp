/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: B27B734E7A65F870AAA590B4D3D2CAA1A978A287968058FDF84A2BD6479B350B
 * Entry: 0x002d1560, Ghidra index: 10186, label: FUN_002d1560
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_002d1560(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  int in_ECX;
  
  FUN_002b3c60();
  if (*(int *)(in_ECX + 0x6c) == 0) {
    iVar1 = FUN_002ea01d(0x30);
    *(int *)(in_ECX + 0x6c) = iVar1;
    *(undefined4 *)(iVar1 + 0x2c) = 0;
    *(undefined4 *)(*(int *)(in_ECX + 0x6c) + 0x28) = 0;
    *(undefined4 *)(*(int *)(in_ECX + 0x6c) + 0x24) = 0;
  }
  *(undefined4 *)(*(int *)(in_ECX + 0x6c) + 8) = param_2;
  *(undefined4 *)(*(int *)(in_ECX + 0x6c) + 4) = param_2;
  **(undefined4 **)(in_ECX + 0x6c) = param_2;
  *(undefined4 *)(*(int *)(in_ECX + 0x6c) + 0x20) = param_1;
  *(undefined4 *)(*(int *)(in_ECX + 0x6c) + 0x1c) = param_1;
  *(undefined4 *)(*(int *)(in_ECX + 0x6c) + 0x18) = param_1;
  return;
}
