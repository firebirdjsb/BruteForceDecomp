/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 9112CEC19EC50511E943CCCFA0211AC24C321B97D3C2FA690589104D3FE870BA
 * Entry: 0x00039270, Ghidra index: 394, label: FUN_00039270
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Address from mapped original XBE; ABI/runtime mapping remains unverified. */
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern void FUN_0008f6a0(std::uint32_t guest_esi, std::uint32_t guest_word_0);

extern uint32_t PTR_FUN_003a4f68;
undefined4 * FUN_00039270(int param_1,int param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = ((unsigned char *)(uintptr_t)0x003085f0u);
  local_10 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &local_10;
  local_8 = 0;
  for (; param_1 != param_2; param_1 = param_1 + 0x18) {
    if (param_3 != (undefined4 *)0x0) {
      *param_3 = &PTR_FUN_003a4f68;
      param_3[5] = 0;
      uVar1 = *(undefined4 *)(param_1 + 0xc);
      uVar2 = *(undefined4 *)(param_1 + 8);
      param_3[1] = *(undefined4 *)(param_1 + 4);
      param_3[2] = uVar2;
      param_3[3] = uVar1;
      if (param_3[5] != *(int *)(param_1 + 0x14)) {
        FUN_0008f6a0(*(int *)(param_1 + 0x14));
      }
    }
    param_3 = param_3 + 6;
  }
  *unaff_FS_OFFSET = local_10;
  return param_3;
}
