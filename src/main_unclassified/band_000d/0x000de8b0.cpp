/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 20007CC027A7DD35BC351452A7B4BFF863AA9ADD419F67E9146D0CCDAF0518F6
 * Entry: 0x000de8b0, Ghidra index: 2718, label: FUN_000de8b0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
extern void FUN_0008f6e0(std::uint32_t guest_edx);

int FUN_000de8b0(int param_1,int param_2,char param_3,int param_4)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  bool bVar4;
  undefined4 local_10;
  int local_c;
  
  bVar4 = false;
  local_10 = 0;
  piVar2 = (int *)0x0;
  if (*(undefined4 **)(param_1 + 0xc28) != (undefined4 *)0x0) {
    piVar2 = (int *)**(undefined4 **)(param_1 + 0xc28);
  }
  if (piVar2 != *(int **)(param_1 + 0xc28)) {
    do {
      if (((param_4 == -1) || (*(int *)(piVar2[2] + 4) == param_4)) &&
         ((param_3 == -1 || ((bool)(*(byte *)(piVar2[2] + 0x14) >> 1 & 1) == (param_3 != '\0'))))) {
        if (*(int *)(piVar2[2] + 8) == 1) {
          puVar3 = (undefined4 *)(piVar2[2] + 0xc);
        }
        else {
          bVar4 = true;
          local_c = 0;
          puVar3 = &local_10;
        }
        iVar1 = puVar3[1];
        if ((bVar4) && (bVar4 = false, local_c != 0)) {
          FUN_0008f6e0();
        }
        if (iVar1 == param_2) {
          return piVar2[2];
        }
      }
      piVar2 = (int *)*piVar2;
      if (piVar2 == (int *)*(int *)(param_1 + 0xc28)) {
        return 0;
      }
    } while( true );
  }
  return 0;
}
