/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: B25898383A1F33E4428FE195F2CE7108A976155F9176061EE8C743C8FDB7EB98
 * Entry: 0x0007d310, Ghidra index: 1489, label: FUN_0007d310
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_00469b58;
void FUN_0007d310(byte *param_1)

{
  byte *pbVar1;
  char cVar2;
  int iVar3;
  byte *pbVar4;
  int *in_ECX;
  
  pbVar1 = param_1;
  if (param_1 != (byte *)0x0) {
    if (((*param_1 & 1) != 0) && (iVar3 = (**(code **)(*in_ECX + 0x18))(), iVar3 != 0)) {
      iVar3 = (**(code **)(*in_ECX + 0x18))();
      iVar3 = (**(code **)(**(int **)(iVar3 + 0xbec) + 0x10))(&param_1);
      if (iVar3 != 0) {
        while (pbVar4 = (byte *)(**(code **)(**(int **)(DAT_00469b58 + 8) + 0x130))
                                          (*(undefined4 *)(iVar3 + 4)), pbVar4 != pbVar1) {
          iVar3 = (**(code **)(*in_ECX + 0x18))();
          iVar3 = (**(code **)(**(int **)(iVar3 + 0xbec) + 0x14))(&param_1);
          if (iVar3 == 0) {
            (**(code **)(*in_ECX + 0x128))(pbVar1);
            return;
          }
        }
        if ((*(int *)(iVar3 + 0x2c) != 0) && (cVar2 = FUN_0008b880(), cVar2 != '\0')) {
          (**(code **)(*in_ECX + 0x16c))(iVar3);
        }
      }
    }
    (**(code **)(*in_ECX + 0x128))(pbVar1);
  }
  return;
}
