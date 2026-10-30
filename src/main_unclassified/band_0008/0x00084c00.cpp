/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 2811099EBB8C0F88A3BA9A7EE27A69EC53088971A4AF1A5D82019F349FB97710
 * Entry: 0x00084c00, Ghidra index: 1544, label: FUN_00084c00
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
extern uint FUN_002383b0(void);

int FUN_00084c00(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  if (param_2 != 0) {
    if (*(int *)(param_2 + 0x1c) == 0) {
      iVar3 = 0;
    }
    else {
      iVar3 = (*(int *)(param_2 + 0x20) - *(int *)(param_2 + 0x1c)) / 0x4c;
    }
    iVar4 = 0;
    if (0 < iVar3) {
      iVar1 = *param_1;
      do {
        iVar2 = FUN_002383b0();
        if (iVar2 == iVar1) {
          return iVar4;
        }
        iVar4 = iVar4 + 1;
      } while (iVar4 < iVar3);
      return -1;
    }
  }
  return -1;
}
