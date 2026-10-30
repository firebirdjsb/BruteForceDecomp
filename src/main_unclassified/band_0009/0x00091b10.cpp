/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: C402757BF0F90E619D3371F7D56D6004C968F92904708A7F4616C51F80941311
 * Entry: 0x00091b10, Ghidra index: 1789, label: FUN_00091b10
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* Callee source declares FUN_0008f670(void), but uses incoming ECX implicitly.
 * Callback/register ABI is ABI_UNVERIFIED; declaration enables C11 inspection only. */
extern void FUN_0001fe00(undefined4 param_1,undefined4 param_2,int param_3,code *param_4);

extern void FUN_0008f670(void);
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t *DAT_00443308;
void FUN_00091b10(void)

{
  int iVar1;
  int in_ECX;
  
  iVar1 = *(int *)(in_ECX + 8);
  if (iVar1 != 0) {
    FUN_0001fe00(iVar1,0xc,*(undefined4 *)(iVar1 + -4),FUN_0008f670);
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0(iVar1 + -4);
  }
  *(undefined4 *)(in_ECX + 8) = 0;
  (**(code **)(*DAT_00443308 + 0x48))(DAT_00443308);
  return;
}
