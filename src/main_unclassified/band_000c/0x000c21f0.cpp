/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 4257A8D3106483916A69364677A35CAA5D0B3DA837A912175ACB0F7F0FEA363D
 * Entry: 0x000c21f0, Ghidra index: 2367, label: FUN_000c21f0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_000c21f0(void)

{
  char cVar1;
  int iVar2;
  int unaff_EDI;
  
  iVar2 = *(int *)(*(int *)(unaff_EDI + 0x34) + 0x60);
  if ((((iVar2 != 0) && (*(int *)(iVar2 + 0x10) != 0)) && (iVar2 = FUN_0006ef00(), iVar2 != 0)) &&
     (((iVar2 = (**(code **)(**(int **)(iVar2 + 0xf0) + 0x30))(), iVar2 != 0 &&
       (*(int *)(*(int *)(iVar2 + 0xc) + 4) == 3)) && (iVar2 = FUN_000c2440(iVar2,1), iVar2 != 0))))
  {
    *(undefined4 *)(iVar2 + 0x48) = 0x3f4ccccd;
    cVar1 = FUN_00112800();
    if (cVar1 != '\0') {
      (**(code **)(**(int **)(*(int *)(*(int *)(iVar2 + 0x44) + 8) + 0xbec) + 0xc))
                (*(int *)(iVar2 + 0x44));
      FUN_000c2490();
    }
  }
  return;
}
