/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: FF8FCD7319D143E322C65C3FE07D606245DB39C3313EF95C0A735D792E2C2DE5
 * Entry: 0x001dcda0, Ghidra index: 6594, label: FUN_001dcda0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_001dcda0(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 *in_EAX;
  undefined4 *in_ECX;
  
  if (in_EAX != (undefined4 *)0x0) {
    *in_EAX = *in_ECX;
    uVar1 = in_ECX[3];
    uVar2 = in_ECX[2];
    in_EAX[1] = in_ECX[1];
    in_EAX[2] = uVar2;
    in_EAX[3] = uVar1;
    in_EAX[4] = in_ECX[4];
    in_EAX[5] = in_ECX[5];
  }
  return;
}
