/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 78F12FEE9C53005238D04FE3BE4856B4CAC95B32536155111463AB99C3BB1115
 * Entry: 0x00058430, Ghidra index: 868, label: FUN_00058430
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* Xbox image VA 0x003089a0; address-only label. Link definition and role unverified. */
extern unsigned char LAB_003089a0;

/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t PTR_FUN_003a3f80;
undefined4 * FUN_00058430(int param_1,int param_2,undefined4 *param_3)

{
  byte bVar1;
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_003089a0;
  local_10 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = local_10;
  local_8 = 0;
  for (; param_1 != param_2; param_1 = param_1 + 0x1c) {
    if (param_3 != (undefined4 *)0x0) {
      *param_3 = PTR_FUN_003a3f80;
      param_3[2] = 0;
      param_3[4] = 0;
      bVar1 = *(byte *)(param_3 + 5);
      *(byte *)(param_3 + 5) = bVar1 & 0xfe;
      *(byte *)(param_3 + 5) = bVar1 & 0xfc;
      *(byte *)(param_3 + 5) = bVar1 & 0xf8;
      if (param_3[2] != 0) {
        FUN_0008f6a0(0);
      }
      if (param_3[4] != 0) {
        FUN_0008f6a0(0);
      }
      param_3[6] = 0;
      FUN_00056c20();
    }
    param_3 = param_3 + 7;
  }
  *unaff_FS_OFFSET = local_10;
  return param_3;
}
