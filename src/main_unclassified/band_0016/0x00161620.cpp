/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 6BD06119D478C5637F6361CEB5F5A2AA61BE61BA9BCBC95150388C1855BC46C2
 * Entry: 0x00161620, Ghidra index: 4608, label: FUN_00161620
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* Source-matched draft declaration only; original Xbox ABI_UNVERIFIED. */
extern void FUN_00160050(void);
void FUN_00161620(void)

{
  int in_EAX;
  int unaff_ESI;
  
  for (; in_EAX != unaff_ESI; in_EAX = in_EAX + 0x3d4) {
    FUN_00160050();
  }
  return;
}
