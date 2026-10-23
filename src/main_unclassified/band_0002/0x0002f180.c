/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 78DD155A47A8897F5C909341346CBE6F02E7C2D87D2939ECD368B94413345011
 * Entry: 0x0002f180, Ghidra index: 309, label: FUN_0002f180
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 FUN_0002f180(int *param_1)

{
  int iVar1;
  int in_ECX;
  
  if (*(int *)(in_ECX + 0x118) <= *(int *)(in_ECX + 0x11c)) {
    return 0;
  }
  iVar1 = (**(code **)(*param_1 + 0xf8))();
  if ((iVar1 != 0) &&
     (((*(int *)(iVar1 + 0x44) == 0x13 ||
       ((*(int *)(iVar1 + 0x44) == 0x78 && (*(int *)(iVar1 + 0x798) == 0)))) &&
      (*(int *)(iVar1 + 0x518) != 0)))) {
    return 0;
  }
  *(int *)(in_ECX + 0x11c) = *(int *)(in_ECX + 0x11c) + 1;
  return 1;
}
