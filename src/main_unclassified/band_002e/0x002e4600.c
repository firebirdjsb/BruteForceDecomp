/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 68BA90865EDE873A182EC6768AFCAEEBADAB2CD6C8BCB2394261804F059F8CE8
 * Entry: 0x002e4600, Ghidra index: 10448, label: FUN_002e4600
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int FUN_002e4600(void)

{
  int iVar1;
  uint uVar2;
  int *in_ECX;
  int *piVar3;
  int iVar4;
  uint uVar5;
  
  iVar4 = 0;
  uVar5 = 0;
  iVar1 = (**(code **)(*in_ECX + 8))();
  if (iVar1 != 0) {
    piVar3 = in_ECX + 0x12;
    do {
      if (*piVar3 != 0xf00000) {
        iVar4 = iVar4 + 1;
      }
      uVar5 = uVar5 + 1;
      piVar3 = piVar3 + 4;
      uVar2 = (**(code **)(*in_ECX + 8))();
    } while (uVar5 < uVar2);
  }
  return iVar4;
}
