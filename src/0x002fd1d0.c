/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 4C46303C70CC0C1EA8A09B2B3F4E60557F8F1107BDBB05E5F9594E73B099014B
 * Entry: 0x002fd1d0, Ghidra index: 10989, label: FUN_002fd1d0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_002fd1d0(void)

{
  int in_EAX;
  
  if (in_EAX == 0x80) {
    FUN_002fbce0();
    FUN_002fc290();
    FUN_002fbce0();
    FUN_002fbce0();
    return;
  }
  FUN_002fc910();
  FUN_002fcb00();
  FUN_002fc910();
  FUN_002fc910();
  return;
}
