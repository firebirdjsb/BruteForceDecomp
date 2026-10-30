/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 74CFD3F91C2809C374FA9FEEE8428549E4D082CDEB782BE50630C199EEBE2EE2
 * Entry: 0x0006a310, Ghidra index: 1190, label: FUN_0006a310
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
extern void FUN_0006a3d0(void);

void FUN_0006a310(void)

{
  int in_EAX;
  int unaff_ESI;
  
  for (; in_EAX != unaff_ESI; in_EAX = in_EAX + 0x50) {
    FUN_0006a3d0();
  }
  return;
}
