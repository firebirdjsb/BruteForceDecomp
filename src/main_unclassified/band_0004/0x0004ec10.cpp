/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 086CA321570FDD5A3D7106F30281EDD10B64C49D7480B1C88A3309369D67A052
 * Entry: 0x0004ec10, Ghidra index: 683, label: FUN_0004ec10
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* WARNING: Removing unreachable block (ram,0x0004ec70) */

extern void FUN_0004f5c0(void);
extern void FUN_0010bc40(void);
extern void FUN_0004eb40(void);

void FUN_0004ec10(undefined4 param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  int in_EAX;
  int iVar3;
  int *piVar4;
  int iVar5;
  
  iVar5 = *(int *)(in_EAX + 4);
  iVar1 = *(int *)(in_EAX + 8);
  do {
    if (iVar5 == iVar1) {
      return;
    }
    iVar3 = FUN_0004ea20();
    if (iVar3 != 0) {
      FUN_0004f5c0();
      piVar2 = *(int **)(param_2 + 8);
      if ((*(int *)(iVar5 + 4) != 0x176f6cd1) && (piVar4 = *(int **)(param_2 + 4), piVar4 != piVar2)
         ) {
        do {
          if (*piVar4 == *(int *)(iVar5 + 4)) break;
          piVar4 = piVar4 + 6;
        } while (piVar4 != piVar2);
        if ((piVar4 != piVar2) && (piVar4 != (int *)0x0)) {
          FUN_0010bc40();
        }
      }
      FUN_0004eb40();
    }
    iVar5 = iVar5 + 0xc;
  } while( true );
}
