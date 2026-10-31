/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 90DEAF4A44625BD8E8B7A8202D06FE26AFA62229747CBBBD2AE21964233D0A30
 * Entry: 0x0022f170, Ghidra index: 7734, label: FUN_0022f170
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* Source-draft declaration only; original Xbox guest ABI remains ABI_UNVERIFIED. */
extern void FUN_0021c8c0(undefined4 param_1);
void FUN_0022f170(void)

{
  int unaff_ESI;
  
  if ((*(int *)(unaff_ESI + 0x36c + *(int *)(unaff_ESI + 0x1fc) * 8) != 0) &&
     (((*(byte *)(unaff_ESI + 0x224) & 0x40) != 0 ||
      (*(float *)(unaff_ESI + 0x21c) < 0.0 != (*(float *)(unaff_ESI + 0x21c) == 0.0))))) {
    FUN_0021c8c0(0);
    *(float *)(unaff_ESI + 0x21c) =
         1.0 / *(float *)(*(int *)(unaff_ESI + 0x228) + 0xcc) + *(float *)(unaff_ESI + 0x21c);
  }
  return;
}
