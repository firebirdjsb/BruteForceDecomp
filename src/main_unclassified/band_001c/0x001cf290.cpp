/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 66DC343E4D0FF4C4741AE2853F5FC8BB286FF1FA2E41BA85A0B81BF879174D99
 * Entry: 0x001cf290, Ghidra index: 6100, label: FUN_001cf290
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* Callee-draft-matched declaration for C++17 name lookup only; Xbox ABI_UNVERIFIED. */
extern void FUN_001d1c00(void);
void FUN_001cf290(int param_1,int param_2)

{
  for (; param_1 != param_2; param_1 = param_1 + 0x40) {
    FUN_001d1c00();
  }
  return;
}
