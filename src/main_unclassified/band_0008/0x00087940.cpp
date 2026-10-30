/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: CEB9539BA570DDB3F14A9B2B17AC531507B23B952FE845DC11C8D43EF60D3CA4
 * Entry: 0x00087940, Ghidra index: 1622, label: FUN_00087940
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
extern void FUN_002f254a(void);
extern bool FUN_00087760(void);
extern void FUN_00087a00(void);

int FUN_00087940(int param_1,uint param_2,uint param_3)

{
  char cVar1;
  int in_EAX;
  uint uVar2;
  int *piVar3;
  int *piVar4;
  int iVar5;
  undefined4 *puVar6;
  uint uVar7;
  
  if (*(uint *)(in_EAX + 0x14) < param_2) {
    FUN_002f254a();
  }
  uVar7 = *(int *)(in_EAX + 0x14) - param_2;
  if (param_3 < uVar7) {
    uVar7 = param_3;
  }
  if (param_1 != in_EAX) {
    cVar1 = FUN_00087760();
    if (cVar1 != '\0') {
      if (*(uint *)(in_EAX + 0x18) < 8) {
        iVar5 = in_EAX + 4;
      }
      else {
        iVar5 = *(int *)(in_EAX + 4);
      }
      piVar4 = (int *)(param_1 + 4);
      piVar3 = piVar4;
      if (7 < *(uint *)(param_1 + 0x18)) {
        piVar3 = (undefined4 *)*piVar4;
      }
      puVar6 = (undefined4 *)(iVar5 + param_2 * 2);
      for (uVar2 = (uVar7 & 0x7fffffff) >> 1; uVar2 != 0; uVar2 = uVar2 - 1) {
        *piVar3 = *puVar6;
        puVar6 = puVar6 + 1;
        piVar3 = piVar3 + 1;
      }
      for (uVar2 = uVar7 * 2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
        *(undefined1 *)piVar3 = *(undefined1 *)puVar6;
        puVar6 = (undefined4 *)((int)puVar6 + 1);
        piVar3 = (undefined4 *)((int)piVar3 + 1);
      }
      *(uint *)(param_1 + 0x14) = uVar7;
      if (7 < *(uint *)(param_1 + 0x18)) {
        piVar4 = (int *)*piVar4;
      }
      *(undefined2 *)(uVar7 * 2 + (int)piVar4) = 0;
    }
    return param_1;
  }
  FUN_00087a00();
  FUN_00087a00();
  return param_1;
}
