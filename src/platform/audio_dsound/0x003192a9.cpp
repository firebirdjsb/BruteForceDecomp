/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 8AB90855DEBE007161510EB708BD690725CDDFD21FB46689A907C0CD69DE77D3
 * Entry: 0x003192a9, Ghidra index: 12218, label: FUN_003192a9
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int FUN_003192a9(void)

{
  int iVar1;
  int *in_ECX;
  
  iVar1 = FUN_003166d3(3);
  if (iVar1 != 0) {
    *(undefined1 *)(in_ECX[0x1a] + 0x3f) = 0x80;
    FUN_00318851(0);
    if ((*(byte *)(in_ECX[0x22] + 10) & 4) != 0) {
      (**(code **)(*in_ECX + 0x18))(1,0,0,0);
    }
  }
  return iVar1;
}
