/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: CCEEF366BF7A610F8A39B70EE2E044ABC548F4A8CE89CB39CA66D7CC12D2580F
 * Entry: 0x0008cdf0, Ghidra index: 1706, label: FUN_0008cdf0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_00469948;
extern uint32_t DAT_00469b58;
uint FUN_0008cdf0(int param_1)

{
  char cVar1;
  uint in_EAX;
  int iVar2;
  int *piVar3;
  int iVar4;
  int *in_ECX;
  
  if ((0 < param_1) && (param_1 < 9)) {
    iVar2 = (**(code **)(*in_ECX + 8))(param_1);
    in_EAX = 0;
    if (iVar2 != 0) {
      piVar3 = (int *)(**(code **)(**(int **)(DAT_00469b58 + 8) + 0x58))();
      if (*piVar3 == 0x17506391) {
        iVar4 = (**(code **)(*in_ECX + 0x70))();
        if (iVar4 != 0) {
          (**(code **)(*in_ECX + 0x70))();
          FUN_00074420();
        }
      }
      if (*(int *)(iVar2 + 0x2c) != 0) {
        cVar1 = FUN_0008b880();
        if (cVar1 != '\0') {
          (**(code **)(**(int **)(DAT_00469b58 + 8) + 0x16c))(iVar2);
        }
      }
      *(undefined4 *)(*(int *)(DAT_00469948 + 0x22c + *(int *)(iVar2 + 4) * 4) + 0xc4) = 0;
      if (*(int *)(iVar2 + 0x28) != 0) {
        FUN_0005bb20(*(int *)(iVar2 + 0x28),iVar2);
        *(undefined4 *)(iVar2 + 0x28) = 0;
      }
      if (*(int *)(iVar2 + 0x28) != 0) {
        iVar4 = (**(code **)(*in_ECX + 0x7c))(*(int *)(iVar2 + 0x28));
        if (iVar4 < 1) {
          FUN_0005b950();
          FUN_0005d270();
        }
      }
      if (in_ECX[param_1 * 2] != 0) {
        FUN_0008f6a0(0);
      }
      FUN_0008a1a0();
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00237ec0(iVar2);
    }
  }
  return in_EAX & 0xffffff00;
}
