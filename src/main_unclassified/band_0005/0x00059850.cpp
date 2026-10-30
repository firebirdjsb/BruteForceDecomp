/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: BFEE501E409519A2B7F3DFA9BB430D84A65DCE2D7587F9B1ECA74A5DEC0E3B0F
 * Entry: 0x00059850, Ghidra index: 891, label: FUN_00059850
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00059850(void)

{
  undefined1 uVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  int unaff_ESI;
  
  uVar1 = *(undefined1 *)(unaff_ESI + 0x10);
  iVar2 = *(int *)(unaff_ESI + 8);
  puVar3 = *(undefined4 **)(unaff_ESI + 4);
  if (4 < (int)(iVar2 - (int)puVar3 & 0xfffffffcU)) {
    uVar4 = *(undefined4 *)(iVar2 + -4);
    *(undefined4 *)(iVar2 + -4) = *puVar3;
    FUN_000599b0(puVar3,(iVar2 + -4) - (int)puVar3 >> 2,uVar4,uVar1);
  }
  if ((*(int *)(unaff_ESI + 4) != 0) &&
     (*(int *)(unaff_ESI + 8) - *(int *)(unaff_ESI + 4) >> 2 != 0)) {
    *(int *)(unaff_ESI + 8) = *(int *)(unaff_ESI + 8) + -4;
  }
  return;
}
