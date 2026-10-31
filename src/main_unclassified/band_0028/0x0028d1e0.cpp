/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 2DECCD3D2303E260D8F0CEAB02BE96B10ED058CA354A0C4891F49AB697E2AA1A
 * Entry: 0x0028d1e0, Ghidra index: 9190, label: FUN_0028d1e0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* Exact existing callee draft signature only; original Xbox ABI_UNVERIFIED. */
extern undefined4 FUN_0028ce90(void);
void FUN_0028d1e0(void)

{
  uint uVar1;
  int unaff_EBX;
  uint uVar2;
  
  uVar1 = *(uint *)(unaff_EBX + 0x58);
  if (uVar1 != 0) {
    uVar2 = 0;
    *(undefined1 *)(unaff_EBX + 0x5d) = 1;
    if (uVar1 != 0) {
      do {
        FUN_0028ce90();
        uVar2 = uVar2 + 1;
      } while (uVar2 < uVar1);
    }
  }
  return;
}
