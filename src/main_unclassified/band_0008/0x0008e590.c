/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 018E41B1F52F47D53FD6456ED2DDDB1D4AD4AB7681BE791595600E9F056E1CB6
 * Entry: 0x0008e590, Ghidra index: 1731, label: FUN_0008e590
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int * FUN_0008e590(int param_1)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  int *piVar5;
  int unaff_EDI;
  /* 0x0008e5d0 LEA EAX,[ESP+0x0c] addresses ten guest DWORDs.
   * 0x0008e5d8..0x0008e600 store EDI then nine zero DWORDs.
   * The simultaneous EAX=ESI+0x28 register contract is ABI_UNVERIFIED. */
  undefined4 local_28[10] = { (undefined4)unaff_EDI };
  
  piVar1 = *(int **)(param_1 + 0x30);
  piVar4 = *(int **)(param_1 + 0x2c);
  if (piVar4 != piVar1) {
    piVar5 = piVar4 + 1;
    piVar2 = (int *)0x0;
    do {
      piVar3 = piVar5;
      if ((*piVar4 != unaff_EDI) && (piVar3 = piVar2, *piVar4 == 0)) {
        *piVar4 = unaff_EDI;
        piVar3 = piVar5;
      }
      piVar4 = piVar4 + 10;
      piVar5 = piVar5 + 10;
      piVar2 = piVar3;
    } while (piVar4 != piVar1);
    if (piVar3 != (int *)0x0) {
      return piVar3;
    }
  }
  FUN_0008ebe0(local_28);
  return (int *)(*(int *)(param_1 + 0x30) + -0x24);
}
