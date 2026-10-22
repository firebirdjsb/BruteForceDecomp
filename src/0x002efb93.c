/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: F93537B4803BB5BFE84AA4971724007B90054FF45643CEB7A2DBCE578BA84310
 * Entry: 0x002efb93, Ghidra index: 10726, label: FUN_002efb93
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_002efb93(void)

{
  char cVar1;
  char *pcVar2;
  char *in_ECX;
  int unaff_ESI;
  
  if (unaff_ESI != 0) {
    pcVar2 = in_ECX;
    do {
      cVar1 = *pcVar2;
      pcVar2 = pcVar2 + 1;
    } while (cVar1 != '\0');
    _memmove(in_ECX + unaff_ESI,in_ECX,(size_t)(pcVar2 + (1 - (int)(in_ECX + 1))));
  }
  return;
}
