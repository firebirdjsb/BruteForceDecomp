/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 79FD08D4CD62B814EB2C9ABCC69FA9C966E8E615002C80009DF18EFE6E2DF4A6
 * Entry: 0x0010f460, Ghidra index: 3527, label: FUN_0010f460
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 * FUN_0010f460(undefined4 *param_1)

{
  undefined4 *in_EAX;
  int unaff_EBX;
  
  *param_1 = *in_EAX;
  param_1[2] = 0;
  if (*(int *)(unaff_EBX + 4) != 0) {
    FUN_0008f6a0(*(int *)(unaff_EBX + 4));
  }
  param_1[4] = 0;
  if (*(int *)(unaff_EBX + 0xc) != 0) {
    FUN_0008f6a0(*(int *)(unaff_EBX + 0xc));
  }
  param_1[5] = *(undefined4 *)(unaff_EBX + 0x10);
  return param_1;
}
