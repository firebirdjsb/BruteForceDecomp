/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 07498DFE64BE6384FA0326CB43A79E35FC0BAF6350C1E1371ABF928AF89227F4
 * Entry: 0x00050630, Ghidra index: 704, label: FUN_00050630
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
extern void FUN_000512c0(void);

void FUN_00050630(void)

{
  int in_EAX;
  int unaff_EBX;
  
  for (; in_EAX != unaff_EBX; in_EAX = in_EAX + 0xc) {
    FUN_000512c0();
  }
  return;
}
