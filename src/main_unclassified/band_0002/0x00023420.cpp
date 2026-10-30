/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: B90DD06D319CA075BF1567F2421B1CE31E7152FAC4ACA3CF995AC2899D927E6D
 * Entry: 0x00023420, Ghidra index: 224, label: FUN_00023420
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 FUN_00023420(void)

{
  int iVar1;
  int in_EAX;
  int unaff_EBX;
  
  if (((-1 < (int)(unaff_EBX + 1U)) && (iVar1 = *(int *)(in_EAX + 4), iVar1 != 0)) &&
     (unaff_EBX + 1U < (uint)((*(int *)(in_EAX + 8) - iVar1) / 0x18))) {
    return *(undefined4 *)(iVar1 + 0x2c + unaff_EBX * 0x18);
  }
  return 0;
}
