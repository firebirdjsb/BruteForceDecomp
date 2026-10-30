/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: FE7DC31693D4A8C15BFD78B5B79D51F481698B6688B68B61EF94525746EE8680
 * Entry: 0x000c0940, Ghidra index: 2342, label: FUN_000c0940
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
extern void FUN_000c10d0(void);
extern undefined4 FUN_000bb220(void);
extern void FUN_000c0d90(int param_1);
extern void FUN_000c1120(void);

void FUN_000c0940(void)

{
  int unaff_ESI;
  
  if ((*(int *)(unaff_ESI + 0x68) != 0) &&
     (*(int *)(unaff_ESI + 0x6c) - *(int *)(unaff_ESI + 0x68) >> 2 != 0)) {
    if (((*(byte *)(unaff_ESI + 0xbc) & 1) == 0) && (*(char *)(unaff_ESI + 0x7c) == '\0')) {
      FUN_000c10d0();
      FUN_000bb220(0x1bdc87d1);
    }
    FUN_000c0d90(unaff_ESI);
    return;
  }
  if (((*(byte *)(unaff_ESI + 0xbc) & 1) != 0) && ((*(byte *)(unaff_ESI + 0xbc) & 8) == 0)) {
    FUN_000c1120();
    FUN_000bb220(0xffbe0bb9);
  }
  return;
}
