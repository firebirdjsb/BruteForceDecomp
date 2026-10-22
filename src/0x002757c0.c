/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 287D2572FA92B4FA4F59F2A27DF714B9B567DB44C19C144EFCA764FBFA508AEF
 * Entry: 0x002757c0, Ghidra index: 8889, label: FUN_002757c0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_002757c0(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 *in_EAX;
  undefined4 *in_ECX;
  
  *in_EAX = *in_ECX;
  in_EAX[1] = in_ECX[1];
  in_EAX[2] = in_ECX[2];
  uVar1 = in_ECX[5];
  uVar2 = in_ECX[4];
  in_EAX[3] = in_ECX[3];
  in_EAX[4] = uVar2;
  in_EAX[5] = uVar1;
  in_EAX[6] = in_ECX[6];
  in_EAX[7] = in_ECX[7];
  in_EAX[8] = in_ECX[8];
  in_EAX[9] = in_ECX[9];
  return;
}
