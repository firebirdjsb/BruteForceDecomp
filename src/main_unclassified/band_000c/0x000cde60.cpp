/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: A3CBC80F8AF1D61BE19A08D9C3597C65B14877E0AC023577F9DF196F2A4ECEBE
 * Entry: 0x000cde60, Ghidra index: 2546, label: FUN_000cde60
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t *DAT_00443314;
extern uint32_t switchD_000cde76_caseD_1[];
void FUN_000cde60(void)

{
  byte *pbVar1;
  int iVar2;
  int *in_EAX;
  int in_ECX;
  
  switch(in_EAX[3]) {
  case 0:
    FUN_000ce0e0();
    FUN_000cdc40(*(undefined4 *)(in_ECX + 0x28));
    FUN_00234470();
    FUN_00234190(*(undefined4 *)(*in_EAX + 0x6c),in_ECX,0);
    return;
  case 1:
    goto switchD_000cde76_caseD_1;
  case 2:
    iVar2 = *(int *)(in_ECX + 0x28);
    pbVar1 = (byte *)(iVar2 + 0x24);
    *pbVar1 = *pbVar1 | 2;
    (**(code **)(*DAT_00443314 + 0x48))(DAT_00443314,iVar2);
    return;
  case 3:
    iVar2 = *(int *)(in_ECX + 0x28);
    pbVar1 = (byte *)(iVar2 + 0x24);
    *pbVar1 = *pbVar1 & 0xfd;
    (**(code **)(*DAT_00443314 + 0x44))(DAT_00443314,iVar2);
    return;
  case 4:
    FUN_00234470();
    FUN_000cdb10(in_ECX);
switchD_000cde76_caseD_1:
    return;
  case 5:
    iVar2 = *(int *)(in_ECX + 0x28);
    *(byte *)(iVar2 + 0x24) = *(byte *)(iVar2 + 0x24) | 2;
    (**(code **)(*DAT_00443314 + 0x48))(DAT_00443314,iVar2);
    *(undefined4 *)(iVar2 + 0x38) = 0;
    return;
  default:
    return;
  }
}
