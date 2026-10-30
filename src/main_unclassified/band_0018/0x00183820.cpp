/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: B9F4383D462BC742D0EFD350CEE928A342D85D7B33D86834C0789404F695956C
 * Entry: 0x00183820, Ghidra index: 5204, label: FUN_00183820
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 FUN_00183820(uint *param_1)

{
  undefined4 uVar1;
  uint uVar2;
  int in_EDX;
  int *piVar3;
  
  uVar1 = 0;
  if ((*(char *)(in_EDX + 0xaa) != '\0') || (*(char *)(in_EDX + 0xab) != '\0')) {
    uVar2 = 0;
    piVar3 = (int *)(in_EDX + 0x80);
    while ((piVar3[-1] == -0x7ffffff6 || ((*(char *)(in_EDX + 0xaa) == '\0' && (*piVar3 == 1))))) {
      uVar2 = uVar2 + 1;
      piVar3 = piVar3 + 3;
      if (1 < uVar2) {
        return uVar1;
      }
    }
    *param_1 = uVar2;
    uVar1 = 1;
  }
  return uVar1;
}
