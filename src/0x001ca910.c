/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 19CFCBBE329957A54F72C8A27455219D0785D6A62680549519856639C4AB7EDD
 * Entry: 0x001ca910, Ghidra index: 5848, label: FUN_001ca910
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_001ca910(void)

{
  undefined4 *unaff_ESI;
  undefined4 *unaff_EDI;
  
  *unaff_ESI = *unaff_EDI;
  unaff_ESI[7] = 7;
  unaff_ESI[6] = 0;
  *(undefined2 *)(unaff_ESI + 2) = 0;
  FUN_00087940(unaff_ESI + 1,0,0xffffffff);
  unaff_ESI[0xe] = 0xf;
  unaff_ESI[0xd] = 0;
  *(undefined1 *)(unaff_ESI + 9) = 0;
  FUN_0001f4f0(unaff_EDI + 8,0,0xffffffff);
  unaff_ESI[0xf] = unaff_EDI[0xf];
  return;
}
