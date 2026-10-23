/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: DB1DC26810915CBA124B77BBB9451DB4D665C7B215E40BEB67E803F3D5B3FFDB
 * Entry: 0x00144280, Ghidra index: 4153, label: FUN_00144280
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int FUN_00144280(void)

{
  int unaff_ESI;
  int unaff_EDI;
  
  FUN_00144a40();
  return unaff_ESI * 0x10 + unaff_EDI;
}
