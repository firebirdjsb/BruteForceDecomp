/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 9E84CAEB6571FECCF90BC765036963167CAC4AA4D2CC7E9E9BE2E5BE8A3D29DC
 * Entry: 0x00101790, Ghidra index: 3251, label: FUN_00101790
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00101790(void)

{
  byte bVar1;
  int *piVar2;
  int *in_EAX;
  int iVar3;
  int *piVar4;
  byte bVar5;
  
  if ((in_EAX != (int *)0x0) && (iVar3 = (**(code **)(*in_EAX + 4))(), iVar3 == 8)) {
    bVar5 = 1;
    piVar4 = (int *)FUN_00103000();
    iVar3 = *piVar4;
    if ((iVar3 == -0x1602dc1f) || ((iVar3 == 0xa6de845 || (iVar3 == 0x15a3164e)))) {
      bVar5 = 0;
    }
    for (piVar4 = *(int **)(in_EAX[1] + 0x74); piVar4 != *(int **)(in_EAX[1] + 0x78);
        piVar4 = piVar4 + 1) {
      piVar2 = (int *)*piVar4;
      if (piVar2[9] == 0x1b0d073a) {
        bVar1 = *(byte *)(piVar2 + 10);
        if ((bVar1 >> 1 & 1) == bVar5) {
          return;
        }
        *(byte *)(piVar2 + 10) = (bVar5 << 1 ^ bVar1) & 2 ^ bVar1;
                    /* WARNING: Could not recover jumptable at 0x00101807. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*piVar2 + 0x24))();
        return;
      }
    }
  }
  return;
}
