/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: D329908FCDE4C6C21641E60D3BD5DC8D4C87E811EDD8E4A496464058EE1D7D55
 * Entry: 0x000480f0, Ghidra index: 571, label: FUN_000480f0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 FUN_000480f0(void)

{
  char cVar1;
  int iVar2;
  int unaff_ESI;
  
  iVar2 = FUN_000120f0();
  if ((*(ushort *)(unaff_ESI + 0x892) & 0x4000) == 0) {
    if ((*(int *)(*(int *)(iVar2 + 0x2e8) + 0x1b8) == 5) &&
       (*(int *)(*(int *)(iVar2 + 0x2e8) + 0x1bc) == (int)*(short *)(unaff_ESI + 0x890))) {
      cVar1 = FUN_00121170(0x3f800000);
      if (cVar1 == '\0') {
        *(byte *)(unaff_ESI + 0x893) = *(byte *)(unaff_ESI + 0x893) & 0xbf;
        return 1;
      }
      *(byte *)(unaff_ESI + 0x893) = *(byte *)(unaff_ESI + 0x893) | 0x40;
    }
  }
  else if ((*(int **)(iVar2 + 0x214) == (int *)0x0) || (**(int **)(iVar2 + 0x214) != 0x2f)) {
    return 2;
  }
  return 1;
}
