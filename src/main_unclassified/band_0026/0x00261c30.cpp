/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 4786EECE16A03787E7BC186F5B626E2768D7CFCFDC9C09495764812FA7D53132
 * Entry: 0x00261c30, Ghidra index: 8645, label: FUN_00261c30
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int FUN_00261c30(int *param_1)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  
  iVar2 = (**(code **)(*param_1 + 0x20))(param_1);
  cVar1 = (**(code **)(*param_1 + 0x24))(param_1);
  if ((cVar1 == '\0') &&
     ((((cVar1 = FUN_000908f0(), cVar1 != '\0' || (iVar2 == 0xc)) || (iVar2 == 0xe)) ||
      (iVar2 == 0xf)))) {
    uVar3 = (uint)param_1[5] >> 0x14 & 0xf;
    iVar2 = 1;
    if (uVar3 == 0) {
      return 1;
    }
    do {
      iVar2 = iVar2 << 1;
      uVar3 = uVar3 - 1;
    } while (uVar3 != 0);
    return iVar2;
  }
  return (param_1[6] & 0xfffU) + 1;
}
