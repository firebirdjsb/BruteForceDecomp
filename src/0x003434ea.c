/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: CE0B9E90E2978C1F2FC5B3AF3475860A5C580E71226EDEC01B0E07D6AA250615
 * Entry: 0x003434ea, Ghidra index: 12712, label: FUN_003434ea
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int FUN_003434ea(int *param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  char *in_ECX;
  int extraout_ECX;
  int extraout_ECX_00;
  int iVar4;
  undefined8 uVar5;
  
  cVar1 = *in_ECX;
  iVar4 = 0;
  uVar5 = FUN_00343394(cVar1);
  iVar2 = extraout_ECX;
  while (iVar3 = (int)((ulonglong)uVar5 >> 0x20), (int)uVar5 != 0) {
    if (iVar3 != 1) {
      iVar4 = cVar1 + -0x30 + iVar4 * 10;
    }
    cVar1 = *(char *)(iVar2 + 1);
    uVar5 = FUN_00343394(cVar1);
    iVar2 = extraout_ECX_00;
  }
  *param_1 = iVar2;
  return iVar4 * iVar3;
}
