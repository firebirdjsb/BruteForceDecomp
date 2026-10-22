/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: C565F57B5EEFDFF0002F98EE68AE4A1B5DF1E1D53206D5F4A83D8BFEEE21A622
 * Entry: 0x0033c73f, Ghidra index: 12559, label: FUN_0033c73f
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 FUN_0033c73f(void)

{
  int iVar1;
  int in_ECX;
  
  if (*(int *)(in_ECX + 0x14) != 1) {
    iVar1 = FUN_00330c3e(*(undefined4 *)(in_ECX + 0x18));
    *(int *)(in_ECX + 0x2c) = iVar1;
    if ((iVar1 != 0) && (*(undefined4 *)(in_ECX + 0x14) = 1, -1 < iVar1)) {
      iVar1 = FUN_0033bfe2(*(undefined4 *)(*(int *)(in_ECX + 0x10) + 0x18));
      iVar1 = FUN_0033bcae(iVar1 << 9);
      if (iVar1 < 0) {
        *(int *)(in_ECX + 0x2c) = iVar1;
      }
    }
    if (*(int *)(in_ECX + 0x14) == 1) {
      *(undefined4 *)(in_ECX + 0x18) = 0;
    }
  }
  return *(undefined4 *)(in_ECX + 0x2c);
}
