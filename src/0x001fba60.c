/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: D30C8208995CE8C50E01CDBCCF24D14D756EBBC3EB12ADB9A1038FDA66BBE40F
 * Entry: 0x001fba60, Ghidra index: 7124, label: FUN_001fba60
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_001fba60(void)

{
  int in_EAX;
  int in_ECX;
  
  if (*(int *)(in_ECX + 0xb4) != in_EAX) {
    FUN_0008f6a0();
  }
  return;
}
