/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: FD23A03207CD912333084E07325C34AACA2E2E015B8040BEB63908DD38F67845
 * Entry: 0x00342480, Ghidra index: 12690, label: FUN_00342480
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00342480(int param_1,int *param_2,undefined4 param_3,undefined4 *param_4)

{
  int iVar1;
  int iVar2;
  long lVar3;
  undefined4 *puVar4;
  int local_10;
  uint local_c;
  char *local_8;
  
  iVar1 = param_1;
  local_8 = (char *)0x0;
  local_10 = 0;
  local_c = 0;
  if (*(int *)(param_1 + 0x10) != 0) {
    param_1 = 0;
    do {
      puVar4 = (undefined4 *)(*(int *)(iVar1 + 8) + param_1);
      iVar2 = FUN_00342002(*puVar4,"errorCode",param_3,puVar4,*(undefined4 *)(iVar1 + 4));
      if (iVar2 == 0) {
        iVar2 = FUN_00342002(*puVar4,"errorDescription",param_3,puVar4,*(undefined4 *)(iVar1 + 4));
        if ((iVar2 != 0) && (local_10 == 0)) {
          local_10 = puVar4[0xc];
        }
      }
      else if (local_8 == (char *)0x0) {
        local_8 = (char *)puVar4[0xc];
      }
      local_c = local_c + 1;
      param_1 = param_1 + 0x34;
    } while (local_c < *(uint *)(iVar1 + 0x10));
  }
  if (*param_2 == 200) {
    param_2[0x82] = 0;
  }
  else if ((local_8 == (char *)0x0) || (local_10 == 0)) {
    param_2[0x82] = -0x7feae6e8;
  }
  else {
    lVar3 = _atol(local_8);
    param_2[0x82] = (-(uint)(lVar3 != 0x2ce) & 0xfffffffe) + 0x8015191a;
  }
  *(undefined4 *)(iVar1 + 0x14) = 1;
  *param_4 = 0;
  return;
}
