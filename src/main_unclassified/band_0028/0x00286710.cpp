/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 230643FAEEF8627778B4190BF72A538E84E43ED9344A3A80A0B481270B1B462A
 * Entry: 0x00286710, Ghidra index: 9083, label: FUN_00286710
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_0046d064;
undefined4 FUN_00286710(undefined4 param_1,int *param_2)

{
  int iVar1;
  undefined4 *puVar2;
  uint32_t guest_event_id = (uint32_t)(uintptr_t)param_2; /* second incoming Xbox argument DWORD */
  int *guest_state = (int *)(uintptr_t)param_1; /* first incoming Xbox argument */
  uint32_t guest_interface_word = 0; /* reserved local guest pointer slot */
  int *guest_interface;
  
  /* LEA EDX,[ESP+8] at 0x00286719 addresses the reserved local.
   * LEA EDX,[ESP+0x14] at 0x0028672e addresses the second incoming
   * argument DWORD, NOT the first callback's local pointer. */
  (**(code **)(*param_2 + 0x10))(param_2,&guest_interface_word);
  guest_interface = (int *)(uintptr_t)guest_interface_word;
  (**(code **)(*guest_interface + 0x20))(guest_interface,&guest_event_id);
  if (guest_event_id < 0x1bdf702e) {
    if (guest_event_id == 0x1bdf702d) {
      iVar1 = guest_state[0x1d];
      guest_state[0x1d] = iVar1 + 1;
      guest_state[10] = iVar1 * 0x10 + *(int *)(guest_state[9] + 0x1c);
    }
    else if (guest_event_id == 0x4743737) {
      guest_state[0x10] = 0x41f00000;
    }
    else if (guest_event_id == 0x1517d698) {
      guest_state[8] = 0;
      guest_state[0x1b] = 0;
    }
    else if (guest_event_id == 0x1b0f2ab6) {
      iVar1 = guest_state[0x1b];
      guest_state[0x1b] = iVar1 + 1;
      guest_state[8] = *(int *)(guest_state[7] + 0x14) + iVar1 * 0x18;
      guest_state[0xd] = DAT_0046d064;
      guest_state[0x1c] = 0;
      guest_state[9] = 0;
    }
  }
  else if (guest_event_id == 0xe0d7811b) {
    puVar2 = (undefined4 *)FUN_002ea01d(0x28);
    if (puVar2 == (undefined4 *)0x0) {
      puVar2 = (undefined4 *)0x0;
    }
    else {
      puVar2[3] = 0;
      puVar2[5] = 0;
      puVar2[7] = 0;
      puVar2[8] = 0;
      puVar2[9] = 0;
      puVar2[1] = 0xc7c35000;
      puVar2[2] = 0;
      *puVar2 = 0;
      *(undefined2 *)(puVar2 + 4) = 0xffff;
    }
    iVar1 = guest_state[0x1c];
    guest_state[0x1c] = iVar1 + 1;
    guest_state[9] = (int)puVar2;
    *(undefined4 **)(*(int *)(guest_state[8] + 8) + iVar1 * 4) = puVar2;
    guest_state[0xc] = DAT_0046d064;
    guest_state[0x1d] = 0;
    guest_state[10] = 0;
  }
  else if (guest_event_id == 0xf1b71e33) {
    guest_state[0x1e] = 0;
    guest_state[8] = 0;
    guest_state[9] = 0;
  }
  if (guest_interface != (int *)0x0) {
    (**(code **)(*guest_interface + 8))(guest_interface);
  }
  return 0;
}
