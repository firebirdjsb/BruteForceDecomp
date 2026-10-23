/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: CBA32BBE46DEBCC656057D17E38B8B0A245A136EE49225B8B112558BE5948D2B
 * Entry: 0x000761a0, Ghidra index: 1364, label: FUN_000761a0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_000761a0(undefined4 param_1,undefined1 param_2)

{
  undefined4 in_EAX;
  undefined4 in_ECX;
  undefined4 in_EDX;
  undefined4 *unaff_ESI;
  
  *unaff_ESI = in_EAX;
  unaff_ESI[1] = in_ECX;
  unaff_ESI[2] = in_EDX;
  FUN_000761d0();
  *(undefined1 *)(unaff_ESI + 10) = param_2;
  *(undefined1 *)((int)unaff_ESI + 0x29) = 0;
  return;
}
