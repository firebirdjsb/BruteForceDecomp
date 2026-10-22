/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 9A13417F44AA3BEA1232FFD97A6302E3842C53258702C689E669C8ED3BC868A7
 * Entry: 0x00319cd9, Ghidra index: 12249, label: FUN_00319cd9
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00319cd9(void)

{
  int *piVar1;
  undefined4 *puVar2;
  int in_ECX;
  int iVar3;
  
  iVar3 = 0xe;
  piVar1 = (int *)(in_ECX + 0xb0);
  do {
    *piVar1 = (*piVar1 - 1U >> 2) + 1;
    piVar1 = piVar1 + 2;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  *(undefined4 *)(in_ECX + 0x1a8) = 4;
  puVar2 = (undefined4 *)(in_ECX + 0x1ac);
  iVar3 = 10;
  do {
    *puVar2 = 0;
    puVar2 = puVar2 + 3;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  return;
}
