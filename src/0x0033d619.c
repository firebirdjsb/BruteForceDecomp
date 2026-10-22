/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: E040087769D7251A5883761D5EB584E17BF924D9B8ADC4A49D291EFA4F51A00C
 * Entry: 0x0033d619, Ghidra index: 12584, label: FUN_0033d619
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0033d619(void)

{
  int iVar1;
  int in_ECX;
  
  iVar1 = *(int *)(in_ECX + 0x10) + 0x84c;
  *(int *)(in_ECX + 0x18) = iVar1;
  iVar1 = FUN_0033cff0(*(undefined4 *)(in_ECX + 0x20),iVar1);
  if (iVar1 < 0) {
    *(undefined4 *)(in_ECX + 0x18) = 0;
    *(int *)(in_ECX + 0x2c) = iVar1;
    *(undefined4 *)(in_ECX + 0x14) = 1;
    return;
  }
  *(undefined4 *)(in_ECX + 0x14) = 3;
  return;
}
