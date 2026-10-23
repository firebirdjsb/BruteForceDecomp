/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 63180264A727630EF0D44F29FDDF02F0A9ECA496B3CD85A5FF62126A5113C158
 * Entry: 0x0023c5c0, Ghidra index: 7931, label: FUN_0023c5c0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 FUN_0023c5c0(void)

{
  int iVar1;
  int *in_EAX;
  uint unaff_EDI;
  
  if (*in_EAX == 0) {
    return 0;
  }
  iVar1 = *(int *)(*in_EAX + 0x18);
  if (((iVar1 != 0) && (*(int *)(iVar1 + 4) != 0)) &&
     (unaff_EDI < (uint)((*(int *)(iVar1 + 8) - *(int *)(iVar1 + 4)) / 0xc))) {
    return *(undefined4 *)(*(int *)(iVar1 + 4) + 4 + unaff_EDI * 0xc);
  }
  return 0;
}
