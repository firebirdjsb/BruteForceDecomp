/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 51B03FC229BC9B002C77A3EFA792E4CEC9984BCA9CC2CEA358DB0E0933B2F11B
 * Entry: 0x000a7160, Ghidra index: 1983, label: FUN_000a7160
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"

/* XBE 0x000A7160-0x000A721C. Positions are relative to ESP on entry:
 * the seven local DWORD slots cover [ESP-0x1c, ESP-0x01].
 * After the preserved-register pushes, the callee FUN_000a7810 receives
 * &key_words[0] as its stack argument, EBX=(incoming EBP)+0x108,
 * and EDI=&result_node. That callee writes result_node and result_status,
 * but the C call below DOES NOT bind EBX or EDI. Guest addresses remain
 * 32-bit values; host-pointer casts and virtual calls are ABI_UNVERIFIED.
 */
typedef struct {
  uint32_t initial_esi;       /* guest [entry ESP-0x1c] */
  uint32_t intermediate;      /* guest [entry ESP-0x18] */
  uint32_t result_node;       /* guest [entry ESP-0x14] */
  uint8_t result_status;      /* guest [entry ESP-0x10] */
  uint8_t result_unknown[3];  /* untouched high bytes remain unknown */
  uint32_t key_words[3];     /* guest [entry ESP-0x0c .. ESP-0x01] */
} bf_000a7160_guest_frame;
_Static_assert(sizeof(bf_000a7160_guest_frame) == 28, "guest local-frame size");
_Static_assert(offsetof(bf_000a7160_guest_frame, intermediate) == 4, "guest intermediate offset");
_Static_assert(offsetof(bf_000a7160_guest_frame, result_node) == 8, "guest result offset");
_Static_assert(offsetof(bf_000a7160_guest_frame, result_status) == 12, "guest result flag offset");
_Static_assert(offsetof(bf_000a7160_guest_frame, key_words) == 16, "guest key offset");

undefined4 FUN_000a7160(int param_1)
{
  int *in_EAX;
  undefined4 uVar1;
  bf_000a7160_guest_frame guest_frame;

  uVar1 = 0;
  if (in_EAX != (int *)0x0) {
    /* At 0x000A7179/7D, the original code stores EBX=0 and ESI. */
    guest_frame.intermediate = 0;
    guest_frame.initial_esi = (uint32_t)(uintptr_t)in_EAX;
    (**(code **)(*in_EAX + 4))(in_EAX);
    /* At 0x000A7191, EDI is the second virtual call's EAX result. */
    uint32_t *second_call_result = (uint32_t *)(uintptr_t)
        (**(code **)(*in_EAX + 0xc))(in_EAX);
    if (guest_frame.intermediate != 0) {
      uint32_t guest_temp = guest_frame.intermediate;
      (**(code **)(*(uint32_t *)(uintptr_t)guest_temp + 8))((void *)(uintptr_t)guest_temp);
      guest_frame.intermediate = 0;
    }
    /* 0x000A71A7-0x000A71AE pushes &intermediate, 0 and initial ESI. */
    (**(code **)(*in_EAX + 0x30))(in_EAX, 0, &guest_frame.intermediate);
    guest_frame.key_words[0] = *second_call_result;
    guest_frame.key_words[1] = guest_frame.initial_esi;
    if (guest_frame.initial_esi != 0) {
      uint32_t guest_ref = guest_frame.initial_esi;
      (**(code **)(*(uint32_t *)(uintptr_t)guest_ref + 4))((void *)(uintptr_t)guest_ref);
    }
    guest_frame.key_words[2] = guest_frame.intermediate;
    if (guest_frame.intermediate != 0) {
      uint32_t guest_ref = guest_frame.intermediate;
      (**(code **)(*(uint32_t *)(uintptr_t)guest_ref + 4))((void *)(uintptr_t)guest_ref);
    }
    /* XBE 0x000A71DB-0x000A71EA sets the implicit guest EDI, EBX before
     * passing &key_words[0]. The host C call does not carry those registers. */
    FUN_000a7810(guest_frame.key_words);
    *(byte *)(param_1 + 0x114) = *(byte *)(param_1 + 0x114) | 1;
    /* Original calls set guest ESI=&key_words[1], then &initial_esi.
     * These guest register inputs also remain ABI_UNVERIFIED. */
    FUN_000a7010();
    FUN_000a7010();
    uVar1 = 1; /* Only AL is established by x86 at 0x000A7211. */
  }
  return uVar1;
}