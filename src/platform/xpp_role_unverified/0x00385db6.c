/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 28584583B8EB8A8741C992A6803D1F827E1E8EBF47BAA6E35AB16491F79164DB
 * Entry: 0x00385db6, Ghidra index: 13685, label: FUN_00385db6
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00385db6(void)

{
  uint *in_ECX;
  uint *in_EDX;
  uint uVar1;
  uint *unaff_retaddr;
  
  MmGetPhysicalAddress(*in_ECX);
  uVar1 = 0x1000 - (*in_ECX & 0xfff);
  *unaff_retaddr = uVar1;
  if (*in_EDX < uVar1) {
    *unaff_retaddr = *in_EDX;
  }
  *in_EDX = *in_EDX - *unaff_retaddr;
  *in_ECX = *in_ECX + *unaff_retaddr;
  return;
}
