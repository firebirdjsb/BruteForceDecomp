/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 9D7B481E55A6E7A10D5E5244E36F5C20CD6A247B0B27FBCB54B5AF44A3C83F7C
 * Entry: 0x00168880, Ghidra index: 4739, label: FUN_00168880
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00168880(void)

{
  int in_EAX;
  int unaff_EBX;
  
  *(int *)(unaff_EBX + 0x2c) = in_EAX;
  if (*(int *)(unaff_EBX + 0x28) < in_EAX) {
    *(int *)(unaff_EBX + 0x28) = in_EAX + 0x20;
    FUN_00167e50();
    FUN_00143e20(0);
    FUN_00143e20(0);
    FUN_00143e20(0);
    FUN_00143e20(0);
    FUN_00143e20(0);
    FUN_00143e20(0);
    FUN_00143e20(0);
    FUN_00167e50();
    FUN_00167e50();
    FUN_0014c470(0);
    *(undefined4 *)(unaff_EBX + 0x40) = 0;
    FUN_0014c470(0);
    *(undefined4 *)(unaff_EBX + 0x54) = 0;
  }
  return;
}
