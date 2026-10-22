/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 7507FEA563BEF2C3F830D46DA5E5EE01BB5CA0C23B8A817CB13014182DE49505
 * Entry: 0x0013e910, Ghidra index: 4031, label: FUN_0013e910
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 FUN_0013e910(void)

{
  int iVar1;
  int in_ECX;
  
  if (*(float *)(in_ECX + 4) <= *(float *)(*(int *)(in_ECX + 0x18) + 0x490)) {
    FUN_0013e410(0);
    FUN_001258d0(*(int *)(in_ECX + 0x18),
                 *(float *)(*(int *)(in_ECX + 0x18) + 0x490) - *(float *)(in_ECX + 4));
    if (*(int *)(in_ECX + 0x18) != 0) {
      iVar1 = FUN_0006ef00();
      *(undefined4 *)(*(int *)(iVar1 + 0xfc) + 0x74) = 0x3e4ccccd;
    }
  }
  return 0;
}
