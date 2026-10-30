/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 07FC603D0797CFE1A51579BBAB18337D72DF001AF65A5B47B2C883574B5FEBF1
 * Entry: 0x000571e0, Ghidra index: 846, label: FUN_000571e0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern void FUN_00056d50(int param_1,int param_2);
extern void FUN_000581f0(int *param_1,int param_2,int param_3,int param_4);
extern void FUN_0008f6e0(std::uint32_t guest_edx);

extern uint32_t PTR_FUN_003a3f80;
undefined1 FUN_000571e0(undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined4 in_EAX;
  undefined4 in_ECX;
  int in_EDX;
  undefined1 uVar2;
  undefined **local_1c [2];
  int local_14;
  int local_c;
  
  puVar1 = param_1;
  uVar2 = 0;
  *param_1 = 0;
  FUN_00056d50(in_ECX,in_EAX);
  FUN_000581f0(&param_1,*(undefined4 *)(in_EDX + 4),*(undefined4 *)(in_EDX + 8),local_1c,0);
  if (((param_1 != *(undefined4 **)(in_EDX + 8)) && (param_1[2] == local_14)) &&
     (param_1[4] == local_c)) {
    *puVar1 = param_1;
    uVar2 = 1;
  }
  local_1c[0] = &PTR_FUN_003a3f80;
  if (local_c != 0) {
    FUN_0008f6e0();
  }
  if (local_14 != 0) {
    FUN_0008f6e0();
  }
  return uVar2;
}
