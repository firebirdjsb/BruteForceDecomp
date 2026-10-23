/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 37B806907E39E19BA7B5CBFBDACBE8AD97FBD7FFA2EF0FDE3519D8AB50EF61EA
 * Entry: 0x002f77c9, Ghidra index: 10922, label: FUN_002f77c9
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_002f77c9(void)

{
  int unaff_EBX;
  int unaff_EBP;
  
  if (*(char *)(unaff_EBP + -0x1d) != '\0') {
    RtlLeaveCriticalSection(*(undefined4 *)(unaff_EBX + 0x580));
  }
  return;
}
