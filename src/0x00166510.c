/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: CD0890FE2FDD71E5A1E9275E1DF471A49AB156FF2263AB10A6E91E21ADB68578
 * Entry: 0x00166510, Ghidra index: 4716, label: FUN_00166510
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00166510(int *param_1)

{
  int *unaff_ESI;
  int *unaff_EDI;
  undefined1 local_520 [1312];
  
  if (*unaff_ESI < *unaff_EDI) {
    FUN_001662b0(unaff_ESI);
    FUN_001666b0(unaff_EDI);
    FUN_001666b0(local_520);
    FUN_001659a0();
  }
  if (*param_1 < *unaff_ESI) {
    FUN_001662b0(param_1);
    FUN_001666b0(unaff_ESI);
    FUN_001666b0(local_520);
    FUN_001659a0();
  }
  if (*unaff_ESI < *unaff_EDI) {
    FUN_001662b0(unaff_ESI);
    FUN_001666b0(unaff_EDI);
    FUN_001666b0(local_520);
    FUN_001659a0();
  }
  return;
}
