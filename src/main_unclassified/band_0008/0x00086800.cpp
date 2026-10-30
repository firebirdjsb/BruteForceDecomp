/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: EDF5742ABF8C79821C4AD34F8B2FE6792C86C79F9F0A136A9EBB41D9DEB6BE1B
 * Entry: 0x00086800, Ghidra index: 1585, label: FUN_00086800
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00086800(int param_1,int param_2)

{
  int unaff_EDI;
  
  for (; param_1 != param_2; param_1 = param_1 + 0x3c) {
    FUN_00087940(param_1,0,0xffffffff);
    *(undefined4 *)(param_1 + 0x1c) = *(undefined4 *)(unaff_EDI + 0x1c);
    *(undefined1 *)(param_1 + 0x20) = *(undefined1 *)(unaff_EDI + 0x20);
    *(undefined4 *)(param_1 + 0x24) = *(undefined4 *)(unaff_EDI + 0x24);
    *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(unaff_EDI + 0x28);
    *(undefined4 *)(param_1 + 0x2c) = *(undefined4 *)(unaff_EDI + 0x2c);
    *(undefined1 *)(param_1 + 0x30) = *(undefined1 *)(unaff_EDI + 0x30);
    *(undefined1 *)(param_1 + 0x31) = *(undefined1 *)(unaff_EDI + 0x31);
    *(undefined1 *)(param_1 + 0x32) = *(undefined1 *)(unaff_EDI + 0x32);
    *(undefined1 *)(param_1 + 0x33) = *(undefined1 *)(unaff_EDI + 0x33);
    *(undefined1 *)(param_1 + 0x34) = *(undefined1 *)(unaff_EDI + 0x34);
    *(undefined4 *)(param_1 + 0x38) = *(undefined4 *)(unaff_EDI + 0x38);
  }
  return;
}
