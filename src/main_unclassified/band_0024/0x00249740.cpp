/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 2866CEB125C1B7709045A02B196059733D115A8D0FEF40C45AF54208611DE87C
 * Entry: 0x00249740, Ghidra index: 8184, label: FUN_00249740
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* Source-matched three-stack-word draft declaration; original Xbox ECX is ABI_UNVERIFIED. */
extern void FUN_0001f4f0(int param_1, uint param_2, uint param_3);
void FUN_00249740(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 *unaff_EDI;
  
  if (param_1 != param_2) {
    do {
      *param_1 = *unaff_EDI;
      param_1[1] = unaff_EDI[1];
      param_1[2] = unaff_EDI[2];
      param_1[3] = unaff_EDI[3];
      param_1[4] = unaff_EDI[4];
      FUN_0001f4f0(unaff_EDI + 5,0,0xffffffff);
      param_1[0xc] = unaff_EDI[0xc];
      param_1[0xd] = unaff_EDI[0xd];
      param_1 = param_1 + 0xe;
    } while (param_1 != param_2);
  }
  return;
}
