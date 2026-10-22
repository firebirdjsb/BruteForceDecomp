/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: B7794F4E50C61C52937A2D38EDA6835E9BD66DF037522E505325BC353D060A3D
 * Entry: 0x0033c6e5, Ghidra index: 12558, label: FUN_0033c6e5
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 FUN_0033c6e5(void)

{
  int iVar1;
  int in_ECX;
  
  if (*(int *)(in_ECX + 0x14) != 1) {
    iVar1 = FUN_00330c3e(*(undefined4 *)(in_ECX + 0x18));
    *(int *)(in_ECX + 0x2c) = iVar1;
    if ((iVar1 != 0) && (*(undefined4 *)(in_ECX + 0x14) = 1, -1 < iVar1)) {
      iVar1 = FUN_0033bcae(*(int *)(*(int *)(in_ECX + 0x10) + 0x10) << 9);
      if (iVar1 < 0) {
        *(int *)(in_ECX + 0x2c) = iVar1;
      }
    }
    if (*(int *)(in_ECX + 0x14) == 1) {
      FUN_0033bcdc();
      FUN_0033bd35();
      *(undefined4 *)(in_ECX + 0x10) = 0;
    }
  }
  return *(undefined4 *)(in_ECX + 0x2c);
}
