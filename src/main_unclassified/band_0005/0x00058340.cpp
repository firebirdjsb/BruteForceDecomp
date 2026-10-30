/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: A0E944A4CEA68E7CC58F94FFBDC211BD7A0643A4F5C2B3D40EE089F0C7B861F9
 * Entry: 0x00058340, Ghidra index: 867, label: FUN_00058340
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* Xbox image VA 0x003085b0; address-only label. Link definition and role unverified. */
extern unsigned char LAB_003085b0;

/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t PTR_FUN_003a3f80;
void FUN_00058340(undefined4 *param_1,int param_2)

{
  byte bVar1;
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_003085b0;
  local_10 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &local_10;
  local_8 = 0;
  for (; param_2 != 0; param_2 = param_2 + -1) {
    if (param_1 != (undefined4 *)0x0) {
      *param_1 = &PTR_FUN_003a3f80;
      param_1[2] = 0;
      param_1[4] = 0;
      bVar1 = *(byte *)(param_1 + 5);
      *(byte *)(param_1 + 5) = bVar1 & 0xfe;
      *(byte *)(param_1 + 5) = bVar1 & 0xfc;
      *(byte *)(param_1 + 5) = bVar1 & 0xf8;
      if (param_1[2] != 0) {
        FUN_0008f6a0(0);
      }
      if (param_1[4] != 0) {
        FUN_0008f6a0(0);
      }
      param_1[6] = 0;
      FUN_00056c20();
    }
    param_1 = param_1 + 7;
  }
  *unaff_FS_OFFSET = local_10;
  return;
}
