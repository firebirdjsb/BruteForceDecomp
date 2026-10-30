/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 39CE5C927A910B40DC5F28BBEA725603B997A00A9D2343EB7FB6705C5A7F164E
 * Entry: 0x00042b60, Ghidra index: 514, label: FUN_00042b60
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
extern void FUN_0008f6a0(std::uint32_t guest_esi, std::uint32_t guest_word_0);

void FUN_00042b60(int *param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  
  if (param_2 != param_3) {
    piVar4 = (int *)(param_4 + 0x14);
    piVar3 = (int *)(param_2 + 0x14);
    do {
      if (param_4 != param_2) {
        iVar1 = piVar3[-2];
        iVar2 = piVar3[-3];
        piVar4[-4] = piVar3[-4];
        piVar4[-3] = iVar2;
        piVar4[-2] = iVar1;
        if (*piVar4 != *piVar3) {
          FUN_0008f6a0(*piVar3);
        }
      }
      param_4 = param_4 + 0x18;
      param_2 = param_2 + 0x18;
      piVar4 = piVar4 + 6;
      piVar3 = piVar3 + 6;
    } while (param_2 != param_3);
  }
  *param_1 = param_4;
  return;
}
