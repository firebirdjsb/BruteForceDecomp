/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: C36013DBB242CC5650305F9A3CC8162CDAD9F82EDFD9C962A1EC85407051AE92
 * Entry: 0x00380527, Ghidra index: 13531, label: FUN_00380527
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_0041267a;
extern uint32_t DAT_004126d0;
void FUN_00380527(undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  
  KeCancelTimer(&DAT_004126d0);
  iVar1 = XAPILIB__GetTypeInformation_8();
  if (iVar1 != 0) {
    FUN_00381139();
    iVar2 = FUN_003800bb();
    if (iVar2 == 0) {
      *(undefined1 *)((int)param_1 + 0xb) = 0;
      *(int *)((int)param_1 + 0xe) = iVar1;
      *(undefined1 *)(param_1 + 3) = 8;
      *(undefined1 *)((int)param_1 + 0xd) = 1;
      FUN_00380fd9(*(undefined1 *)((int)param_1 + 10));
      FUN_0038274f(0);
      *(byte *)(param_1 + 1) = *(byte *)(param_1 + 1) | 8;
      return;
    }
  }
  *param_1 = 0;
  *(byte *)(param_1 + 1) = *(byte *)(param_1 + 1) & 0xfe;
  DAT_0041267a = DAT_0041267a + -1;
  FUN_00380fc8(0);
  FUN_0038274f(0x80000400);
  return;
}
