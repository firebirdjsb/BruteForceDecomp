/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 81A3A9C6C0567AE69005F336DAE16DFE93D8AF794CBBECA71A8B75DA59B25F6B
 * Entry: 0x00040280, Ghidra index: 481, label: FUN_00040280
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t PTR_FUN_003a4f64;
extern uint32_t PTR_LAB_0039cc18;
extern uint32_t PTR_LAB_003a3fcc;
undefined4 FUN_00040280(undefined4 param_1)

{
  int in_EAX;
  undefined1 local_160 [4];
  undefined **local_15c;
  int local_150;
  int local_13c;
  undefined **local_120 [65];
  undefined4 local_1c;
  undefined1 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  int local_8;
  undefined4 local_4;
  
  local_8 = FUN_000120f0();
  if (((*(byte *)(*(int *)(local_8 + 0xc) + 0x1a9) & 4) != 0) &&
     (((*(byte *)(in_EAX + 0x10c) & 1) == 0 ||
      (*(float *)(in_EAX + 0x108) < 0.0 != (*(float *)(in_EAX + 0x108) == 0.0))))) {
    *(undefined4 *)(in_EAX + 0x8b8) = param_1;
    *(undefined1 *)(in_EAX + 0x8b4) = 0;
    *(undefined4 *)(in_EAX + 0x8b0) = 0;
    *(undefined4 *)(in_EAX + 0x8c0) = 2;
    *(undefined4 *)(in_EAX + 0xf0) = 0x40000000;
    *(undefined4 *)(in_EAX + 0xe8) = 0x40000000;
    *(byte *)(in_EAX + 0xec) = *(byte *)(in_EAX + 0xec) & 0xf9 | 1;
    *(undefined4 *)(in_EAX + 0xe0) = 0x40000000;
    *(undefined4 *)(in_EAX + 0xd8) = 0x40000000;
    *(byte *)(in_EAX + 0xdc) = *(byte *)(in_EAX + 0xdc) & 0xf9 | 1;
    *(undefined4 *)(in_EAX + 0x110) = 0x40400000;
    *(undefined4 *)(in_EAX + 0x108) = 0x40400000;
    *(byte *)(in_EAX + 0x10c) = *(byte *)(in_EAX + 0x10c) & 0xf9 | 1;
    *(undefined4 *)(in_EAX + 0x100) = 0x40000000;
    *(undefined4 *)(in_EAX + 0xf8) = 0x40000000;
    *(byte *)(in_EAX + 0xfc) = *(byte *)(in_EAX + 0xfc) & 0xf9 | 1;
    FUN_000122d0(0x5e);
    local_14 = 0;
    local_10 = 0;
    local_1c = 0;
    local_18 = 1;
    local_c = 0;
    local_120[0] = &PTR_LAB_003a3fcc;
    local_4 = 0x41c80000;
    FUN_0004d520(local_120,local_160);
    local_120[0] = &PTR_LAB_0039cc18;
    local_15c = &PTR_FUN_003a4f64;
    if (local_13c != 0) {
      FUN_0008f6e0();
    }
    if (local_150 != 0) {
      FUN_0008f6e0();
    }
    return 1;
  }
  return 0;
}
