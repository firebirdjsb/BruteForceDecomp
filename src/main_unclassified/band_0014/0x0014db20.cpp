/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: E8353E5BB801780FB76410DAC601BF288CA620D2CDD83D8A2FFF92A2E812A4AD
 * Entry: 0x0014db20, Ghidra index: 4375, label: FUN_0014db20
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* Source-only C++17 call declaration; guest ABI_UNVERIFIED. */
extern undefined4 FUN_0014bfa0(void);
undefined4 FUN_0014db20(void)

{
  undefined4 uVar1;
  int in_ECX;
  
  if ((*(int *)(in_ECX + 0x1c0) == 10) && (*(int *)(in_ECX + 0x1c4) == -2)) {
    return *(undefined4 *)(in_ECX + 0x1ac);
  }
  if ((*(int *)(in_ECX + 0x1b4) != 0) &&
     ((*(int *)(in_ECX + 0x1c0) != 10 || (*(int *)(in_ECX + 0x1c4) != -1)))) {
    uVar1 = FUN_0014bfa0();
    return uVar1;
  }
  return 0;
}
