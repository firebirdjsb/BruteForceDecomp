/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 79277EBED500E57234B4FD1FF387CE84C0B05CA672722E850646595330195C19
 * Entry: 0x0021c940, Ghidra index: 7531, label: FUN_0021c940
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0021c940(void)

{
  int iVar1;
  int *unaff_ESI;
  int *piStack_5c;
  int *piVar2;
  float fStack_30;
  
  iVar1 = (**(code **)*unaff_ESI)();
  if (iVar1 < 0) {
    fStack_30 = 3.103075e-39;
    (**(code **)(*unaff_ESI + 0x70))();
  }
  else {
    fStack_30 = 3.102835e-39;
    (**(code **)(*unaff_ESI + 0x6c))();
    fStack_30 = 3.4028235e+38;
    (**(code **)(*unaff_ESI + 0x70))();
    fStack_30 = 0.0;
    piStack_5c = unaff_ESI;
    (**(code **)(*unaff_ESI + 0xa8))(unaff_ESI,&fStack_30);
    piVar2 = piStack_5c;
    (**(code **)(*piStack_5c + 0xa4))(piStack_5c,0);
    fStack_30 = 3.4028235e+38;
    if ((float)piVar2 * 1.0000001 <= 3.4028235e+38) {
      fStack_30 = (float)piVar2 * 1.0000001;
    }
    (**(code **)(*piStack_5c + 0x68))(piStack_5c,fStack_30);
    (**(code **)(*piStack_5c + 0x10))();
    (**(code **)(*piStack_5c + 0xa4))();
    (**(code **)(iRam34000000 + 8))(0x34000000);
  }
  if (piStack_5c != (int *)0x0) {
    (**(code **)(*piStack_5c + 8))(piStack_5c);
  }
  return;
}
