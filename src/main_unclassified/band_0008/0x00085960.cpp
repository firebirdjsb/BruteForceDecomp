/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 99F71F10159316B2EE6D69B74A254E1AFD447C7545E7064FE4F7F0C32A1ABE24
 * Entry: 0x00085960, Ghidra index: 1571, label: FUN_00085960
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
extern void FUN_00086ed0(void);

void FUN_00085960(void)

{
  int in_EAX;
  int unaff_ESI;
  
  for (; in_EAX != unaff_ESI; in_EAX = in_EAX + 0x6c) {
    FUN_00086ed0();
  }
  return;
}
