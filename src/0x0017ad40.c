/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: A9E1E1BD2AD3D5B543AF352E8D5735D2438F6A5D82F3C88D7AA498F33C080F98
 * Entry: 0x0017ad40, Ghidra index: 5024, label: FUN_0017ad40
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0017ad40(void)

{
  int iVar1;
  int *piVar2;
  int in_EDX;
  int unaff_EDI;
  
  iVar1 = 0;
  piVar2 = (int *)(in_EDX + 0x148);
  do {
    if (*piVar2 == unaff_EDI) {
      *(int *)(in_EDX + 0x160) = unaff_EDI;
      *(int *)(in_EDX + 0x15c) = iVar1;
      return;
    }
    iVar1 = iVar1 + 1;
    piVar2 = piVar2 + 1;
  } while (iVar1 < 5);
  *(int *)(in_EDX + 0x160) = *(int *)(in_EDX + 0x148);
  *(undefined4 *)(in_EDX + 0x15c) = 0;
  return;
}
