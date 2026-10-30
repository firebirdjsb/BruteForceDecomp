/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 57A61E9DBA77112D6920D1B5E0406F91717664BF80CEEE1BE30E1DBD169E3468
 * Entry: 0x0010ad90, Ghidra index: 3437, label: FUN_0010ad90
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
float10 FUN_0010ad90(void)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  int unaff_EDI;
  float10 fVar4;
  float local_c;
  float local_8;
  undefined4 local_4;
  
  fVar4 = (float10)0.0;
  local_8 = (float)fVar4;
  if (*(int *)(unaff_EDI + 0xf0) != 0) {
    if (*(undefined4 **)(unaff_EDI + 0x80) == (undefined4 *)0x0) {
      piVar3 = (int *)0x0;
    }
    else {
      piVar3 = (int *)**(undefined4 **)(unaff_EDI + 0x80);
    }
    piVar1 = *(int **)(unaff_EDI + 0x80);
    local_c = 0.0;
    local_4 = 0;
    if (piVar3 != piVar1) {
      do {
        iVar2 = piVar3[2];
        if (*(uint *)(iVar2 + 0x24) < 8) {
          iVar2 = iVar2 + 0x10;
        }
        else {
          iVar2 = *(int *)(iVar2 + 0x10);
        }
        FUN_000ccae0(*(undefined4 *)(unaff_EDI + 0xf0),iVar2,&local_c,&local_4,0,0x3f800000);
        if (local_8 < local_c) {
          local_8 = local_c;
        }
        piVar3 = (int *)*piVar3;
      } while (piVar3 != piVar1);
      fVar4 = (float10)local_8;
    }
  }
  return fVar4;
}
