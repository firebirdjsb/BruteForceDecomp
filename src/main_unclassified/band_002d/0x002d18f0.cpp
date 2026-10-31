/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 5E657EAABE2C30FDE232AF265BAF82B7B0AD91F9B1CF2F6B4B7AD741A7BCC3C8
 * Entry: 0x002d18f0, Ghidra index: 10188, label: FUN_002d18f0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* Existing Ghidra callee draft declarations only; implicit guest registers ABI_UNVERIFIED. */
extern void FUN_002b3c60(void);
extern void FUN_002ce3a0(void);
void FUN_002d18f0(int param_1)

{
  int in_ECX;
  
  FUN_002b3c60();
  *(undefined4 *)(in_ECX + 0x2c + param_1 * 4) = 0;
  FUN_002ce3a0();
  return;
}
