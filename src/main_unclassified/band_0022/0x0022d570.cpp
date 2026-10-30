/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 44A065908E34F74368D8C8CF606C5B4BC0E7D33A45F8BF091FB9646A77DF1F4A
 * Entry: 0x0022d570, Ghidra index: 7706, label: FUN_0022d570
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_00414da0;
extern uint32_t *DAT_00469940;
extern uint32_t PTR_FUN_00394340;
extern uint32_t PTR_FUN_0039adec;
extern uint32_t PTR_LAB_00394328;
extern uint32_t PTR_LAB_00394334;
extern uint32_t PTR_LAB_0039433c;
extern uint32_t PTR_LAB_003948e8;
extern uint32_t PTR_LAB_0039a8c0;
void FUN_0022d570(void)

{
  uint uVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  int *piVar5;
  undefined4 *in_ECX;
  int iVar6;
  
  *in_ECX = PTR_FUN_00394340;
  in_ECX[0x12] = PTR_FUN_0039adec;
  in_ECX[0x1a] = PTR_LAB_0039a8c0;
  in_ECX[0x74] = PTR_LAB_0039433c;
  *(undefined ***)(*(int *)(in_ECX[0x13] + 4) + 0x4c + (int)in_ECX) = &PTR_LAB_00394334;
  *(undefined ***)(*(int *)(in_ECX[0x13] + 4) + 0x50 + (int)in_ECX) = &PTR_LAB_00394328;
  *(int *)(*(int *)(in_ECX[0x13] + 4) + 0x48 + (int)in_ECX) = *(int *)(in_ECX[0x13] + 4) + -0x330;
  if (in_ECX[0xd6] != 0) {
    FUN_000db3e0(in_ECX[0xd6]);
  }
  piVar5 = in_ECX + 0xdb;
  iVar6 = 2;
  do {
    if (*piVar5 != 0) {
      FUN_000db3e0(*piVar5);
    }
    piVar5 = piVar5 + 2;
    iVar6 = iVar6 + -1;
  } while (iVar6 != 0);
  if (in_ECX[0xd9] != 0) {
    (**(code **)(*DAT_00469940 + 0x20))(in_ECX[0xd9],1);
    in_ECX[0xd9] = 0;
  }
  iVar6 = 2;
  piVar5 = in_ECX + 0xde;
  do {
    uVar1 = piVar5[-1];
    if ((uVar1 != 0) && ((uVar1 & 1) == 0)) {
      piVar5[-1] = 0;
      iVar2 = *(int *)(&DAT_00414da0 + (uVar1 * 0x19660d + 0x3c6ef35f >> 0x15) * 4);
      piVar4 = (int *)(&DAT_00414da0 + (uVar1 * 0x19660d + 0x3c6ef35f >> 0x15) * 4);
      while (iVar2 != 0) {
        piVar3 = (int *)*piVar4;
        if (piVar3 == piVar5 + -2) {
          *piVar4 = *(int *)*piVar4;
          break;
        }
        piVar4 = piVar3;
        iVar2 = *piVar3;
      }
    }
    iVar6 = iVar6 + -1;
    piVar5 = piVar5 + -2;
  } while (iVar6 != 0);
  uVar1 = in_ECX[0xd8];
  if ((uVar1 != 0) && ((uVar1 & 1) == 0)) {
    in_ECX[0xd8] = 0;
    iVar6 = *(int *)(&DAT_00414da0 + (uVar1 * 0x19660d + 0x3c6ef35f >> 0x15) * 4);
    piVar5 = (int *)(&DAT_00414da0 + (uVar1 * 0x19660d + 0x3c6ef35f >> 0x15) * 4);
    while (iVar6 != 0) {
      piVar4 = (int *)*piVar5;
      if (piVar4 == in_ECX + 0xd7) {
        *piVar5 = *(int *)*piVar5;
        break;
      }
      piVar5 = piVar4;
      iVar6 = *piVar4;
    }
  }
  uVar1 = in_ECX[0xd6];
  if ((uVar1 != 0) && ((uVar1 & 1) == 0)) {
    in_ECX[0xd6] = 0;
    piVar5 = (int *)(&DAT_00414da0 + (uVar1 * 0x19660d + 0x3c6ef35f >> 0x15) * 4);
    if (*(int *)(&DAT_00414da0 + (uVar1 * 0x19660d + 0x3c6ef35f >> 0x15) * 4) != 0) {
      while (piVar4 = (int *)*piVar5, piVar4 != in_ECX + 0xd5) {
        piVar5 = piVar4;
        if (*piVar4 == 0) {
          in_ECX[0x74] = &PTR_LAB_003948e8;
          FUN_0014a020();
          return;
        }
      }
      *piVar5 = *(int *)*piVar5;
    }
  }
  in_ECX[0x74] = &PTR_LAB_003948e8;
  FUN_0014a020();
  return;
}
