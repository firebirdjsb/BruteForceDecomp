/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 5465E92F8AEACCB5FB33D0935E7747981D1D0F7C458ED387D176C73E2F88599F
 * Entry: 0x0014bd80, Ghidra index: 4329, label: FUN_0014bd80
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t PTR_FUN_0039b228;
void FUN_0014bd80(void)

{
  int iVar1;
  int iVar2;
  int in_EAX;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int local_c;
  
  FUN_0014bcd0();
  puVar3 = (undefined4 *)FUN_002ea01d(0x20);
  if (puVar3 == (undefined4 *)0x0) {
    puVar3 = (undefined4 *)0x0;
  }
  else {
    FUN_0014b540();
    *puVar3 = &PTR_FUN_0039b228;
  }
  iVar1 = *(int *)(in_EAX + 0xb8);
  *(undefined4 **)(in_EAX + 0xbc) = puVar3;
  if (iVar1 != 0) {
    local_c = 0;
    do {
      iVar2 = *(int *)(iVar1 + local_c * 4);
      if ((iVar2 != 0) && (local_c != 0)) {
        if (*(int *)(iVar2 + 4) == 0) {
          iVar5 = 0;
        }
        else {
          iVar5 = *(int *)(iVar2 + 8) - *(int *)(iVar2 + 4) >> 2;
        }
        FUN_0014c470(0);
        iVar6 = 0;
        if (0 < iVar5) {
          do {
            if (*(int *)(*(int *)(iVar2 + 4) + iVar6 * 4) == 0) {
              *(undefined4 *)(*(int *)(in_EAX + 0xc) + iVar6 * 4) = 0;
            }
            else {
              iVar4 = FUN_002ea01d(0x20);
              if ((iVar4 != 0) && (iVar4 = FUN_0014b540(), iVar4 != 0)) {
                *(undefined4 *)(iVar4 + 0x14) = 2;
                *(int *)(*(int *)(in_EAX + 0xc) + iVar6 * 4) = iVar4;
              }
            }
            iVar6 = iVar6 + 1;
          } while (iVar6 < iVar5);
        }
      }
      local_c = local_c + 1;
      in_EAX = in_EAX + 0x10;
    } while (local_c < 10);
  }
  return;
}
