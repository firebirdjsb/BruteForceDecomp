/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 3C4198F134FE492010DDAA5A70910940965062A9D937B3A33850D10D75DFD53E
 * Entry: 0x000da880, Ghidra index: 2694, label: FUN_000da880
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* XBE 0x000da891 and 0x000da8c6 LEA EAX,[ESP+18h]:
 * four register pushes place the same second incoming DWORD at entry ESP+8.
 * Both 0x000ff730 calls copy exactly four bytes through that pointer.
 * RET 0Ch shows three guest stack words; the third word, implicit register
 * inputs and native host calling convention remain ABI_UNVERIFIED. */
extern undefined4 FUN_000ff730(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4);
extern void FUN_000b2a50(void);

void FUN_000da880(int param_1,undefined4 guest_second_word)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(param_1 + 0x28);
  iVar2 = FUN_000ff730(param_1 + 0x24,iVar1,*(undefined4 *)(iVar1 + 4),&guest_second_word);
  FUN_000b2a50();
  *(int *)(iVar1 + 4) = iVar2;
  **(int **)(iVar2 + 4) = iVar2;
  if ((*(byte *)(param_1 + 0xc50) & 4) == 0) {
    iVar1 = *(int *)(param_1 + 0x4c);
    iVar2 = FUN_000ff730(param_1 + 0x48,iVar1,*(undefined4 *)(iVar1 + 4),&guest_second_word);
    FUN_000b2a50();
    *(int *)(iVar1 + 4) = iVar2;
    **(int **)(iVar2 + 4) = iVar2;
  }
  return;
}
