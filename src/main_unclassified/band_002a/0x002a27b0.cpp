/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 875089D09F83152FD867F52B4CE000A053CF6BC86B0B0A1006B99F2AA9891F73
 * Entry: 0x002a27b0, Ghidra index: 9522, label: FUN_002a27b0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
#include "bf_guest_insert_frame_6c.h"

/* Original 0x002A27B0-0x002A2817:
 *   EAX: guest result pointer (preserved and returned)
 *   ECX: address of six consecutive guest DWORDs (source +0x00...+0x14)
 *   guest stack: three value DWORDs and fourth trailing address
 *   RET 0x10: four outgoing stack arguments popped by callee.
 * These original register inputs are now EXPLICIT for host C linkage.
 * Windows/Linux/Android entry ABI and guest address translation remain TODO. */
uint32_t *FUN_002a27b0(uint32_t *guest_result,
                        const uint32_t *six_guest_words,
                        uint32_t guest_word_0,
                        uint32_t guest_word_7,
                        float guest_word_8_as_float,
                        const uint32_t *guest_word_9_address)
{
  /* The original fourth guest-stack pointer is passed but not
   * dereferenced inside this particular helper. */
  (void)guest_word_9_address;
  guest_result[2] = six_guest_words[0];  /* 0x002A27CD: [EAX+0x08] */
  guest_result[3] = six_guest_words[1];  /* 0x002A27D4: [EAX+0x0C] */
  guest_result[4] = six_guest_words[2];  /* 0x002A27DB: [EAX+0x10] */
  guest_result[5] = six_guest_words[3];  /* 0x002A27EB: [EAX+0x14] */
  guest_result[6] = six_guest_words[4];  /* 0x002A27F2: [EAX+0x18] */
  guest_result[7] = six_guest_words[5];  /* 0x002A27F5: [EAX+0x1C] */
  guest_result[8] = guest_word_7;        /* 0x002A2804: [EAX+0x20] */
  memcpy(guest_result + 9, &guest_word_8_as_float, sizeof(float));
  guest_result[0x11] = guest_word_0;    /* 0x002A280E: [EAX+0x44] */
  /* Original 0x002A27B6-0x002A2811 uses x87 FLD / FDIV / FSTP.
   * C spelling below preserves the arithmetic, NOT exact x87 rounding. */
  float reciprocal = 1.0f / guest_word_8_as_float;
  memcpy(guest_result + 0x10, &reciprocal, sizeof(float));
  return guest_result;                  /* Original EAX survives RET 0x10. */
}
