/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 6D630F79C3C31ABEDD94478298D44022A2E330B992C33125D85E6644BDE2446B
 * Entry: 0x002099e0, Ghidra index: 7325, label: FUN_002099e0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t PTR_LAB_003a3fb4;
void FUN_002099e0(void)

{
  undefined1 uVar1;
  int in_EAX;
  int iVar2;
  undefined **local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  iVar2 = FUN_00209620();
  if (*(int *)(in_EAX + 0xc4) != iVar2) {
    FUN_0008f6a0(iVar2);
  }
  *(byte *)(in_EAX + 0xe4) = *(byte *)(in_EAX + 0xe4) & 0xf7;
  if (*(int *)(in_EAX + 0xc4) != 0) {
    uVar1 = 1;
    if (*(int *)(*(int *)(*(int *)(in_EAX + 0xc4) + 0xc) + 4) == 3) {
      uVar1 = FUN_00209900();
    }
    FUN_002096e0(uVar1);
    local_8 = *(undefined4 *)(in_EAX + 0xc4);
    local_14 = &PTR_LAB_003a3fb4;
    local_4 = 0xffffffff;
    local_10 = 0x2e;
    local_c = 0;
    FUN_001ff0a0(&local_14);
  }
  return;
}
