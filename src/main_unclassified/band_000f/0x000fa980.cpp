/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 7BF4E97DBC86B6E8FCB6E9E477840F885F75DA4276DB4483148705A7D324C543
 * Entry: 0x000fa980, Ghidra index: 3131, label: FUN_000fa980
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 FUN_000fa980(int param_1)

{
  if ((*(int *)(param_1 + 0x24) == -0xb018149) || (*(int *)(param_1 + 0x24) == -0xd4c479f)) {
    FUN_001eda80();
    FUN_001092e0(*(undefined4 *)(param_1 + 0xa8));
  }
  FUN_000fa890(param_1);
  FUN_000fa560();
  return 1;
}
