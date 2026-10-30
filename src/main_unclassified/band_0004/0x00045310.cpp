/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 7C7BA894758CA9A726A24E62854E2B0E1A8B78D252977FE0768A8F073D84A36A
 * Entry: 0x00045310, Ghidra index: 539, label: FUN_00045310
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
extern uint32_t FUN_000120f0(int32_t in_EAX);

undefined4 FUN_00045310(int param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  
  iVar3 = FUN_000120f0();
  if (iVar3 == 0) {
    return 0;
  }
  iVar1 = *(int *)(iVar3 + 0x59c);
  if (iVar1 != 0) {
    uVar2 = *(uint *)(iVar1 + 4);
    if (uVar2 != 0) {
      if (uVar2 == 0) {
        iVar4 = 0;
      }
      else {
        iVar4 = **(int **)(iVar1 + 8);
      }
      iVar4 = *(int *)(iVar4 + 4);
      if (iVar4 != 0) {
        iVar6 = 0;
        uVar5 = 1;
        do {
          if ((iVar3 != iVar4) && (*(int *)(iVar4 + 0x24c) == param_1)) {
            return 1;
          }
          if (uVar2 <= uVar5) {
            return 0;
          }
          iVar6 = iVar6 + 4;
          if (uVar5 < uVar2) {
            iVar4 = *(int *)(iVar6 + *(int *)(iVar1 + 8));
          }
          else {
            iVar4 = 0;
          }
          iVar4 = *(int *)(iVar4 + 4);
          uVar5 = uVar5 + 1;
        } while (iVar4 != 0);
        return 0;
      }
    }
  }
  return 0;
}
