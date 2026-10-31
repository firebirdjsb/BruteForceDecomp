/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 666526C9A99C75815ED7E5A5608531311BCB3C4F207794EEEDA96172D10B9288
 * Entry: 0x00161720, Ghidra index: 4612, label: FUN_00161720
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* Source-matched draft declaration only; original Xbox ABI_UNVERIFIED. */
extern void FUN_001604c0(void);
void FUN_00161720(void)

{
  int in_EAX;
  int unaff_EDI;
  
  for (; in_EAX != unaff_EDI; in_EAX = in_EAX + 0x1ac) {
    FUN_001604c0();
  }
  return;
}
