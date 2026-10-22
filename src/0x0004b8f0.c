/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: A5B8AACB8E1ECBCABF3F8E2C94801CD4C758A558D4374F3E0D7E197FA7481A41
 * Entry: 0x0004b8f0, Ghidra index: 618, label: FUN_0004b8f0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0004b8f0(void)

{
  int *piVar1;
  int *in_ECX;
  int unaff_ESI;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  undefined4 uStack_8;
  
  piVar1 = (int *)(**(code **)(*in_ECX + 0xf4))();
  if (piVar1 != (int *)0x0) {
    uStack_20 = 0;
    uStack_1c = 0;
    uStack_18 = 0;
    uStack_14 = 0;
    uStack_10 = 0;
    uStack_8 = 0;
    uStack_c = *(undefined4 *)(unaff_ESI + 8);
    (**(code **)(*piVar1 + 0x1c))(&uStack_20);
  }
  return;
}
