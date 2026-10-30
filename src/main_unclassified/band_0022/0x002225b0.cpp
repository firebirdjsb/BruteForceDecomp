/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: BAF42BAFD7266716313DDA278F5A9A70772DB9AC4BA44B0DAA566CBE888C248B
 * Entry: 0x002225b0, Ghidra index: 7582, label: FUN_002225b0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern char s_23_23_IBF_WaterLavaFlow_0040db20[];
void FUN_002225b0(int *param_1)

{
  int iVar1;
  uint uVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  iVar4 = (int)param_1;
  iVar1 = **(int **)((int)param_1 + 0x6c);
  uVar2 = (*(int **)((int)param_1 + 0x6c))[0x1c];
  if ((((iVar1 != 0) && (iVar1 = *(int *)(iVar1 + 0x18), iVar1 != 0)) && (*(int *)(iVar1 + 4) != 0))
     && ((uVar2 < (uint)((*(int *)(iVar1 + 8) - *(int *)(iVar1 + 4)) / 0xc) &&
         (iVar1 = *(int *)(*(int *)(iVar1 + 4) + 4 + uVar2 * 0xc), iVar1 != 0)))) {
    iVar6 = *(int *)(iVar1 + 0x18);
    iVar1 = *(int *)(iVar1 + 0x1c);
    if (iVar6 != iVar1) {
      *(undefined4 *)((int)param_1 + 0x1e0) = 2;
      do {
        puVar3 = *(undefined4 **)(iVar6 + 4);
        param_1 = (int *)0x0;
        if (puVar3 != (undefined4 *)0x0) {
          iVar5 = (**(code **)*puVar3)(puVar3,s_23_23_IBF_WaterLavaFlow_0040db20,&param_1);
          if ((-1 < iVar5) && (iVar5 = (**(code **)(*param_1 + 0xc))(param_1), iVar5 != 2)) {
            if (iVar5 == 0) {
              *(undefined4 *)(iVar4 + 0x1e0) = 0;
              if (param_1 == (int *)0x0) {
                return;
              }
              (**(code **)(*param_1 + 8))(param_1);
              return;
            }
            *(undefined4 *)(iVar4 + 0x1e0) = 1;
          }
          if (param_1 != (int *)0x0) {
            (**(code **)(*param_1 + 8))(param_1);
          }
        }
        iVar6 = iVar6 + 0x2c;
      } while (iVar6 != iVar1);
      return;
    }
  }
  return;
}
