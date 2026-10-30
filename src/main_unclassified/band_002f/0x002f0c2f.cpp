/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: BE60B6DC9DA241B5CAFC3319BFF93AA358996B58FBFFE7E8AB3ED2053E6F6311
 * Entry: 0x002f0c2f, Ghidra index: 10758, label: FUN_002f0c2f
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_004a8ea0;
extern uint32_t _DAT_0040f4d8;
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_002f0c2f(uint param_1,int *param_2)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  char local_c [8];
  
  if ((*(byte *)(param_2 + 3) & 0x40) == 0) {
    uVar3 = param_2[4];
    if (uVar3 == 0xffffffff) {
      iVar2 = 0x3b6e38;
    }
    else {
      iVar2 = (&DAT_004a8ea0)[(int)uVar3 >> 5] + (uVar3 & 0x1f) * 8;
    }
    if ((*(byte *)(iVar2 + 4) & 0x80) != 0) {
      iVar2 = FUN_002f0dc5(local_c,param_1);
      if (iVar2 == -1) {
        _DAT_0040f4d8 = 0x2a;
        return 0xffff;
      }
      iVar4 = 0;
      if (0 < iVar2) {
        do {
          piVar1 = param_2 + 1;
          *piVar1 = *piVar1 + -1;
          if (*piVar1 < 0) {
            uVar3 = __flsbuf((int)local_c[iVar4],param_2);
          }
          else {
            *(char *)*param_2 = local_c[iVar4];
            uVar3 = (uint)*(byte *)*param_2;
            *param_2 = (int)((byte *)*param_2 + 1);
          }
          if (uVar3 == 0xffffffff) {
            return 0xffff;
          }
          iVar4 = iVar4 + 1;
        } while (iVar4 < iVar2);
      }
      return param_1 & 0xffff;
    }
  }
  piVar1 = param_2 + 1;
  *piVar1 = *piVar1 + -2;
  if (*piVar1 < 0) {
    param_1 = __flswbuf(param_1 & 0xffff,param_2);
  }
  else {
    *(undefined2 *)*param_2 = (undefined2)param_1;
    *param_2 = *param_2 + 2;
  }
  return param_1;
}
