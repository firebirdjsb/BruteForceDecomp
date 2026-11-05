/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: C38DA8745B1C0FACD0665A954618905DBF72A8EFE5BB3ABF403EBB5D7D8A44BC
 * Entry: 0x002e5900, Ghidra index: 10479, label: FUN_002e5900
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* Exact existing callee draft declaration only; Xbox ABI_UNVERIFIED.
 * Original caller passes incoming ECX+0x38 through ECX into this callee
 * and its downstream call. The unchanged zero-argument source call omits
 * that binding; in_ECX remains unbound. No guest pointer/ABI bridge is added.
 * These mismatches remain; do not execute this caller as game code. */
extern bool FUN_002e4940(void);
uint FUN_002e5900(void)

{
  char cVar1;
  int in_ECX;
  
  cVar1 = FUN_002e4940();
  return -(uint)(cVar1 != '\0') & in_ECX + 0x38U;
}
