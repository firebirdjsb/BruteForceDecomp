/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: A8B039C39266405A872B8437E99A3BE553AD16E0BF8FC4D2AB376B17D73CB441
 * Entry: 0x00203060, Ghidra index: 7279, label: FUN_00203060
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t PTR_FUN_003a479c;
extern uint32_t PTR_FUN_003a4f64;
void FUN_00203060(void)

{
  uint in_EAX;
  int in_ECX;
  undefined **local_40;
  undefined **local_3c;
  undefined4 local_38;
  int local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  int local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  byte local_8;
  byte local_4;
  
  if (in_EAX != 0) {
    local_8 = local_8 & 0xfe;
    local_4 = local_4 & 0xfe;
    local_38 = *(undefined4 *)(in_ECX + 0x40);
    local_40 = &PTR_FUN_003a479c;
    local_30 = 0;
    local_1c = 0;
    local_3c = &PTR_FUN_003a4f64;
    local_24 = 0;
    local_28 = 0;
    local_2c = 0;
    local_14 = 0;
    local_10 = 0;
    local_c = 0;
    local_18 = 0;
    if ((in_EAX & -(uint)((*(byte *)(in_EAX + 0x26) & 0x40) != 0)) != 0) {
      FUN_00012000(local_38,&local_40);
    }
    local_3c = &PTR_FUN_003a4f64;
    if (local_1c != 0) {
      FUN_0008f6e0();
    }
    if (local_30 != 0) {
      FUN_0008f6e0();
    }
  }
  return;
}
