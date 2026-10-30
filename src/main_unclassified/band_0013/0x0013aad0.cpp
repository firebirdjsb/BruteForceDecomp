/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 16B9E6932B4048CDB8DE3BA9C510676DB4BECDC1DDDBC561306409DD9041FD77
 * Entry: 0x0013aad0, Ghidra index: 3972, label: FUN_0013aad0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0013aad0(int param_1,int param_2)

{
  int iVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  if ((param_1 != param_2) && (iVar5 = param_1 + 8, iVar5 != param_2)) {
    iVar4 = param_1 + 0x10;
    do {
      cVar2 = FUN_00135d60();
      if (cVar2 == '\0') {
        cVar2 = FUN_00135d60();
        iVar1 = iVar4 + -0x10;
        if (cVar2 != '\0') {
          do {
            iVar3 = iVar1;
            cVar2 = FUN_00135d60();
            iVar1 = iVar3 + -8;
          } while (cVar2 != '\0');
          if ((iVar3 != iVar5) && (iVar5 != iVar4)) {
            FUN_0013b3f0(iVar3,iVar5,iVar4,0,0);
          }
        }
      }
      else if ((param_1 != iVar5) && (iVar5 != iVar4)) {
        FUN_0013b3f0(param_1,iVar5,iVar4,0,0);
      }
      iVar5 = iVar5 + 8;
      iVar4 = iVar4 + 8;
    } while (iVar5 != param_2);
  }
  return;
}
