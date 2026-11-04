/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 8E4221760A853C59B10EB673AD32576E4D9E32A901FFD3B0C7072629C07D96F4
 * Entry: 0x0037ffe5, Ghidra index: 13522, label: FUN_0037ffe5
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* Source-draft declaration only; Xbox x86 guest ABI_UNVERIFIED. */
extern void FUN_0037ff13(undefined4 param_1,int param_2);
void FUN_0037ffe5(void)

{
  int in_ECX;
  
  if ((*(uint *)(in_ECX + 0xc) & 0x80000) == 0) {
    *(uint *)(in_ECX + 0xc) = *(uint *)(in_ECX + 0xc) | 0x80000;
    FUN_0037ff13(0,in_ECX);
  }
  return;
}
