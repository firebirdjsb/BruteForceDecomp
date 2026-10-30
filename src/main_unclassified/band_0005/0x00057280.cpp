/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 79A5F916638397683A8F791E45871DD55507F55DE2BB44A9DF39E9800DD75966
 * Entry: 0x00057280, Ghidra index: 847, label: FUN_00057280
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
extern undefined1 FUN_000571e0(undefined4 *param_1);
extern void FUN_00057730(undefined4 param_1);

undefined4 FUN_00057280(void)

{
  char cVar1;
  undefined4 unaff_ESI;
  undefined4 unaff_EDI;
  
  cVar1 = FUN_000571e0(unaff_ESI);
  if (cVar1 != '\0') {
    FUN_00057730(unaff_EDI);
    return 1;
  }
  return 0;
}
