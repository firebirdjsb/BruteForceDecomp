/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 0CD2C292484512136751EF44FCAE08B24A0E2BFE079AAED40D6917F3674BAE2F
 * Entry: 0x000876a0, Ghidra index: 1619, label: FUN_000876a0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
extern int FUN_00087940(int param_1,uint param_2,uint param_3);
extern bool FUN_00087760(void);

int FUN_000876a0(int param_1,uint param_2)

{
  uint uVar1;
  char cVar2;
  undefined4 *in_EAX;
  undefined4 *puVar3;
  int iVar4;
  undefined4 *puVar5;
  uint uVar6;
  
  uVar1 = *(uint *)(param_1 + 0x18);
  if (uVar1 < 8) {
    puVar3 = (undefined4 *)(param_1 + 4);
  }
  else {
    puVar3 = *(undefined4 **)(param_1 + 4);
  }
  if (puVar3 <= in_EAX) {
    puVar3 = (undefined4 *)(param_1 + 4);
    puVar5 = puVar3;
    if (7 < uVar1) {
      puVar5 = (undefined4 *)*puVar3;
    }
    if (in_EAX < (undefined4 *)((int)puVar5 + *(int *)(param_1 + 0x14) * 2)) {
      if (7 < uVar1) {
        puVar3 = (undefined4 *)*puVar3;
      }
      iVar4 = FUN_00087940(param_1,(int)in_EAX - (int)puVar3 >> 1,param_2);
      return iVar4;
    }
  }
  cVar2 = FUN_00087760();
  if (cVar2 != '\0') {
    if (*(uint *)(param_1 + 0x18) < 8) {
      puVar3 = (undefined4 *)(param_1 + 4);
    }
    else {
      puVar3 = *(undefined4 **)(param_1 + 4);
    }
    uVar1 = param_2 * 2;
    for (uVar6 = (param_2 & 0x7fffffff) >> 1; uVar6 != 0; uVar6 = uVar6 - 1) {
      *puVar3 = *in_EAX;
      in_EAX = in_EAX + 1;
      puVar3 = puVar3 + 1;
    }
    for (uVar6 = uVar1 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
      *(undefined1 *)puVar3 = *(undefined1 *)in_EAX;
      in_EAX = (undefined4 *)((int)in_EAX + 1);
      puVar3 = (undefined4 *)((int)puVar3 + 1);
    }
    *(uint *)(param_1 + 0x14) = param_2;
    if (7 < *(uint *)(param_1 + 0x18)) {
      *(undefined2 *)(uVar1 + *(int *)(param_1 + 4)) = 0;
      return param_1;
    }
    *(undefined2 *)(uVar1 + param_1 + 4) = 0;
  }
  return param_1;
}
