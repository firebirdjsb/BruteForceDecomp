/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 6A4B608207D3F8F1A7A8ACC1C42A71715E5ABE7CE46E3532A057A0DC35E91696
 * Entry: 0x000dea70, Ghidra index: 2721, label: FUN_000dea70
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
extern void FUN_00173490(void);

void FUN_000dea70(void)

{
  int iVar1;
  int unaff_EBX;
  int *piVar2;
  
  if (*(undefined4 **)(unaff_EBX + 0xc28) == (undefined4 *)0x0) {
    piVar2 = (int *)0x0;
  }
  else {
    piVar2 = (int *)**(undefined4 **)(unaff_EBX + 0xc28);
  }
  if (piVar2 != *(int **)(unaff_EBX + 0xc28)) {
    do {
      if ((((int *)piVar2[2])[1] == 2) &&
         (iVar1 = (**(code **)(*(int *)piVar2[2] + 0x18))(), iVar1 != 0)) {
        FUN_00173490();
      }
      piVar2 = (int *)*piVar2;
    } while (piVar2 != (int *)*(int *)(unaff_EBX + 0xc28));
  }
  return;
}
