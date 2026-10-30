/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 690B63A30CCC50935DE529D7A01B640BEF3382DE91130CE3D6E194F0209AFD9E
 * Entry: 0x000481a0, Ghidra index: 572, label: FUN_000481a0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
extern undefined4 FUN_000480f0(void);

void FUN_000481a0(void)

{
  int iVar1;
  int unaff_EDI;
  
  if ((*(ushort *)(unaff_EDI + 2) & 0x8000) != 0) {
    iVar1 = FUN_000480f0(unaff_EDI);
    if (iVar1 == 2) {
      *(byte *)(unaff_EDI + 3) = *(byte *)(unaff_EDI + 3) & 0x7f;
    }
  }
  return;
}
