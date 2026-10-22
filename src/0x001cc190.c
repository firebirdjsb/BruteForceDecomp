/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 7408C477814C308C3BAD7F4EE4756266458D28768EA4CFF71C53E13C2F9882C0
 * Entry: 0x001cc190, Ghidra index: 5910, label: FUN_001cc190
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int FUN_001cc190(void)

{
  int unaff_ESI;
  int unaff_EDI;
  
  FUN_001daaa0();
  return unaff_EDI + unaff_ESI * 0x28;
}
