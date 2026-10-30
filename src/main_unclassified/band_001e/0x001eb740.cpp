/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: FCE66A4E49AEB18346A1D7DBF4F6082CDABF41C876DB481802C25328EEAE9163
 * Entry: 0x001eb740, Ghidra index: 6885, label: FUN_001eb740
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int FUN_001eb740(int *param_1)

{
  int in_ECX;
  /* Original MOV DWORD [ESP+0x14],0x80 initializes the first guest
   * incoming argument slot; the following virtual call takes its address.
   * Model this as a 32-bit word, not as the host argument pointer. */
  uint32_t guest_size_word = UINT32_C(0x80);
  
  (**(code **)(*param_1 + 0x20))(in_ECX + 0x18);
  (**(code **)(*param_1 + 0x54))(in_ECX + 0x1c,&guest_size_word);
  return param_1[3];
}
