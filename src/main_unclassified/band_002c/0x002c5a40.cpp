/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 284AE24F64D6BF30858A056656D1911F025CD502709A2EEABC6CC9804C748BFA
 * Entry: 0x002c5a40, Ghidra index: 10068, label: FUN_002c5a40
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* The original 0x002C5A91 and 0x002C5B08 instructions load a
 * DWORD guest address from the +0x60/+0x64 fields.  Decompilation
 * mislabeled their enclosing record as float*.  Preserve the 32-bit
 * pointer bits without performing a numeric float-to-integer cast.
 * Native PC guest-address translation is still unimplemented. */
static uint32_t bf_002c5a40_guest_pointer_word(const float *slot)
{
  uint32_t word;
  memcpy(&word, slot, sizeof word);
  return word;
}

void FUN_002c5a40(float *param_1,float param_2)
{
  float10 fVar4;
  float10 fVar5;
  uint32_t guest_primary;
  uint32_t guest_secondary;
  float *destination;
  float scale;

  fVar4 = (float10)FUN_002c5560(param_1,param_1[0x11],param_1[0x14],param_1[0x15],
                                param_2 * param_1[0x16]);
  fVar5 = (float10)FUN_002c5560(param_1,param_1[0xc],param_1[0xf],param_1[0x10],
                                param_2 * param_1[0x17]);
  guest_primary = bf_002c5a40_guest_pointer_word(param_1 + 0x18);
  if ((*(uint8_t *)(uintptr_t)guest_primary & 0x0c) == 0) {
    FUN_002b8d10((void *)(uintptr_t)(guest_primary + 0x8c),
                  param_1,(float)fVar5 * param_1[0xf]);
    FUN_002b8d10((void *)(uintptr_t)(guest_primary + 0x7c),
                  param_1 + 4,(float)fVar4 * param_1[0x14]);
  }

  param_1[0] = -param_1[0];
  param_1[1] = -param_1[1];
  param_1[2] = -param_1[2];

  /* MOVSS/MOVHPS/SHUFPS/MULPS/ADDPS at 0x002C5B1F..0x002C5B4F
   * operate on three 32-bit float lanes, not a binary64 value.
   * Reload +0x64 after the callbacks as the original MOV EAX does. */
  guest_secondary = bf_002c5a40_guest_pointer_word(param_1 + 0x19);
  destination = (float *)(uintptr_t)(guest_secondary + 0x8c);
  scale = (float)fVar5 * param_1[0x10];
  destination[0] += param_1[0] * scale;
  destination[1] += param_1[1] * scale;
  destination[2] += param_1[2] * scale;

  /* Identical three-lane SIMD contract at 0x002C5B77..0x002C5BA7. */
  guest_secondary = bf_002c5a40_guest_pointer_word(param_1 + 0x19);
  destination = (float *)(uintptr_t)(guest_secondary + 0x7c);
  scale = (float)fVar4 * param_1[0x15];
  destination[0] += param_1[8] * scale;
  destination[1] += param_1[9] * scale;
  destination[2] += param_1[10] * scale;
}
