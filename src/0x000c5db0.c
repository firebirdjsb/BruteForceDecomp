/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 984B34C2A7FA6308E790655D3FDFDC9F2788ABC5607822C8EC8C5A1AB0A44E51
 * Entry: 0x000c5db0, Ghidra index: 2431, label: FUN_000c5db0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_000c5db0(float param_1)

{
  int iVar1;
  char cVar2;
  int unaff_EDI;
  
  if (*(int *)(unaff_EDI + 0xa8) != 0) {
    iVar1 = *(int *)(*(int *)(unaff_EDI + 0xa8) + 0x2e8);
    cVar2 = (**(code **)(*(int *)(iVar1 + 0x144) + 0x20))();
    if ((((cVar2 != '\0') && (iVar1 = *(int *)(iVar1 + 0x164), iVar1 != 0)) &&
        (*(int *)(*(int *)(iVar1 + 0xc) + 4) == 0x14)) && (iVar1 != 0)) {
      *(float *)(unaff_EDI + 0x78) = param_1 * *(float *)(*(int *)(iVar1 + 0x228) + 0x134);
      return;
    }
  }
  *(float *)(unaff_EDI + 0x78) = param_1;
  return;
}
