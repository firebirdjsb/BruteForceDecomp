/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 512F54E478C0801F60A75F599AF395448E98D0B3623B1422501C931C07F83BF1
 * Entry: 0x0008cfc0, Ghidra index: 1708, label: FUN_0008cfc0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
extern int FUN_0008c1b0(void);

int FUN_0008cfc0(void)

{
  int iVar1;
  int unaff_EBX;
  int iVar2;
  int iVar3;
  int *piVar4;
  
  iVar2 = 0;
  iVar3 = 0;
  piVar4 = (int *)(unaff_EBX + 100);
  do {
    iVar1 = FUN_0008c1b0(unaff_EBX);
    if ((iVar1 != 9) || (*piVar4 != 0)) {
      iVar2 = iVar2 + 1;
    }
    iVar3 = iVar3 + 1;
    piVar4 = piVar4 + 2;
  } while (iVar3 < 4);
  return iVar2;
}
