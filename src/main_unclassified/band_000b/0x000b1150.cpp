/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: A3A87C88516287E1BBC8EE4C9315D72CAA86B656241A3339AE7A85ECB4665B47
 * Entry: 0x000b1150, Ghidra index: 2107, label: FUN_000b1150
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
extern void FUN_000b1800(undefined4 param_1,int param_2);

int FUN_000b1150(void)

{
  int unaff_ESI;
  int unaff_EDI;
  
  FUN_000b1800();
  return unaff_ESI * 0x2c + unaff_EDI;
}
