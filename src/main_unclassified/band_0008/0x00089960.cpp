/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: F8EC34B0C41324A9E8510054D9662DE3DD1F09564429895344058250C08DC994
 * Entry: 0x00089960, Ghidra index: 1643, label: FUN_00089960
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
extern int FUN_00089830(void);
extern int FUN_00089770(int param_1,int param_2);

void FUN_00089960(int param_1)

{
  float fVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  int local_8;
  float local_4;
  
  bVar2 = false;
  iVar3 = FUN_00089830();
  if (0 < iVar3) {
    iVar7 = 0x30;
    do {
      iVar6 = *(int *)(iVar7 + param_1);
      if ((iVar6 != 0) && (iVar4 = FUN_00089770(param_1,iVar6), iVar3 <= iVar4)) {
        if (*(int *)(iVar6 + 0x10) == 0) {
          bVar2 = true;
          local_8 = 0;
          piVar5 = &local_8;
        }
        else {
          piVar5 = (int *)(*(int *)(*(int *)(iVar6 + 0x10) + 0xc) + 0x120);
        }
        iVar4 = *piVar5;
        if (bVar2) {
          bVar2 = false;
        }
        iVar6 = *(int *)(iVar6 + 0x2c);
        fVar1 = 0.0;
        if (iVar6 != -4) {
          fVar1 = (float)*(int *)(iVar6 + 0x1c);
        }
        if (iVar6 != -4) {
          *(int *)(iVar6 + 0x1c) = (int)(fVar1 + 1.0);
          local_4 = fVar1 + 1.0;
        }
        if ((iVar4 != 0) && (iVar6 = FUN_0008e590(iVar6), iVar6 != 0)) {
          local_4 = (float)*(int *)(iVar6 + 0x18) + 1.0;
          *(int *)(iVar6 + 0x18) = (int)local_4;
        }
      }
      iVar7 = iVar7 + 0xc;
    } while (iVar7 < 0x90);
  }
  return;
}
