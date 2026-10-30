/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 14F8ABFAB38715213BAC5FD3578FEEF80B1BE9D0DA4A8ABF144D9E8F8863E5FB
 * Entry: 0x000e3f50, Ghidra index: 2836, label: FUN_000e3f50
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* Existing 0x002EA01D allocation boundary takes one guest32 size and
 * returns guest32 EAX. No host allocation/pointer ABI is established. */
#include "bf_002ea01d_allocator_guest32.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t PTR_LAB_0039eff8;
undefined4 FUN_000e3f50(void)

{
  int in_EAX;
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)FUN_002ea01d(4);
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    *puVar1 = &PTR_LAB_0039eff8;
  }
  *(undefined4 **)(in_EAX + 0x4c) = puVar1;
  FUN_000e4350(puVar1);
  *(undefined4 *)(in_EAX + 0x50) = 0;
  *(undefined4 *)(in_EAX + 0x54) = 0;
  *(undefined4 *)(in_EAX + 0x58) = 0;
  *(undefined4 *)(in_EAX + 0x5c) = 0;
  *(undefined4 *)(in_EAX + 0x60) = 0;
  *(undefined4 *)(in_EAX + 100) = 0;
  *(undefined4 *)(in_EAX + 0x68) = 0;
  return 1;
}
