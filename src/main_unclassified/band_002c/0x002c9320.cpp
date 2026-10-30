/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 061BE8FCC5A4F7B4398F845FF88FDE8C3E79D6C7FCADBA39936028D0F3C00BAA
 * Entry: 0x002c9320, Ghidra index: 10136, label: FUN_002c9320
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t PTR_LAB_0038e614;
void FUN_002c9320(void)

{
  undefined4 *in_EAX;
  undefined4 in_ECX;
  undefined4 in_EDX;
  
  in_EAX[1] = in_ECX;
  in_EAX[2] = in_EDX;
  *in_EAX = PTR_LAB_0038e614;
  in_EAX[8] = 0x3f800000;
  in_EAX[9] = 0x40a00000;
  in_EAX[10] = 0x3f000000;
  in_EAX[0xb] = 0x41700000;
  in_EAX[0xc] = 0x3dcccccd;
  in_EAX[3] = 0x3f000000;
  in_EAX[4] = 0x3f666666;
  in_EAX[5] = 0x3f4ccccd;
  in_EAX[6] = 0x41200000;
  in_EAX[7] = 0x3dcccccd;
  return;
}
