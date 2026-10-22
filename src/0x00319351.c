/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: D75EEEC40F1A5BA7D66041AA8FC3CDECC6453D0B9E2059EEFBF657EE7315B5DD
 * Entry: 0x00319351, Ghidra index: 12220, label: FUN_00319351
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00319351(void)

{
  int iVar1;
  int in_ECX;
  int iVar2;
  
  iVar2 = *(int *)(*(int *)(in_ECX + 0x88) + 0xd8);
  while ((iVar2 != 0 &&
         (iVar1 = *(int *)(*(int *)(in_ECX + 0x88) + 0xd4) + iVar2 * 8, *(int *)(iVar1 + -8) == -1))
        ) {
    NtSetEvent(*(undefined4 *)(iVar1 + -4),0);
    iVar2 = iVar2 + -1;
  }
  return;
}
