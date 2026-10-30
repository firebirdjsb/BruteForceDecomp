/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 848727BCF1645B7427343816166137BFD8BC7D496C96E1CC629DA75D5E39FCC3
 * Entry: 0x002b9940, Ghidra index: 9873, label: FUN_002b9940
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_002b9940(void)

{
  int iVar1;
  undefined4 *in_EDX;
  undefined4 *puVar2;
  
  in_EDX[7] = 0;
  puVar2 = in_EDX;
  for (iVar1 = 9; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  in_EDX[4] = 0x49742400;
  in_EDX[5] = 0x49742400;
  in_EDX[6] = 0x49742400;
  in_EDX[8] = 0x49742400;
  in_EDX[1] = 0x3f800000;
  in_EDX[3] = 0x3f800000;
  *in_EDX = 0x3f4ccccd;
  in_EDX[2] = 0x3f4ccccd;
  return;
}
