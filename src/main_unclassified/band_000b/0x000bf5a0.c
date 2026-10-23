/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 425B46E5754A97342420A43D41D876CB0D3153068E6D895C55E677FE8B4BFDC8
 * Entry: 0x000bf5a0, Ghidra index: 2331, label: FUN_000bf5a0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_000bf5a0(void)

{
  int iVar1;
  char cVar2;
  int unaff_EBX;
  int unaff_EDI;
  
  *(undefined1 *)(unaff_EBX + 0x50) = 0;
  iVar1 = *(int *)(unaff_EDI + 0x2e8);
  cVar2 = (**(code **)(*(int *)(iVar1 + 0x144) + 0x20))();
  if ((((cVar2 != '\0') && (iVar1 = *(int *)(iVar1 + 0x164), iVar1 != 0)) &&
      (*(int *)(*(int *)(iVar1 + 0xc) + 4) == 0x14)) &&
     (((iVar1 != 0 && (*(int *)(unaff_EDI + 0x644) == 1)) &&
      (*(char *)(*(int *)(iVar1 + 0x228) + 0x6c) != '\0')))) {
    *(undefined1 *)(unaff_EBX + 0x50) = 1;
  }
  return;
}
