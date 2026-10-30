/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: A6A34B89F8BCF14F1AB7C654E621E24BD2CACE272F015B6B76DE54D1A6758DFA
 * Entry: 0x0020d190, Ghidra index: 7363, label: FUN_0020d190
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int FUN_0020d190(void)

{
  int unaff_ESI;
  int unaff_EDI;
  
  FUN_0005ecb0();
  return unaff_EDI + unaff_ESI * 8;
}
