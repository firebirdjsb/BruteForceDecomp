/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 6F78DE118D1A1E6F87E3E65F1C49B4645D1767300333DFF540D9A381C91F7282
 * Entry: 0x0033c78f, Ghidra index: 12560, label: FUN_0033c78f
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 FUN_0033c78f(void)

{
  int iVar1;
  int in_ECX;
  
  if (*(int *)(in_ECX + 0x14) != 1) {
    iVar1 = FUN_00330c3e(*(undefined4 *)(in_ECX + 0x18));
    *(int *)(in_ECX + 0x2c) = iVar1;
    if ((iVar1 != 0) && (*(undefined4 *)(in_ECX + 0x14) = 1, -1 < iVar1)) {
      iVar1 = FUN_0033bcae(0x200);
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
