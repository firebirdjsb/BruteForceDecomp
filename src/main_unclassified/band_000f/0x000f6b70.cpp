/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 99C449CA96DD2C0A8DAFD39637302F9EA4736A6D5716FB7977CF4E6D46C20911
 * Entry: 0x000f6b70, Ghidra index: 3087, label: FUN_000f6b70
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_003c0658;
extern uint32_t DAT_00469948;
int FUN_000f6b70(void)

{
  int iVar1;
  int in_EAX;
  int iVar2;
  int local_10 [4];
  
  if ((*(int *)(in_EAX + 4) == 0) || (iVar2 = *(int *)(*(int *)(in_EAX + 4) + 0x60), iVar2 == 0)) {
    local_10[0] = 0x11;
    local_10[1] = 0x12;
    local_10[2] = 0x13;
    local_10[3] = 0x14;
    iVar2 = 0;
    do {
      iVar1 = local_10[iVar2];
      if ((((-1 < iVar1) && (iVar1 < 0x19)) &&
          (iVar1 = *(int *)(DAT_00469948 + 0x250 + iVar1 * 4), iVar1 != 0)) &&
         ((*(float *)(iVar1 + 0x90) != 0.0 || (*(float *)(iVar1 + 0x80) != 0.0))))
      goto LAB_000f6c4c;
      iVar2 = iVar2 + 1;
    } while (iVar2 < 4);
    iVar2 = 0;
    do {
      iVar1 = local_10[iVar2];
      if (((-1 < iVar1) && (iVar1 < 0x19)) &&
         ((iVar1 = *(int *)(DAT_00469948 + 0x250 + iVar1 * 4), iVar1 != 0 &&
          ((*(float *)(iVar1 + 0x94) != 0.0 || (*(float *)(iVar1 + 0x8c) != 0.0)))))) {
LAB_000f6c4c:
        return local_10[iVar2];
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < 4);
    iVar2 = DAT_003c0658;
    if (DAT_003c0658 == 0x19) {
      iVar2 = 0x11;
    }
  }
  return iVar2;
}
