/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: E535F06BF32BF1F361107AC69B16E6753BD2FFE14F7F7EC7B8DCFFC3B3145DC7
 * Entry: 0x003368d0, Ghidra index: 12456, label: FUN_003368d0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* Source-draft declaration only; Xbox x86 guest ABI_UNVERIFIED. */
extern undefined4 FUN_0033633a(uint param_1,uint param_2);
void FUN_003368d0(int param_1,int param_2,int param_3,uint param_4,uint param_5)

{
  uint *puVar1;
  int *piVar2;
  uint uVar3;
  
  uVar3 = 0;
  if (*(ushort *)(param_1 + 0xc) != 0) {
    piVar2 = (int *)(param_1 + 0x30);
    do {
      if ((*piVar2 == param_2) && (piVar2[1] == param_3)) {
        puVar1 = (uint *)(uVar3 * 0x74 + 0x4c + param_1);
        *puVar1 = ~param_4 & *puVar1 | param_5;
        FUN_0033633a(param_1,uVar3);
        return;
      }
      uVar3 = uVar3 + 1;
      piVar2 = piVar2 + 0x1d;
    } while (uVar3 < *(ushort *)(param_1 + 0xc));
  }
  return;
}
