/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: C439C00A7191BFDC566CD7A9710F349D85BE48D50FB9308D5D936A79DFEBBC9A
 * Entry: 0x002dddc0, Ghidra index: 10330, label: FUN_002dddc0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* Source-matched C++17 declaration only; original Xbox ABI_UNVERIFIED. */
extern void FUN_00304ff0(void);
void FUN_002dddc0(void)

{
  undefined4 *puVar1;
  undefined1 *puVar2;
  int iVar3;
  int unaff_EDI;
  
  puVar1 = (undefined4 *)(unaff_EDI + 0x3c);
  iVar3 = 2;
  do {
    *puVar1 = 0;
    puVar1 = puVar1 + 0x10;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  puVar2 = (undefined1 *)(unaff_EDI + 0x80);
  iVar3 = 3;
  do {
    *puVar2 = 0;
    puVar2[1] = 0;
    *(undefined4 *)(puVar2 + 4) = 0;
    *(undefined4 *)(puVar2 + 8) = 0;
    *(undefined4 *)(puVar2 + 0xc) = 0x3f800000;
    *(undefined4 *)(puVar2 + 0x10) = 0;
    *(undefined4 *)(puVar2 + 0x14) = 0;
    puVar2 = puVar2 + 0x18;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  FUN_00304ff0();
  FUN_00304ff0();
  *(undefined4 *)(unaff_EDI + 200) = 0x3f800000;
  *(undefined4 *)(unaff_EDI + 0xcc) = 0x3f800000;
  return;
}
