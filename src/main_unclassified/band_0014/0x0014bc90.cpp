/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 8E5B2E36A86FAF65BED73A4506D5876880A51885342C399B5F3ED1DAA3F8FBDE
 * Entry: 0x0014bc90, Ghidra index: 4326, label: FUN_0014bc90
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0014bc90(void)

{
  int iVar1;
  int *piVar2;
  int *in_EDX;
  int *piVar3;
  int iVar4;
  
  iVar4 = 10;
  do {
    piVar3 = in_EDX + 4;
    piVar2 = (int *)in_EDX[3];
    if (piVar2 != (int *)*piVar3) {
      do {
        iVar1 = *piVar2;
        if ((iVar1 != 0) && (*(char *)(iVar1 + 0x18) != '\0')) {
          *(undefined1 *)(iVar1 + 0x18) = 0;
        }
        piVar2 = piVar2 + 1;
      } while (piVar2 != (int *)*piVar3);
    }
    iVar4 = iVar4 + -1;
    in_EDX = piVar3;
  } while (iVar4 != 0);
  return;
}
