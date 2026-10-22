/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 46237831B17B09DAF7DFED344C93623DAD338D815E623E64C5A08E1055FF9B27
 * Entry: 0x001d07c0, Ghidra index: 6187, label: FUN_001d07c0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_001d07c0(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 *unaff_EDI;
  
  if (param_1 != param_2) {
    do {
      *param_1 = *unaff_EDI;
      param_1[1] = unaff_EDI[1];
      param_1[2] = unaff_EDI[2];
      *(undefined1 *)(param_1 + 3) = *(undefined1 *)(unaff_EDI + 3);
      *(undefined1 *)((int)param_1 + 0xd) = *(undefined1 *)((int)unaff_EDI + 0xd);
      FUN_0001f4f0(unaff_EDI + 4,0,0xffffffff);
      param_1 = param_1 + 0xb;
    } while (param_1 != param_2);
  }
  return;
}
