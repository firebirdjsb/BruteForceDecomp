/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 5EF10FA15541DD90CD4FF6FAA783F9581FB44AA10D87B765E3B69FB0C8F5F577
 * Entry: 0x000cdd10, Ghidra index: 2544, label: FUN_000cdd10
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
extern uint FUN_0023c4e0(void);
extern void FUN_000ce0e0(void);
extern void FUN_000cdc40(void);
extern undefined4 FUN_00234190(int param_1,int param_2,int param_3);
extern void FUN_000cde30(void);
extern void FUN_0008f6a0(std::uint32_t guest_esi, std::uint32_t guest_word_0);
extern void FUN_000cdae0(undefined4 guest_stack_word);
extern void FUN_0008f6e0(std::uint32_t guest_edx);

int FUN_000cdd10(undefined4 param_1)

{
  undefined4 uVar1;
  char cVar2;
  int *in_EAX;
  int iVar3;
  undefined4 local_30;
  int local_2c;
  int local_20;
  int local_1c;
  int local_10;
  undefined4 uStack_8;
  
  if (*in_EAX == 0) {
    return 0;
  }
  if ((*(int *)(*(int *)(*in_EAX + 0xc) + 0xcc) == 0) || (local_2c = in_EAX[1], local_2c == 0)) {
    return 0;
  }
  iVar3 = FUN_000cda00(param_1);
  local_30 = 0;
  cVar2 = FUN_0023c4e0(&local_30);
  if (cVar2 != '\0') {
    FUN_000ce0e0();
    uVar1 = local_30;
    FUN_000cdc40(local_30);
    local_1c = in_EAX[6];
    local_20 = in_EAX[4];
    local_10 = in_EAX[5];
    uStack_8 = (**(code **)(*(int *)*in_EAX + 0x40))();
    FUN_00234190(*(undefined4 *)(*in_EAX + 0x6c),iVar3,0);
    FUN_000cde30();
    *(undefined4 *)(iVar3 + 0x28) = uVar1;
    if (*(int *)(iVar3 + 0x24) != *in_EAX) {
      FUN_0008f6a0(*in_EAX);
    }
    FUN_000cdae0(iVar3);
    return iVar3;
  }
  if (iVar3 != 0) {
    if (*(int *)(iVar3 + 0x24) != 0) {
      FUN_0008f6e0();
    }
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0(iVar3);
  }
  return 0;
}
