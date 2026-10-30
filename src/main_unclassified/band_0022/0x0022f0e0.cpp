/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: E1427E837E1A11D566487B8E99A7284E08CB2EB82B595D36D1AB7E00F3E3917D
 * Entry: 0x0022f0e0, Ghidra index: 7733, label: FUN_0022f0e0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0022f0e0(void)

{
  int iVar1;
  int iVar2;
  float fVar3;
  char cVar4;
  int *unaff_ESI;
  
  iVar1 = unaff_ESI[0xa3];
  unaff_ESI[0xa3] = iVar1 + 1;
  iVar2 = unaff_ESI[0x8a];
  if ((iVar1 + 1 < *(int *)(iVar2 + 0xdc)) && (unaff_ESI[0x7e] != 0)) {
    unaff_ESI[0x86] = *(int *)(iVar2 + 0xd8);
    return;
  }
  fVar3 = *(float *)(iVar2 + 0xcc);
  cVar4 = (**(code **)(*unaff_ESI + 0x15c))();
  if (cVar4 != '\0') {
    fVar3 = *(float *)(unaff_ESI[0x8a] + 0xd0);
  }
  unaff_ESI[0xa3] = 0;
  *(byte *)(unaff_ESI + 0x89) = *(byte *)(unaff_ESI + 0x89) & 0xfb;
  unaff_ESI[0x86] = (int)(1.0 / fVar3);
  return;
}
