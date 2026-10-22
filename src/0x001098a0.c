/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 547E447C5B8915CBD11924FCCC888D3E2C04D2A57BCB778EEE749701091FB4DF
 * Entry: 0x001098a0, Ghidra index: 3410, label: FUN_001098a0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_001098a0(void)

{
  int in_EAX;
  int iVar1;
  int *piVar2;
  
  iVar1 = FUN_001098f0();
  if (iVar1 == 0) {
    iVar1 = FUN_002ea01d(0xf4);
    if (iVar1 == 0) {
      piVar2 = (int *)0x0;
    }
    else {
      piVar2 = (int *)FUN_00109f80(iVar1);
    }
    piVar2[9] = (int)&LAB_0025b9f2;
    (**(code **)(*piVar2 + 0x2c))();
    piVar2[2] = in_EAX;
    (**(code **)(*piVar2 + 0x30))();
    FUN_000ff9e0(piVar2);
  }
  return;
}
