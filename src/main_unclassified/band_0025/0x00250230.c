/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 7B8043E0EEE2C5322222B34A2ADA1EF69511D55F53E260FA0BE94078F3F3706C
 * Entry: 0x00250230, Ghidra index: 8341, label: FUN_00250230
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00250230(int param_1,undefined1 param_2)

{
  undefined4 in_EAX;
  undefined4 in_ECX;
  undefined4 in_EDX;
  undefined4 *unaff_ESI;
  
  unaff_ESI[1] = in_ECX;
  *unaff_ESI = in_EAX;
  unaff_ESI[2] = in_EDX;
  unaff_ESI[9] = 0xf;
  unaff_ESI[8] = 0;
  *(undefined1 *)(unaff_ESI + 4) = 0;
  FUN_0001f4f0(param_1,0,0xffffffff);
  unaff_ESI[0x10] = 0xf;
  unaff_ESI[0xf] = 0;
  *(undefined1 *)(unaff_ESI + 0xb) = 0;
  FUN_0001f4f0(param_1 + 0x1c,0,0xffffffff);
  *(undefined1 *)(unaff_ESI + 0x11) = param_2;
  *(undefined1 *)((int)unaff_ESI + 0x45) = 0;
  return;
}
