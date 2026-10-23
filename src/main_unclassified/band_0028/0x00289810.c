/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: BEC05A3471469A0A30F7A44A3D0C0C964BD977D1BE7E2D0B46F9ADEDECEC99F7
 * Entry: 0x00289810, Ghidra index: 9132, label: FUN_00289810
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00289810(void)

{
  char cVar1;
  char *in_EAX;
  
  do {
    cVar1 = *in_EAX;
    in_EAX = in_EAX + 1;
  } while (cVar1 != '\0');
  FUN_00294640();
  FUN_00289580();
  return;
}
