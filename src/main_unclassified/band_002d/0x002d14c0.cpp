/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 1A6758E7B9DCE5F7F3C187A641E12B28E3C7E9B6B50C8AA24DF9BDA4963D2155
 * Entry: 0x002d14c0, Ghidra index: 10183, label: FUN_002d14c0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* Existing Ghidra callee draft declarations only; implicit guest registers ABI_UNVERIFIED. */
extern void FUN_002b3c60(void);
extern void FUN_002ce2c0(void);
void FUN_002d14c0(int param_1)

{
  int in_ECX;
  
  FUN_002b3c60();
  *(undefined4 *)(in_ECX + 0x20 + param_1 * 4) = 1;
  FUN_002ce2c0();
  return;
}
