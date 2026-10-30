/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: D0C3A8C14F0F39B1A602732E06B6DB23A24C3A18BAE9A91353C97F3177FD6065
 * Entry: 0x00258ad0, Ghidra index: 8481, label: FUN_00258ad0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00258ad0(void)

{
  int iVar1;
  int iVar2;
  int in_ECX;
  uint *puVar3;
  int unaff_ESI;
  
  iVar2 = 0;
  puVar3 = (uint *)(unaff_ESI + 0x10);
  do {
    if ((*(uint *)(in_ECX + 0x10) & 0x3ffffff) <= *puVar3) {
      *(int *)(in_ECX + 0x14) = iVar2;
      *(undefined4 *)(in_ECX + 8) = 0;
      *(undefined4 *)(in_ECX + 0xc) = *(undefined4 *)(unaff_ESI + 0x14 + iVar2 * 8);
      iVar1 = *(int *)(unaff_ESI + 0x14 + iVar2 * 8);
      if (iVar1 != 0) {
        *(int *)(iVar1 + 8) = in_ECX;
      }
      *(int *)(unaff_ESI + 0x14 + iVar2 * 8) = in_ECX;
      return;
    }
    iVar2 = iVar2 + 1;
    puVar3 = puVar3 + 2;
  } while (iVar2 < 8);
  return;
}
