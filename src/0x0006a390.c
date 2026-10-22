/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: EB53E4804C21FA798BA9184A6ECDB308BF6FB5B5BE4D45BB5854FE7CB32672DB
 * Entry: 0x0006a390, Ghidra index: 1194, label: FUN_0006a390
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0006a390(void)

{
  int in_EAX;
  int unaff_ESI;
  
  for (; in_EAX != unaff_ESI; in_EAX = in_EAX + 0x30) {
    FUN_0006a4c0();
  }
  return;
}
