/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 7C7C60C584B2CAB8A23CB4BCBE907DFA9D6C7E3112CA436060A5B93FD5E0E763
 * Entry: 0x0025ad90, Ghidra index: 8529, label: FUN_0025ad90
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0025ad90(int param_1)

{
  if (*(char *)(param_1 + 0x15) == '\0') {
    FUN_0025ad90(*(undefined4 *)(param_1 + 8));
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0(param_1);
  }
  return;
}
