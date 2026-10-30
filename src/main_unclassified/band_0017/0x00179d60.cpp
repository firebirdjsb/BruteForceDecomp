/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: E1CB13E7B50A424BD5CB0F71033BFBA83664665336EE10EFE4B97C77C3535A48
 * Entry: 0x00179d60, Ghidra index: 4995, label: FUN_00179d60
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t *DAT_00469940;
int FUN_00179d60(byte param_1)

{
  int in_EAX;
  int iVar1;
  int iVar2;
  int iVar3;
  float10 extraout_ST0;
  float10 fVar4;
  undefined1 local_10 [4];
  int local_c;
  float local_8;
  byte local_4;
  
  iVar1 = 0;
  if ((*(byte *)(in_EAX + 4) & 2) != 0) {
    local_4 = local_4 ^ (local_4 ^ param_1) & 1;
    iVar1 = *(int *)(in_EAX + 0x48);
    *(int *)(in_EAX + 0x48) = iVar1 + 1;
    local_c = iVar1;
    iVar2 = FUN_0017beb0(&param_1);
    fVar4 = extraout_ST0;
    if (iVar2 != 0) {
      fVar4 = (float10)(**(code **)(*DAT_00469940 + 100))(iVar2 + 4);
    }
    iVar2 = *(int *)(in_EAX + 0x2c);
    local_8 = (float)fVar4;
    iVar3 = FUN_000fb8a0(in_EAX + 0x28,iVar2,*(undefined4 *)(iVar2 + 4),local_10);
    FUN_0017a4b0();
    *(int *)(iVar2 + 4) = iVar3;
    **(int **)(iVar3 + 4) = iVar3;
  }
  return iVar1;
}
