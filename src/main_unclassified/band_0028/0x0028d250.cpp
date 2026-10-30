/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 34CD2FD11489434B5CB585C6401B3C98BA5A2C8F736B4EE827F8B92F056CECBD
 * Entry: 0x0028d250, Ghidra index: 9191, label: FUN_0028d250
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t PTR_LAB_003914c4;
extern uint32_t PTR_LAB_003914d0;
void FUN_0028d250(void)

{
  undefined4 in_ECX;
  undefined4 *unaff_ESI;
  
  *unaff_ESI = &PTR_LAB_003914d0;
  unaff_ESI[6] = 0;
  unaff_ESI[7] = 0;
  unaff_ESI[8] = 0;
  unaff_ESI[10] = 0;
  unaff_ESI[0xb] = 0;
  unaff_ESI[0xc] = 0;
  unaff_ESI[0xe] = 0;
  unaff_ESI[0xf] = 0;
  unaff_ESI[0x10] = 0;
  unaff_ESI[0x12] = 0;
  unaff_ESI[0x13] = 0;
  unaff_ESI[0x14] = 0;
  *(undefined1 *)((int)unaff_ESI + 0x5d) = 0;
  FUN_0028c430(unaff_ESI,0,in_ECX);
  *unaff_ESI = &PTR_LAB_003914c4;
  return;
}
