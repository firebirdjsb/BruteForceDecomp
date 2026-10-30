/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: AD5A68FF2F914EE6473E36D75FA1F2390758F78322946203CECBB298C292F56F
 * Entry: 0x001f8000, Ghidra index: 7057, label: FUN_001f8000
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_001f8000(int param_1,int param_2,code *param_3)

{
  int iVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  if ((param_1 != param_2) && (iVar4 = param_1 + 0xc, iVar4 != param_2)) {
    iVar3 = param_1 + 0x18;
    do {
      cVar2 = (*param_3)(iVar4,param_1);
      if (cVar2 == '\0') {
        cVar2 = (*param_3)(iVar4,iVar3 + -0x18);
        iVar1 = iVar3 + -0x18;
        if (cVar2 != '\0') {
          do {
            iVar5 = iVar1;
            cVar2 = (*param_3)(iVar4,iVar5 + -0xc);
            iVar1 = iVar5 + -0xc;
          } while (cVar2 != '\0');
          if ((iVar5 != iVar4) && (iVar4 != iVar3)) {
            FUN_000a0b10(iVar5,iVar3,0,0);
          }
        }
      }
      else if ((param_1 != iVar4) && (iVar4 != iVar3)) {
        FUN_000a0b10(param_1,iVar3,0,0);
      }
      iVar4 = iVar4 + 0xc;
      iVar3 = iVar3 + 0xc;
    } while (iVar4 != param_2);
  }
  return;
}
