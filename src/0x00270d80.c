/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 1C6EA813CCD336D2CBFA66B4FE28EDB79EB4A67EE5F0C2C66BFB3F8B74F2CD66
 * Entry: 0x00270d80, Ghidra index: 8800, label: FUN_00270d80
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00270d80(int param_1,undefined1 param_2)

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
  unaff_ESI[10] = *(undefined4 *)(param_1 + 0x1c);
  *(undefined1 *)(unaff_ESI + 0xb) = param_2;
  *(undefined1 *)((int)unaff_ESI + 0x2d) = 0;
  return;
}
