/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: FB2D58E53343D5AA5F11186C4B7E5DD383F73B0657C61365201C9CEBDC62C87F
 * Entry: 0x00103060, Ghidra index: 3285, label: FUN_00103060
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
bool FUN_00103060(undefined4 param_1)

{
  int in_ECX;
  int *piVar1;
  int iVar2;
  bool bVar3;
  
  bVar3 = false;
  if (*(int *)(in_ECX + 0x9c) != -1) {
    piVar1 = *(int **)(in_ECX + 0x7c);
    iVar2 = 0;
    if (piVar1 != *(int **)(in_ECX + 0x80)) {
      while (iVar2 != *(int *)(in_ECX + 0x9c)) {
        piVar1 = piVar1 + 1;
        iVar2 = iVar2 + 1;
        if (piVar1 == *(int **)(in_ECX + 0x80)) {
          return bVar3;
        }
      }
      if (*piVar1 != 0) {
        iVar2 = FUN_001098f0();
        bVar3 = iVar2 != 0;
        if (bVar3) {
          FUN_00087940(param_1,0,0xffffffff);
        }
      }
    }
  }
  return bVar3;
}
