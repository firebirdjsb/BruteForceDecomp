/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: D4E5C653F0C1C2C8270FE316ACD2B0BB861E757FF4403805EBF2AEDD6624DC85
 * Entry: 0x002b4710, Ghidra index: 9788, label: FUN_002b4710
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_002b4710(void)

{
  int iVar1;
  undefined4 *in_EDX;
  undefined4 *puVar2;
  
  *in_EDX = 0;
  *in_EDX = 0;
  in_EDX[9] = 0;
  in_EDX[0xf] = 0;
  puVar2 = in_EDX;
  for (iVar1 = 0x13; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  in_EDX[4] = 0x3f800000;
  in_EDX[5] = 1;
  in_EDX[6] = 0x3f800000;
  in_EDX[7] = 0x3f800000;
  in_EDX[8] = 0x3f800000;
  in_EDX[0xb] = 0x3c23d70a;
  in_EDX[10] = 0x3cf5c28f;
  in_EDX[0xc] = 0x3c23d70a;
  in_EDX[0xd] = 0x3c23d70a;
  in_EDX[0xe] = 0x3c23d70a;
  return;
}
