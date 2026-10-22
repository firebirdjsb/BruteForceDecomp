/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 89D582EFB2B047E558F44E82B0EB7DE20FA6D1D28910A3CF9602F3E1EC794118
 * Entry: 0x00263380, Ghidra index: 8673, label: FUN_00263380
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00263380(int *param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  int unaff_ESI;
  
  if (param_2 != param_3) {
    uVar1 = FUN_00061c40(param_3);
    FUN_00256480();
    *(undefined4 *)(unaff_ESI + 8) = uVar1;
  }
  *param_1 = param_2;
  return;
}
