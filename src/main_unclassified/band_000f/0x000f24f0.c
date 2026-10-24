/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 0899FEEF7D56E484C5282A956E2B9A8C2EB93E8877AFD46B68E145B4968E0888
 * Entry: 0x000f24f0, Ghidra index: 3022, label: FUN_000f24f0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_0040d760;
extern uint32_t DAT_00469b58;
void FUN_000f24f0(void)

{
  int *in_EAX;
  int iVar1;
  undefined4 uVar2;
  /* Retail XBE 0x000f24f0 SUB ESP,0x80 reserves this frame.
   * 0x000f2530 LEA EDX,[ESP+0x14] (after saved registers and
   * two pushed arguments) addresses the frame start; the
   * formatter is passed an explicit 0x40-byte bound.
   * 0x000f253f LEA EDI,[ESP+0x0c] addresses the same buffer,
   * but FUN_0010a7d0's EDI register contract remains unverified. */
  undefined1 guest_stack_buffer[0x80];
  
  if (in_EAX != (int *)0x0) {
    iVar1 = (**(code **)(*in_EAX + 4))();
    if (iVar1 == 1) {
      iVar1 = **(int **)(DAT_00469b58 + 8);
      uVar2 = FUN_00102000();
      iVar1 = (**(code **)(iVar1 + 0x130))(uVar2);
      FUN_002ea9a9(guest_stack_buffer,0x40,&DAT_0040d760,iVar1 + 0x18);
      FUN_0010a7d0();
    }
  }
  return;
}
