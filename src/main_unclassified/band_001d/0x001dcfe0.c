/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 707C38A79FFD0441E3A2623070A44753C8CD62C4723D88B85F9DED3651545DC0
 * Entry: 0x001dcfe0, Ghidra index: 6607, label: FUN_001dcfe0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_001dcfe0(void)

{
  int in_EAX;
  int unaff_ESI;
  
  if (in_EAX != 0) {
    FUN_000fdc90(unaff_ESI);
    *(undefined4 *)(in_EAX + 0x28) = *(undefined4 *)(unaff_ESI + 0x28);
  }
  return;
}
