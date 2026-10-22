/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 5695BBB74E326C3F9A8261EB6FD22655884EFD4AAA0049391F1E024727CAE3D2
 * Entry: 0x00261c90, Ghidra index: 8646, label: FUN_00261c90
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int FUN_00261c90(int *param_1)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  
  iVar2 = (**(code **)(*param_1 + 0x20))(param_1);
  cVar1 = (**(code **)(*param_1 + 0x24))(param_1);
  if ((cVar1 == '\0') &&
     ((((cVar1 = FUN_000908f0(), cVar1 != '\0' || (iVar2 == 0xc)) || (iVar2 == 0xe)) ||
      (iVar2 == 0xf)))) {
    iVar2 = 1;
    uVar3 = *(byte *)((int)param_1 + 0x17) & 0xf;
    if ((*(byte *)((int)param_1 + 0x17) & 0xf) == 0) {
      return 1;
    }
    do {
      iVar2 = iVar2 << 1;
      uVar3 = uVar3 - 1;
    } while (uVar3 != 0);
    return iVar2;
  }
  return ((uint)param_1[6] >> 0xc & 0xfff) + 1;
}
